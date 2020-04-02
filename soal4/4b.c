#include<stdio.h>
#include<pthread.h>
#include<tgmath.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <stdlib.h>

struct v {
   int i; 
};
int num1[22], num2[22];
int sum( int n){

	if(n==0 || n==1)
		return 1;
	else 
		return n+sum(n-1);
}
void *factsum(void *p){
	struct v *data = p;
	int num;
	for(int i = 0; i < 20; i++) {
			num = sum(num2[data->i]);
   	}
	num1[data->i] = num;
pthread_exit(0);
}

int main(){
	key_t key = 12345;
	int i, j;
	int* hasil;

	int shmid = shmget(key, sizeof(int)*4*5, IPC_CREAT | 0666);
   	hasil  = (int *)shmat(shmid, NULL, 0);
	printf("Hasil perkalian matriks sebelumnya\n");
        for(int i = 0; i < 4; i++) {
      		for(int j = 0; j < 5; j++) {
		printf("%d ", hasil[i*5+j]);
		num2[i*5+j] = hasil[i*5+j];
      		}
      		printf("\n");
   	}
	printf("\n");
	for(int i = 0; i < 20; i++) {
		struct v *data = (struct v *) malloc(sizeof(struct v));
		data->i = i;
		
		pthread_t tid;   
         	pthread_attr_t attr; 
         	pthread_attr_init(&attr);
		pthread_create(&tid,&attr,factsum,data);
		pthread_join(tid, NULL);
   	}
	printf("Matriks tiap elemennya di sum\n");
	 for(i = 0; i < 4; i++) {
      		for(j = 0; j < 5; j++) {
		printf("%d ", num1[i*5+j]);
      }
      printf("\n");
   }
}
