# SoalShiftSISOP20_modul3_A04
Praktikum Modul 3 Sisop 2020<br/>
05111840000051 Juwita Kartika Rani<br/>
05111840000097 Alie Husaini R.<br/>

# Soal 4
1. Buatlah program C dengan nama "​ 4a.c​ ", yang berisi program untuk melakukan perkalian matriks. Ukuran matriks pertama adalah ​ 4x2​ , dan matriks kedua ​ 2x5​ . Isi dari matriks didefinisikan ​ di dalam kodingan. Matriks nantinya akan berisi angka 1-20 (​ tidak perlu​ dibuat filter angka).<br/>
![matriks iden](https://user-images.githubusercontent.com/56763570/78313829-ef1e0200-750c-11ea-91a8-7b8438fb3b49.jpg)<br/>
Mendifinisikan matriks A, B, C sebagai variabel global serta membuat struct v dengan i sebagai baris dan j sebagai kolom
![create thread](https://user-images.githubusercontent.com/56763570/78313930-373d2480-750d-11ea-821d-62850c9855de.jpg)
Kemudian menetapkan baris dan kolom pada setiap thread dengan struct data. Kemudian membuat thread seperti template modul 3. 
![call fungsi](https://user-images.githubusercontent.com/56763570/78313966-5c319780-750d-11ea-8782-f6640e1f2e90.jpg)<br/>
Saat membuat thread baru dengan phtread_create, di parameter ketiga memanggil fungsi runner, yaitu untuk menhitung perkalian antara dua buah matriks. 
![4a1](https://user-images.githubusercontent.com/56763570/78314031-8aaf7280-750d-11ea-894a-eb6f2ab79277.jpeg)<br/>
struct v * data digunakan untuk menampung nilai tiap elemen matriks
perulangan untuk perkalian tiap elemen matriks dan hasilnya di letakkan di matriks C
![printf](https://user-images.githubusercontent.com/56763570/78314207-1e813e80-750e-11ea-8757-70571b32be70.jpg)<br/>
fungsi print matrix


