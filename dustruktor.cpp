#include <iostream>
using namespace std;

class angka{
private:
     int *arr;
     int panjang;
public:
     angka(int); // Construktor
     ~angka();
     void cetakData();
     void isiData();
};
// Definisi memberr function
angka::angka(int i) { // construktor
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::~angka(){ // destruktor
    cout<<endl;
    cetakData();
    delete[]arr;
    cout<<"Alamat Array Sudah Dilepaskan"<<endl;
}

