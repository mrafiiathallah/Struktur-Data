#include <iostream>
#include "flight.h"

using namespace std;

int main()
{
    ListJadwal L;
    infotype flight;
    int i, n;
    adr_jadwalP p;

    createListJadwal(L);
    cout << "Jumlah Jadwal Penerbangan: ";
    cin >> n;
    cout << endl;
    i = 0;
    while (i < n){
        cout << "Kode Maskapai: ";
        cin >> flight.kode;
        cout << "Jenis Maskapai: ";
        cin >> flight.jenis;
        cout << "Tanggal Keberangkatan: ";
        cin >> flight.tanggal;
        cout << "Waktu Keberangkatan: ";
        cin >> flight.waktu;
        cout << "Asal Keberangkatan: ";
        cin >> flight.asal;
        cout << "Tujuan keberangkatan: ";
        cin >> flight.tujuan;
        cout << "Kapasitas Maskapai: ";
        cin >> flight.kapasitas;
        cout << endl;
        i++;
        InsertLastJ(L, createElemenJadwal(flight));
    }
    cout << "========== Menampilkan Jadwal Penerbangan ==========" << endl;
    cout << endl;
    showJadwal(L);
    cout << endl;
    cout << "========== Penerbangan Pertama Dibatalkan ==========" << endl;
    cout << endl;
    deleteFirstJ(L, p);
    showJadwal(L);
    cout << endl;

    string searchDari, searchKe, searchTanggal;
    cout << "========== Pencarian Jadwal Penerbangan ==========" << endl;
    cout << "Masukkan Jadwal Penerbangan: " << endl;
    cout << endl;
    cout << "Asal Keberangkatan: ";
    cin >> searchDari;
    cout << "Tujuan Keberangkatan: ";
    cin >> searchKe;
    cout << "Tanggal Penerbangan: ";
    cin >> searchTanggal;
    cout << endl;
    cout << "Hasil: ";
    if (searchJ(L, searchDari, searchKe, searchTanggal)){
        cout << "Jadwal Penerbangan Ditemukan!" << endl;
    }else{
        cout << "Jadwal Penerbangan Tidak Ditemukan!" << endl;
    }
    cout << endl;
    return 0;
}

