#include "include/Mahasiswa.hpp"
#include "include/MataKuliah.hpp"
#include "include/KRS.hpp"

int main() {
    Mahasiswa mhs1("Budi", "12345");
    MataKuliah mk1("Pemrograman C++", 3);

    KRS krs1(mhs1, mk1);

    krs1.tampil();

    return 0;
}