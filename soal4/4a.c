#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#define M 4
#define N 2
#define L 5

int A [M][N] = { {1,1}, {2,3}, {1,2}, {1,1} };
int B [N][L] = { {1,2,1,3,2}, {1,2,2,1,1} };
int C [M][L];

struct v {
   int i; 
   int j;
};

void *runner(void *param) {
   struct v *data = param; // untuk menampung data(nilai elemen matrix)
   int n, sum = 0;

   //perkalian baris dan kolom
   for(n = 0; n< M; n++){
      sum += A[data->i][n] * B[n][data->j];
   }
   //meletakkan hasil perkalian dari tiap baris dan kolom
   C[data->i][data->j] = sum;

   //Exit thread
   pthread_exit(0);
}

int main(int argc, char *argv[]) {

   int i,j;
   key_t key = 12345;
   int* hasil;

   int shmid = shmget(key, sizeof(int)*4*5, IPC_CREAT | 0666);
   hasil = (int *)shmat(shmid, NULL, 0);
   printf("Matriks 1\n");
    for (i = 0; i < M; i++){ 
        for(j = 0; j < N; j++) 
            printf("%d ",A[i][j]); 
        printf("\n"); 
    }
    printf("Matriks 2\n");               
    for (i = 0; i < N; i++){ 
        for(j = 0; j < L; j++) 
            printf("%d ",B[i][j]); 
        printf("\n");     
    } 
   for(i = 0; i < M; i++) {
      for(j = 0; j < L; j++) {
         //menetapkan baris dan kolom pada setiap thread
         struct v *data = (struct v *) malloc(sizeof(struct v));
         data->i = i;
         data->j = j;
         /* Now create the thread passing it data as a parameter */
	 pthread_t tid;       //Thread ID
         pthread_attr_t attr; //kumpulan thread attributes
         //Get the default attributes
         pthread_attr_init(&attr);
         //Membuat thread
         pthread_create(&tid,&attr,runner,data);
         //Menunggu thread sebelumnya untuk selesai terlebih dahulu
         pthread_join(tid, NULL);
      }
   }

   //Print hasil perkalian matrix
   printf("Hasil perkalian matriks\n"); 
   for(i = 0; i < M; i++) {
      for(j = 0; j < L; j++) {
	hasil[i*5+j] = C[i][j];
	printf("%d ", C[i][j]);
      }
      printf("\n");
   }
        shmdt(hasil);
}
