# Laporan Tugas Asistensi 
Berikut merupakan laporan yang berisi langkah-langkah menyelesaikan tugas asistensi.

## Identifikasi Kesalahan dan Kekurangan
Sebelum memperbaiki kesalahan dan kekurangan yang ada pada kode tersebut, mari identifikasi terlebih dahulu. 
Kesalahan dan kekurangan yang ada:
1. Kode belum diberi library untuk Bahasa C, yaitu <stdio.h>
2. Pada baris 7, variabelnya tidaklah konsisten atau sama dengan variabel-variabel setelahnya.
3. Pada baris 9, variabel yang dimasukkan ke dalam kondisional, dalam hal ini "k", tidaklah konsisten atau sinkron.
4. Pada baris 10, tipe data yang dipanggil adalah double, padahal tipe data pada matriks adalah integer.
5. Pada baris 16, variabel sudah harus terdefinisikan di luar fungsi, sedangkan di sini terdapat variabel
    baru yang dideklarasikan di dalam fungsi.
6. Pada baris 28, tipe data yang dipanggil adalah character, padahal tipe data pada matriks adalah integer.
7. Pada baris 38, baris tidak diakhiri dengan tanda ";".

## Penyelesaian Kesalahan dan Kekurangan
Sesudah mengidentifikasi kesalahan dan kekurangan yang ada, mari selesaikan kesalahan dan kekurangan tersebut:
1. Kode diberi library atau headline <stdio.h> pada baris paling awal.
2. Pada baris 7, variabel "x" dan "y" diganti dengan "N" agar konsisten.
3. Pada baris 9, variabel "k" diganti dengan "j" sehingga perulangan bisa sinkron.
4. Pada baris 10, specifier "%lf" diganti dengan "%d" agar memanggil tipe data yang seharusnya.
5. Pada baris 16, variabel "sum" dipindahkan di luar fungsi "multiply".
6. Pada baris 28, specifier "%c" diganti dengan "%d" agar memanggil tipe data yang seharusnya.
7. Pada baris 38, ditambahkan tanda ";" pada akhir baris agar kode tidak error.

## Hasil
Setelah kode diperbaiki sebagaimana mestinya, kode dapat berjalan sebagaimana yang telah dikonsepkan. Setelah
di-compile, program dapat diberi input, dan setelah diberi input, kode mengeluarkan output berupa hasil
perkalian matriks.

## Penutup
Sekian. Semoga hasilnya mantap.
SELAMAT BERJUANG! SUKSESSSS

![yapper](img/selamat-berjuang-sukses.gif)


