#ifndef MAHASISWA_HPP
#define MAHASISWA_HPP

#include <string>
using namespace std;

class Mahasiswa {
private:
    string nama;
    string nim;

public:
    Mahasiswa(string nama, string nim);
    string getNama();
    string getNIM();
    void tampil();
};

#endif