#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float rupiah;
    float hasil_konversi;
    int konversi_tujuan;
    float kurs_konversi;

    cout << "Masukkan jumlah rupiah: ";
    cin >> rupiah;

    if (rupiah <= 0){

        cout << "===============================" << endl;
        cout << "Jumlah rupiah tidak valid." << endl;
        cout << "===============================" << endl;
        return 0;

    }

    cout << "masukkan konversi tujaun (1 = dollar, 2 = euro, 3 = yen, 4 = rupe, 5 = rial, 6 = won, 7 = ringgit, 8 = bath): ";
    cin >> konversi_tujuan;

    if (konversi_tujuan <= 0 || konversi_tujuan > 8){

        cout << "===============================" << endl;
        cout << "Konversi tujuan tidak valid." << endl;
        cout << "===============================" << endl;
        return 0;

    }

    cout << "Masukkan kurs konversi (harga rupiah per 1 unit mata uang tujuan): ";
    cin >> kurs_konversi;

    if (kurs_konversi <= 0){

        cout << "===============================" << endl;
        cout << "Kurs konversi tidak valid." << endl;
        cout << "===============================" << endl;
        return 0;

    }

    hasil_konversi = rupiah / kurs_konversi;

    cout << fixed << setprecision(2);
    cout << "===============================" << endl;
    cout << "Jumlah rupiah: Rp" << rupiah << endl;

    switch (konversi_tujuan) {
        case 1:
            cout << "Jumlah dollar: USD " << hasil_konversi << endl;
            break;
        case 2:
            cout << "Jumlah euro: EUR " << hasil_konversi << endl;
            break;
        case 3:
            cout << "Jumlah yen: JPY " << hasil_konversi << endl;
            break;
        case 4:
            cout << "Jumlah rupe: INR " << hasil_konversi << endl;
            break;
        case 5:
            cout << "Jumlah rial: IRR " << hasil_konversi << endl;
            break;
        case 6:
            cout << "Jumlah won: KRW " << hasil_konversi << endl;
            break;
        case 7:
            cout << "Jumlah ringgit: RM " << hasil_konversi << endl;
            break;
        case 8:
            cout << "Jumlah bath: THB " << hasil_konversi << endl;
            break;
    }
    
    cout << "===============================" << endl;

    return 0;
}