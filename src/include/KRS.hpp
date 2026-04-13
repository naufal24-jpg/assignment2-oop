#ifndef KRS_HPP
#define KRS_HPP

#include "Mahasiswa.hpp"
#include "MataKuliah.hpp"

class KRS {
private:
    Mahasiswa mhs;
    MataKuliah mk;

public:
    KRS(Mahasiswa mhs, MataKuliah mk);
    void tampil();
};

#endif