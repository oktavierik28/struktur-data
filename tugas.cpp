#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;
int x=1;
int cari;
float rata;
int nilai1,nilai2,nilai3;

struct Mhs
{
    string nama;
    int nim;
    int nilai;
    char jenisK;
}erik[50];


void input_mahasiswa(Mhs){
    cout<<"Masukan Mahasiswa        : ";cin>>erik[x].nama;
    cout<<"Masukan NIM              : ";cin>>erik[x].nim;
    cout<<"Masukan Jenis Kelamin              : ";cin>>erik[x].jenisK;
    cout<<"Masukan Nilai 1   : ";cin>>nilai1;
    cout<<"Masukan Nilai 2   : ";cin>>nilai2;
    cout<<"Masukan Nilai 3   : ";cin>>nilai3;
    rata=nilai1+nilai2+nilai3/3;
}

void cari_data(Mhs){
    int plh;
    cout<<"Masukkan NIM = ";cin>>plh;
        if(plh==erik[x].nim){
    cout<<"NIM          Nama      Jenis Kelamin       Rata-rata"<<endl;
    cout<<erik[x].nim<<"            "<<erik[x].nama<<"            "<<erik[x].jenisK<<"            "<<rata<<endl;
    }
        else if(plh!=erik[x].nim){
    cout<<"data tidak ditemukan"<<endl;

       }
    x++;
}

void nilai_mahasiswa(Mhs){
    cout<<"Rata Rata Tertinggi=\t"<<rata<<endl;
}

int main(){
    int pilih=0;
    do {system("cls");
        cout<<"Nama : oktavierik T.N.P"<<endl;
        cout<<"\tSelamat Datang                   "<<endl;
        cout<<"\t1.Masukan data Mahasiswa         "<<endl;
        cout<<"\t2.Pencarian data berdasarkan NIM "<<endl;
        cout<<"\t3.Menampilkan Rata rata          "<<endl;
        cout<<"\t0.Selesai                        "<<endl;
        cout<<"                                  "<<endl;
    cout<<"Pilih Menu : ";cin>>pilih;
    switch(pilih)
    {   case 1:{if(x==10){cout<<"tifak ada"<<endl;} else{input_mahasiswa(erik[10]);};break;}
        case 2:{if(x==10){cout<<"tidak ada"<<endl;} else{cari_data(erik[10]);};break;}
        case 3:{if(x==10){cout<<"tidak ada"<<endl;} else{nilai_mahasiswa(erik[10]);};break;}
        case 0:{cout<<"terimakasih "<<endl;break;}
        default:cout<<"Salah pilih menu "<<endl;
         }
    system("pause");
    }
    while(pilih!=0);

}
