# SoalShiftSISOP20_modul3_A04
Praktikum Modul 3 Sisop 2020<br/>
05111840000051 Juwita Kartika Rani<br/>
05111840000097 Alie Husaini R.<br/>

# Soal 4
1. Buatlah program C dengan nama "​ 4a.c​ ", yang berisi program untuk melakukan perkalian matriks. Ukuran matriks pertama adalah ​ 4x2​ , dan matriks kedua ​ 2x5​ . Isi dari matriks didefinisikan ​ di dalam kodingan. Matriks nantinya akan berisi angka 1-20 (​ tidak perlu​ dibuat filter angka).<br/>
gambar matriks
Mendifinisikan matriks A, B, C sebagai variabel global serta membuat struct v dengan i sebagai baris dan j sebagai kolom
Kemudian menetapkan baris dan kolom pada setiap thread dengan struct data. Kemudian membuat thread seperti template modul 3. 
pthread_create(&tid,&attr,runner,data); gambar
Saat membuat thread baru dengan phtread_create, di parameter ketiga memanggil fungsi runner, yaitu untuk menhitung perkalian antara dua buah matriks. 
gambar fungsi runner
struct v * data digunakan untuk menampung nilai tiap elemen matriks
gambar perkalian
perulangan untuk perkalian tiap elemen matriks dan hasilnya di letakkan di matriks C
gambar fungsi print matrix


