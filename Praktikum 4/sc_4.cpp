#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int jumlah_nilai;
    int cek_lagi;
    float nilai;
    float total = 0;
    float rata_rata;
    bool cek = true;

    while (cek == true){

        total = 0;

        cout << "masukkan jumlah mata pelajaran (minimal 3): ";
        cin >> jumlah_nilai;

        if (jumlah_nilai < 3){

         cout << "mata pelajaran harus minimal 3";
            return 0;
        }

        for ( int i = 1; i <= jumlah_nilai; i++){

            cout << "masukkan nilai mata pelajaran ke " << i << ": ";
            cin >> nilai;

            total = total + nilai;
        }

        rata_rata = total / jumlah_nilai;

        cout << "=================================" << endl;
        cout << fixed << setprecision(2);
        cout << "nilai rata-rata adalah: " << rata_rata << endl;

        if(rata_rata > 85){
            cout << "prestasi: sangat baik" << endl;
        } else if (rata_rata >= 70){
            cout << "prestasi: baik" << endl;
        } else if (rata_rata >= 50){
            cout << "prestasi: cukup" << endl;
        } else if (50 > rata_rata){
            cout << "prestasi: perlu peningkatan" << endl;
        }

        cout << "ingin menghitung nilai siswa lain? (1 untuk ya, selain itu untuk tidak): ";
        cin >> cek_lagi;
        if (cek_lagi != 1){
            cek = false;
        }

        cout << "=================================" << endl;
    }

 return 0;
}