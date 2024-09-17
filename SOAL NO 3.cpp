#include <iostream>
using namespace std;

    int main () {
        int pilihan;
        float luas;

        cout<<"SELAMAT DATANG DI PROGRAM MENGHITUNG LUAS PERSEGI, PERSEGI PANJANG DAN SEGITIGA"<<endl;
        cout<<"==============================================================================="<<endl<<endl;

        cout<<"Pilihlah angka 1-3 yang ingin di cari luasnya :"<<endl;
        cout<<"1.   Persegi"<<endl;
        cout<<"2.   Persegi Panjang"<<endl;
        cout<<"3.   Segitiga"<<endl<<endl;
        cout<<"Masukan angka (1-3) : ";
        cin>>pilihan;

        switch (pilihan) {
        case 1:
            float sisi;
            cout<<">>MENGHITUNG LUAS PERSEGI<<"<<endl<<endl;
            cout<<"Masukan sisi (cm) : ";
            cin>>sisi;
            luas=sisi*sisi;

            cout<<"Diketahui sisi (cm) :"<<sisi<<" cm "<<endl<<endl;
            cout<<"Rumus Persegi = sisi x sisi"<<endl;
            cout<<"Masukan ke dalam rumus"<<endl;
            cout<<"= s x s"<<endl;
            cout<<"= "<<sisi<<" x "<<sisi<<endl;
            cout<<"= "<<luas<<" cm "<<endl;
            break;

        case 2:
            float panjang, lebar;
            cout<<">>MENGHITUNG LUAS PERSEGI PANJANG<<"<<endl<<endl;
            cout<<"Masukan panjang (cm) :";
            cin>>panjang;
            cout<<"Masukan lebar (cm)   :";
            cin>>lebar;
            luas=panjang*lebar;

            cout<<"Diketahui panjang (p) :"<<panjang<<"cm"<<endl;
            cout<<"Diketahui lebar (l) :"<<lebar<<"cm"<<endl<<endl;
            cout<<"Rumus Persegi Panjang = panjang x lebar"<<endl;
            cout<<"Masukan ke dalam rumus"<<endl;
            cout<<"= p x l"<<endl;
            cout<<"= "<<panjang<<" x "<<lebar<<endl;
            cout<<"= "<<luas<<" cm "<<endl;
            break;

        case 3:
            float alas, tinggi;
            cout<<">>MENGHITUNG LUAS SEGITIGA<<"<<endl<<endl;
            cout<<"Masukan alas (cm)   :";
            cin>>alas;
            cout<<"Masukan tinggi (cm) :";
            cin>>tinggi;
            luas=0.5*alas*tinggi;

            cout<<"Diketahui alas (a) :"<<alas<<" cm"<<endl;
            cout<<"Diketahui tinggi (t) :"<<tinggi<<" cm"<<endl<<endl;
            cout<<"Rumus Segitiga = 1/2 x alas x tinggi"<<endl;
            cout<<"Masukan ke dalam rumus"<<endl;
            cout<<"= 1/2 x alas x tinggi"<<endl;
            cout<<"= "<<"1/2 x "<<alas<<" cm"<<" x "<<tinggi<<" cm"<<endl;
            cout<<"= "<<luas<<" cm"<<endl;
            break;

        default:
            cout<<"PILIH ANGKA YANG TERSEDIA."<<endl;
            break;
        }
            return 0;
    }
