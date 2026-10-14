#include <iostream>
#include <string>
using namespace std;

string huruf_mutu (double nilai) {
    if (nilai >= 90) {
        return "A";
    } else if (nilai >= 80) {
        return "B+";
    } else if (nilai >= 70) {
        return "B";
    } else if (nilai >= 60) {
        return "C";
    } else if (nilai >= 50) {
        return "D";
    } else if (nilai >= 40) {
        return "E";
    } else {
        return "Tidak Lulus";
    }
}

string keterangan(string huruf_mutu) {
    switch (huruf_mutu[0]) {
        case 'A':
            return "Sangat baik";

        case 'B':
            return "Baik";
            
        case 'C':
            return "Cukup";

        case 'D':
            return "Kurang";

        case 'E':
            return "Sangat Kurang";
        
        default:
            return "Tidak memenuhi syarat";
    }
}

bool lulus(double nilai) {
    return nilai >= 60;
}

void tampilkan(string nama, double nilai) {
    string huruf = huruf_mutu(nilai);
    string ket = keterangan(huruf);
    bool status = lulus(nilai);

    cout << "Nama       : " << nama << endl;
    cout << "Nilai      : " << nilai << endl;
    cout << "Huruf mutu : " << huruf << endl;
    cout << "Keterangan : " << ket << endl;

    cout << "Status     : ";
    if (status) {
        cout << "Lulus" << endl;
    } else {
        cout << "Tidak lulus" << endl;
    }
}

int main() {
    string nama;
    double nilai;

    cout << "Masukkan nama mahasiswa: ";
    getline(cin, nama);

    cout << "Masukkan nilai: ";
    cin >> nilai;

    cout << endl;
    cout << "=== HASIL PENILAIAN ===" << endl;

    tampilkan(nama, nilai);

    return 0;
}