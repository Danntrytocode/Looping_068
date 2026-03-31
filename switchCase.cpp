#include <iostream>
using namespace std;

//Deklarasi variabel global
int KodeJurusan;
string namaJurusan;
string statusKuota;

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