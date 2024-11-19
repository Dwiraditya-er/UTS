#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double panjang, lebar, sisi, hasil;

    //Buat Menu
    cout << "=== I Made Dwi Raditya ===\n";
    cout << "=== Tugas UTS ===\n";
    cout << "===Kalkulator Luas Persegi Panjang dan Volume Kubus ===\n";
    cout << "1. Hitung Luas Persegi Panjang\n";
    cout << "2. Hitung Volume Kubus\n";
    cout << "3. Keluar\n";
    cout << "Pilih menu (1-3): ";
    cin >> pilihan;

    if (pilihan == 1) {
        //Perhitungan Luas Persegi Panjang
        cout << "Masukkan panjang persegi panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar persegi panjang: ";
        cin >> lebar;
        hasil = panjang * lebar;
        cout << "Luas persegi panjang: " << hasil << " satuan persegi\n";
    }
    else if (pilihan == 2) {
        //Perhitungan Volume Kubus
        cout << "Masukkan panjang sisi kubus: ";
        cin >> sisi;
        hasil = sisi * sisi * sisi;
        cout << "Volume kubus: " << hasil << " satuan kubik\n";
    }
    else if (pilihan == 3) {
        // Keluar
        cout << "Kamu keluar dari aplikasi\n";
    }
    else {
        cout << "Pilihan tidak valid. Silakan memilih opsi yang tersedia.\n";
    }

    return 0;
}
