#include <iostream>
#include <iomanip>
using namespace std;
//program input output data diri
int main(){
    string nama, plug;//menggunakan tipe data string 
    char nim[10];//untuk nim menggunakan tipe data char
    //input nama, nim, dan plug
    cout << "Masukkan data :\n";
    cout << "Nama\t: ";
    getline(cin, nama);//menggunakan getline supaya bisa menuliskan nama lebih dari 1 kata
    cout << "NIM\t: ";
    cin >> nim;
    cout << "Plug\t: ";
    cin >> plug;
    cout << endl;
    //output nama, nim, dan plug dalam bentuk teks biasa
    cout << "Inilah data Anda :\n";
    cout << "Nama\t: " << nama << endl;
    cout << "NIM\t: " << nim << endl;
    cout << "Plug\t: " << plug << endl;
    cout << endl; 
    //output nama, nim, dan plug kedalam bentuk tabel
    cout << "Dalam bentuk tabel :\n";
    cout  << setw(69) << setfill('=') << "\n";
    //cout << "==================================================================\n";
    cout << setfill(' ') << "NIM"<< setw(15) <<"|" << setw(5) << "Nama" << setw(30) << "|" << setw(5) <<"Plug" << endl;
    cout  << setw(69) << setfill('=') << "\n";
    //cout << "==================================================================\n";
    cout << setfill(' ') << nim << setw(10) << "| " << setw(5) << nama << setw(15) << "|"  << setw(5) << plug << endl;
    //cout << "------------------------------------------------------------------\n";
    cout  << setw(69) << setfill('=') << "\n";
    return 0;
}