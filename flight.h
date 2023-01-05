#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>

#define info(p) (p)->info
#define next(p) (p)->next
#define first(L) (L).first
#define nil NULL

using namespace std;

struct jadwalPenerbangan {
    string kode, jenis, tanggal, waktu, asal, tujuan;
    int kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;
typedef struct jadwalPenerbangan infotype;

struct elemenJadwal{
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal{
    adr_jadwalP first;
};

void createListJadwal(ListJadwal &L);
adr_jadwalP createElemenJadwal(infotype x);
void InsertLastJ(ListJadwal &L, adr_jadwalP p);
void showJadwal (ListJadwal L);
void deleteFirstJ(ListJadwal &L, adr_jadwalP &p);
bool searchJ(ListJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
