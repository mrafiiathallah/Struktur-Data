#include "flight.h"

void createListJadwal(ListJadwal &L){
    first(L) = nil;
}
adr_jadwalP createElemenJadwal(infotype x){
    adr_jadwalP p = new elemenJadwal;
    info(p) = x;
    next(p) = nil;
    return p;
}

void InsertLastJ(ListJadwal &L, adr_jadwalP p){
    if(first(L) == nil){
        first(L) = p;
    }else {
        adr_jadwalP q;
        q = first(L);
        while(next(q) != nil){
            q = next(q);
        }
        next(q) = p;
    }
}

void showJadwal (ListJadwal L){
    adr_jadwalP p;
    if (first(L) == nil){
        cout << "Tidak Ada Jadwal Penerbangan";
    }else {
        p = first(L);
        while(p != nil){
            cout << "Kode Penerbangan: " << info(p).kode << endl;
            cout << "Jenis Maskapai: " << info(p).jenis << endl;
            cout << "Tanggal keberangkatan: " << info(p).tanggal << endl;
            cout << "Waktu Keberangkatan: " << info(p).waktu << endl;
            cout << "Asal keberangkatan: " << info(p).asal << endl;
            cout << "Tujuan keberangkatan: " << info(p).tujuan << endl;
            cout << "Kapasitas maskapai: " << info(p).kapasitas << endl;
            cout << endl;
            p = next(p);
        }
    }
}

void deleteFirstJ(ListJadwal &L, adr_jadwalP &p){
    if(first(L) == nil){
        cout << "List Jadwal Kosong";
    }else if(next(first(L)) == nil){
        first(L) = nil;
    }else {
        p = first(L);
        first(L) = next(p);
        next(p) = nil;
    }
}

bool searchJ(ListJadwal L, string dari, string ke, string tanggal){
    adr_jadwalP q;
    q = first(L);
    while(q != nil){
        if(info(q).asal == dari && info(q).tujuan == ke && info(q).tanggal == tanggal){
            return true;
        }
        q = next(q);
    }
    return false;
}
