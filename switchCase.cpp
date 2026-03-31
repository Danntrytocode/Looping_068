#include <iostream>
using namespace std;

//Deklarasi variabel global
int KodeJurusan;
string NamaJurusan;
string StatusKuota;

//Prosedur Input
void input( ) {
    cout<< "=== PENDAFTARAN JURUSAN KAMPUS ==="<< endl;
    cout<< "1. Teknologi Informasi"<< endl;
    cout<< "2. Teknik Mesin"<< endl;
    cout<< "3. Sistem Informasi"<< endl;
    cout<< "4. Ilmu Komunikasi"<< endl;
    cout<< "-----------------------------------"<< endl;
    cout<< "Masukkan kode Jurusan (1-4): ";
    cin>> KodeJurusan;
}

//Prosedur untuk pengecekan kondisi
void pilihanJurusan( ) {
    switch (KodeJurusan) {
        case 1:
            NamaJurusan = "Teknologi Informasi";
            StatusKuota = "Tersedia (9 Kursi)";
            break;
        case 2:
            NamaJurusan = "Teknik Mesin";
            StatusKuota = "Kuota Penuh!";
            break;
        case 3:
            NamaJurusan = "Sistem Informasi";
            StatusKuota = "Tersedia (5 Kursi)";
            break;
        case 4:
            NamaJurusan = "Ilmu Komunikasi";
            StatusKuota = "Tersedia (1 Kursi)";
            break;
        default:
            NamaJurusan = "Tidak Diketahui";
            StatusKuota = "Error: Kode Tidak Valid";
    }
}

//Prosedu output
void output( ) {
    cout<< "\n=== HASIL SELEKSI ==="<< endl;
    cout<< "Jurusan Pilihan : "<<NamaJurusan<< endl;
    cout<< "Status Kuota : "<<StatusKuota<< endl;
    cout<< "--------------------------------"<< endl;
}

int main( ) {
    input( );
    pilihanJurusan( );
    output( );
    
    return 0;
}