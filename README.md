# SoalShiftSISOP20_modul3_A04
Praktikum Modul 3 Sisop 2020<br/>
05111840000051 Juwita Kartika Rani<br/>
05111840000097 Alie Husaini R.<br/>

# Soal 4
1. Buatlah program C dengan nama "​ 4a.c​ ", yang berisi program untuk melakukan perkalian matriks. Ukuran matriks pertama adalah ​ 4x2​ , dan matriks kedua ​ 2x5​ . Isi dari matriks didefinisikan ​ di dalam kodingan. Matriks nantinya akan berisi angka 1-20 (​ tidak perlu​ dibuat filter angka).<br/>
<br/>![matriks iden](https://user-images.githubusercontent.com/56763570/78313829-ef1e0200-750c-11ea-91a8-7b8438fb3b49.jpg)<br/>
Mendifinisikan matriks A, B, C sebagai variabel global serta membuat struct v dengan i sebagai baris dan j sebagai kolom
<br/>![create thread](https://user-images.githubusercontent.com/56763570/78313930-373d2480-750d-11ea-821d-62850c9855de.jpg)<br/>
Kemudian menetapkan baris dan kolom pada setiap thread dengan struct data. Kemudian membuat thread seperti template modul 3. 
<br/>![call fungsi](https://user-images.githubusercontent.com/56763570/78313966-5c319780-750d-11ea-8782-f6640e1f2e90.jpg)<br/>
Saat membuat thread baru dengan phtread_create, di parameter ketiga adalah fungsi runner untuk menhitung perkalian antara dua buah matriks. 
<br/>![4a1](https://user-images.githubusercontent.com/56763570/78314031-8aaf7280-750d-11ea-894a-eb6f2ab79277.jpeg)<br/>
struct v * data digunakan untuk menampung nilai tiap elemen matriks
perulangan untuk perkalian tiap elemen matriks dan hasilnya di letakkan di matriks C
<br/>![printf](https://user-images.githubusercontent.com/56763570/78314207-1e813e80-750e-11ea-8757-70571b32be70.jpg)<br/>
 print matriks

![4ahas](https://user-images.githubusercontent.com/56763570/78314393-b3843780-750e-11ea-9ca1-e5ea20b3c56e.jpg)<br/>

2. Buatlah program C kedua dengan nama " 4b.c ". Program ini akan mengambil variabel hasil perkalian matriks dari program "4a.c" (program sebelumnya), dan tampilkan hasil matriks tersebut ke layar. ( Catatan! : gunakan shared memory)<br/>
Setelah ditampilkan, berikutnya untuk setiap angka dari matriks tersebut, carilah nilai faktorialnya , dan tampilkan hasilnya ke layar dengan format seperti matriks.<br/>
<br/>![4bkey](https://user-images.githubusercontent.com/56763570/78314829-05798d00-7510-11ea-893d-e49da26cec35.jpg)<br/>
Karena menggunakan shared memory maka pada program 4a.c diberikan key_t key yang merupakan kode unik untuk menyampungkan ke program 4b.c
sesuai dengan template membuat variabel array pointer bernama hasil untuk menampung nilai matrix hasil perkalian ke program 4b.c
<br/>![printf](https://user-images.githubusercontent.com/56763570/78314207-1e813e80-750e-11ea-8757-70571b32be70.jpg)<br/>
Kemudian di perulangan matriks untuk printf sekaligus mencopy hasil perkalian matriks C ke array hasil.

<br/>![num1](https://user-images.githubusercontent.com/56763570/78315714-ac5f2880-7512-11ea-842e-335c2528744d.jpg)<br/>
Kemudian di 4b.c saya membuat array global bernama num2 untuk mencopy variabel hasil, dan num1 untuk menampung nilai akhir.
<br/>![creaatee](https://user-images.githubusercontent.com/56763570/78315850-09f37500-7513-11ea-8b51-3093894bd4ec.jpg)<br/>
Saat membuat thread baru dengan phtread_create, di parameter ketiga adalah fungsi factsum untuk menghitung penjumlahan tiap elemen matriks dari i sampai n. 
<br/>![hasil4bbb](https://user-images.githubusercontent.com/56763570/78316220-fe547e00-7513-11ea-85ae-ac9ffa9974e0.jpg)<br/>
Kemudian hasilnya di taruh di array num1.

<br/>![vsl4b](https://user-images.githubusercontent.com/56763570/78316327-378cee00-7514-11ea-846c-3b815320865c.jpg)<br/>

3.Buatlah program C ketiga dengan nama " 4c.c ". Program ini tidak memiliki hubungan terhadap program yang lalu.
Pada program ini, Norland diminta mengetahui jumlah file dan folder di direktori saat ini dengan command " ls | wc -l ". Karena sudah belajar IPC
<br/>![4car](https://user-images.githubusercontent.com/56763570/78316685-24c6e900-7515-11ea-9765-ffe6da1c4016.PNG)<br/>
array 2 ukuran p[0] untuk membaca dan p[1] untuk menulis  pipe
<br/>![dup](https://user-images.githubusercontent.com/56763570/78316829-82f3cc00-7515-11ea-98e4-ef4223d5ae66.PNG)<br/>
membuat stdout sama dengan p[1]. Tutup read dari pipe p[0]
Kemudian eksekusi ls
<br/>![exels](https://user-images.githubusercontent.com/56763570/79031922-3d5b8280-7b57-11ea-8d33-9b3f0f94a963.PNG)<br/>
Esekusi wc
<br/>![exewc](https://user-images.githubusercontent.com/56763570/79031924-3e8caf80-7b57-11ea-8f2c-fd81821b3be2.PNG)<br/>
<br/>![4crevv](https://user-images.githubusercontent.com/56763570/79031868-e9509e00-7b56-11ea-8c3c-2415a5f0fd13.jpg)<br/>





