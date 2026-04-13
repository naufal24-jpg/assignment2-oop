# Buat Laporan Disini
# Programming Assignment 2 - SIM Akademik (OOP)

## Deskripsi Program

Program ini merupakan implementasi sederhana dari Sistem Informasi Akademik (SIM Akademik) menggunakan paradigma Object Oriented Programming (OOP) dalam bahasa C++. Program ini dirancang untuk merepresentasikan hubungan antara mahasiswa, mata kuliah, dan KRS (Kartu Rencana Studi).

---

## Struktur Class

### 1. Class Mahasiswa

Class ini digunakan untuk merepresentasikan data mahasiswa.

**Atribut:**

* `nama` : menyimpan nama mahasiswa
* `nim` : menyimpan nomor induk mahasiswa

**Method:**

* Constructor untuk inisialisasi data
* `getNama()` : mengambil nama mahasiswa
* `getNIM()` : mengambil NIM mahasiswa
* `tampil()` : menampilkan data mahasiswa

---

### 2. Class MataKuliah

Class ini digunakan untuk menyimpan data mata kuliah.

**Atribut:**

* `namaMK` : nama mata kuliah
* `sks` : jumlah SKS

**Method:**

* Constructor
* `getNamaMK()` : mengambil nama mata kuliah
* `getSKS()` : mengambil jumlah SKS
* `tampil()` : menampilkan data mata kuliah

---

### 3. Class KRS

Class ini merupakan penghubung antara Mahasiswa dan MataKuliah.

**Atribut:**

* `mhs` : objek dari class Mahasiswa
* `mk` : objek dari class MataKuliah

**Method:**

* Constructor
* `tampil()` : menampilkan data KRS (gabungan mahasiswa dan mata kuliah)

---

## Konsep OOP yang Digunakan

* **Encapsulation**: atribut disimpan dalam private dan diakses melalui method
* **Class dan Object**: program menggunakan beberapa class untuk memodelkan sistem
* **Modularitas**: kode dipisahkan ke dalam file `.hpp` dan `.cpp`

---

## Struktur Folder

```
assignment2-main/
│
├── src/
│   ├── include/
│   │   ├── Mahasiswa.hpp
│   │   ├── MataKuliah.hpp
│   │   └── KRS.hpp
│   │
│   ├── Mahasiswa.cpp
│   ├── MataKuliah.cpp
│   ├── KRS.cpp
│   └── main.cpp
│
└── REPORT.md
```

---

## Contoh Output Program

```
=== Data KRS ===
Nama: Budi
NIM: 12345
Mata Kuliah: Pemrograman C++
SKS: 3
```

---

## Kesimpulan

Program ini berhasil mengimplementasikan konsep dasar OOP dalam pembuatan SIM Akademik sederhana. Dengan memanfaatkan class dan pemisahan file, program menjadi lebih terstruktur dan mudah dikembangkan lebih lanjut.
