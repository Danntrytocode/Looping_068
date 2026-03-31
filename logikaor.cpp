#include <iostream>
using namespace std;

int main(){
    float nilM,nilB,rerata;
    string status;
    
    cout<<"Masukkan nilai Matematika =";
    cin>> nilM;
    cout<<"Masukkan nilai Bahasa Inggris =";
    cin>> nilB;

    rerata = (nilB+nilM)/2;

    if(!(rerata >= 60) || (nilM >= 70))
        status = "LULUS";
    else
        status = "TIDAK LULUS";
    
    cout<<"Status Kelulusan ="<<status<<" ,dengan nilai rata-rata ="<<rerata<< endl;
}