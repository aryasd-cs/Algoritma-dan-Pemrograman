#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //konversi mata uang rupiah ke dollar
    float rupiah;
    float dollar;

    cout << "Masukkan jumlah rupiah: ";
    cin >> rupiah;

    dollar = rupiah / 15000; // asumsi 1 USD = 15000 IDR

    cout << fixed << setprecision(2);
    cout << "Jumlah dollar yang didapat: $" << dollar << endl;

    return 0;
}