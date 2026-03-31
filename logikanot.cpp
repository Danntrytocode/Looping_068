#include <iostream>
using namespace std;

int main(){
    float nilM,nilB,rerata;
    string status;

    cout<<"Masukan Nilai Matematika =" ;
    cin>>nilM;
    cout<<"Masukkan Nilai Bahasa Inggris =" ;
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60) )
        status = "LULUS";
    else
        status = "TIDAK LULUS";
    
    cout<<"Status Kelulusan ="<<status<<" ,dengan nilai rata-rata ="<<rerata<< endl;
}