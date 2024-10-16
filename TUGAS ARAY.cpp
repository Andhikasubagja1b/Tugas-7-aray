#include <iostream>
using namespace std;

int main(){

    int nilai[5], carinilai;

    cout<<"masukan 5 nilai : ";

    for(int i=0; i <5; i++)

    cin>>nilai[i];




    int nilaitertinggii= nilai[0];
    for (int i = 0; i < 5; i++){

        if(nilai[i] > nilaitertinggii){
            nilaitertinggii= nilai[i];
        }
    }
   cout<<"nilai tertinggi "<<nilaitertinggii<<endl;

    cout<<"masukan angka untuk di cari:  ";
    cin>> carinilai;


    bool tidakadanilai=true;
    for (int i =0; i < 5 ; i++){

        if (nilai [i]== carinilai){
            cout<<"nilai "<< carinilai <<" ditemukan  di indeks ke - "<<i<<endl;

            tidakadanilai=false;
            break;
    }
}


    if (tidakadanilai){
        cout<<"nilai"<<carinilai<<"tidak ditemukan"<<endl;
    }
}

