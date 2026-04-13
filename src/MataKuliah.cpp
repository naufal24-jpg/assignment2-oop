#include "include/MataKuliah.hpp"
#include <iostream>
using namespace std;

MataKuliah::MataKuliah(string namaMK, int sks) {
    this->namaMK = namaMK;
    this->sks = sks;
}

string MataKuliah::getNamaMK() {
    return namaMK;
}

int MataKuliah::getSKS() {
    return sks;
}

void MataKuliah::tampil() {
    cout << "Mata Kuliah: " << namaMK << endl;
    cout << "SKS: " << sks << endl;
}