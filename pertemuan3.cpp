#include <iostream>
using namespace std;
/*
int main(){
    int menu;
    cout << "Menu makanan" << endl;
    cout << "1. Nasi goreng" << endl;
    cout << "2. Mie goreng" << endl;
    cout << "3. Martabak" << endl;
    cout << "pilih menu : " ;
    cin >> menu;

    switch(menu){
        case 1:
            char pedas;
            cout << "Anda memilih nasi goreng" << endl;
            cout << "Apakah pedas ? (y/n) : ";
            cin >> pedas;
            switch(pedas){
                case 'y':
                cout << "Nasi goreng pedas" << endl;
                break;
                case 'n':
                cout << "Nasi goreng tidak pedas" << endl;
                break;
                default :
                cout << "pilihan tidak valid" << endl;
                break;
            }
        break;
        case 2:
            char porsi;
            cout << "Anda memilih mie goreng" << endl;
            cout << "Apakah porsi jumbo atau normal ? (j/n) : ";
            cin >> porsi;
                if (porsi == 'j'){
                    cout << "Porsi jumbo";
                } else {
                    cout << "Porsi normal";
                }
            break;
        case 3:
            cout << "Anda memilih martabak" << endl;
            break;
        default : 
            cout << "pilihan tidak valid" << endl;
            break;
    }
}*/
//latsol
int main(){
    /*int pilihan, harga, uang_diberikan, uang_kembalian;
    string tanggal_kembali, nama, tanggal_pinjam, judul_buku ;
    char kondisi, nim [10];
    cout << "Perpustakaan" << endl;
    cout << "1. Meminjam buku" << endl;
    cout << "2. Mengembalikan buku" << endl;
    cout << "3. Membeli buku" << endl;
    cout << "Silahkan memilih : " ;
    cin >> pilihan;

    switch(pilihan){
        case 1 :
            cout << "Nama\t\t: ";
            cin.ignore();
            getline(cin, nama);
            cout << "Nim\t\t: ";
            cin >> nim;
            cout << "Tanggal pinjam\t: ";
            cin >> tanggal_pinjam;
        break;

        case 2 :
            cout << "Nama\t\t: ";
            cin.ignore();
            getline(cin, nama);
            cout << "Nim\t\t: ";
            cin >> nim;
            cout << "Tanggal kembali\t: ";
            cin.ignore();
            getline(cin, tanggal_kembali);
            cout << "Kondisi ? (b/r)\t: ";
            cin >> kondisi;
                if(kondisi == 'r'){
                    cout << "Anda membayar denda";
                } else {
                    cout << "terimakasih";
                }
        break;

        case 3 : 
            cout << "Nama\t\t: ";
            cin.ignore();
            getline(cin, nama);
            cout << "Judul buku\t: ";
            cin >> judul_buku;
            cout << "Harga\t\t: ";
            cin >> harga;
            cout << "Uang diberikan\t: ";
            cin >> uang_diberikan;
            uang_kembalian = uang_diberikan - harga ;
            cout << "Uang kembalian\t: " << uang_kembalian ; 
        break;

        default :
            cout << "pilihan tidak valid";
        break;        
    }
    return 0;*/
    int diskon, burger;
    burger = 20000;
    diskon = burger * (20/100);
    cout << diskon;

}