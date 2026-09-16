#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main (){

    float panjang;
    float lebar;
    float tinggi;
    float jari_jari;
    float garis_pelukis;
    int bangun;

    cout << "pilih bangun apa yang ingin dihitung (1 = balok, 2 = tabung, 3 = kubus, 4 = kerucut): ";
    cin >> bangun;

    switch (bangun){

        case 1:
            cout << "Masukkan panjang balok: ";
            cin >> panjang;
            cout << "Masukkan lebar balok: ";
            cin >> lebar;
            cout << "Masukkan tinggi balok: ";
            cin >> tinggi;

            cout << fixed << setprecision(2);
            cout << "===============================" << endl;
            cout << "Volume balok: " << panjang * lebar * tinggi << endl;
            cout << "Luas permukaan balok: " << 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi) << endl;
            cout << "===============================" << endl;
            break;

        case 2:
            cout << "Masukkan jari-jari tabung: ";
            cin >> jari_jari;
            cout << "Masukkan tinggi tabung: ";
            cin >> tinggi;

            cout << fixed << setprecision(2);
            cout << "===============================" << endl;
            cout << "Volume tabung: " << 3.14 * jari_jari * jari_jari * tinggi << endl;
            cout << "Luas permukaan tabung tertutup: " << 2 * 3.14 * jari_jari * (jari_jari + tinggi) << endl;
            cout << "Luas permukaan tabung tanpa tutup: " << 2 * 3.14 * jari_jari * tinggi << endl;
            cout << "===============================" << endl;
            break;
        
        case 3:
            cout << "Masukkan panjang sisi kubus: ";
            cin >> panjang;

            cout << fixed << setprecision(2);
            cout << "===============================" << endl;
            cout << "Volume kubus: " << panjang * panjang * panjang << endl;
            cout << "Luas permukaan kubus: " << 6 * panjang * panjang << endl;
            cout << "===============================" << endl;
            break;

        case 4:
            cout << "Masukkan jari-jari kerucut: ";
            cin >> jari_jari;
            cout << "Masukkan tinggi kerucut: ";
            cin >> tinggi;

            garis_pelukis = sqrt(jari_jari * jari_jari + tinggi * tinggi);

            cout << fixed << setprecision(2);
            cout << "===============================" << endl;
            cout << "Volume kerucut: " << (1.0/3.0) * 3.14 * jari_jari * jari_jari * tinggi << endl;
            cout << "Luas selimut kerucut: " << 3.14 * jari_jari * garis_pelukis << endl;
            cout << "Luas permukaan kerucut: " << 3.14 * jari_jari * (jari_jari + garis_pelukis) << endl;
            cout << "===============================" << endl;
            break;

        default :
            cout << "===============================" << endl;
            cout << "Pilihan bangun ruang tidak valid" << endl;
            cout << "===============================" << endl;
    }

    return 0;
}