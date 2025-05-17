#include <iostream>
#include <string>
using namespace std;


class mahasiswa{
private:
     int Nim;
     string Nama;
public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

