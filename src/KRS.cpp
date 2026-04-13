#include "include/KRS.hpp"
#include <iostream>
using namespace std;

KRS::KRS(Mahasiswa mhs, MataKuliah mk) : mhs(mhs), mk(mk) {}

void KRS::tampil() {
    cout << "=== Data KRS ===" << endl;
    mhs.tampil();
    mk.tampil();
}