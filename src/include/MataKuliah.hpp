#ifndef MATAKULIAH_HPP
#define MATAKULIAH_HPP

#include <string>
using namespace std;

class MataKuliah {
private:
    string namaMK;
    int sks;

public:
    MataKuliah(string namaMK, int sks);
    string getNamaMK();
    int getSKS();
    void tampil();
};

#endif