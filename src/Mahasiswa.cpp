#include "include/Mahasiswa.hpp"
#include <iostream>
using namespace std;

Mahasiswa::Mahasiswa(string nama, string nim) {
    this->nama = nama;
    this->nim = nim;
}

void Mahasiswa::tampil() {
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
}