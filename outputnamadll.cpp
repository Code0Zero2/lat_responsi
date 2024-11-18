#include <iostream>
using namespace std;
//program input output data diri
int main(){
    string nama, plug;//menggunakan tipe data string 
    char nim[10];//untuk nim menggunakan tipe data char
    //input nama, nim, dan plug
    cout << "Masukkan :\n";
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
    cout << "==================================================================\n";
    cout << "NIM\t\t|\tNama\t\t\t|\tPlug" << endl;
    cout << "==================================================================\n";
    cout << nim << "\t|\t" << nama << "\t|\t" << plug << endl;
    cout << "------------------------------------------------------------------\n";
    return 0;
}