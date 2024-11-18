#include <iostream>
using namespace std;
//menu menghitung kebutuhan energi perhari
int main(){
    float tb, bb, bmrp, bmrw, ke, fkasrp, fkassp, fkasbp, fkasrw, fkassw, fkasbw, fkstr, fksts, fkstb;
    int umur;
    string jenis_kelamin, tingkat_aktivitas, tingkat_stres;
    char ulang;
    bool lanjut;
    fkasrp = 1.65;
    fkassp = 1.76;
    fkasbp = 2.10;
    fkasrw = 1.55;
    fkassw = 1.7;
    fkasbw = 2.0;
    fkstr = 1.4;
    fksts = 1.5;
    fkstb = 2.0;
    do{
        system("cls");
        cout << "-- Penghitung Kebutuhan Energi Anda Perhari --\n";
        cout << "Masukan Tinggi Badan Anda(cm) : ";
        cin >> tb;
        cout << "Masukkan Berat Badan Anda(kg) : ";
        cin >> bb;
        cout << "Masukkan Umur Anda : ";
        cin >> umur;
        cout << "Masukkan Jenis Kelamin : ";
        cin >> jenis_kelamin;
        cout << "Masukkan Tingkat Aktifitas : ";
        cin >> tingkat_aktivitas;
        cout << "Masukkan Tingkat Stres Anda : ";
        cin >> tingkat_stres;
        bmrp = 66 + (13.7 * bb) + (5 * tb) - (6.8 * umur);
        bmrw = 65.5 + (9.6 * bb) + (1.7 * tb) - (4.7 * umur);
        if(jenis_kelamin == "pria"){
            if(tingkat_aktivitas == "ringan"){
                if(tingkat_stres == "ringan"){
                    ke = bmrp * fkasrp * fkstr;
                } else if (tingkat_stres == "sedang"){
                    ke = bmrp * fkasrp * fksts;
                } else if (tingkat_stres == "berat"){
                    ke = bmrp * fkasrp * fkstb;
                } else {
                cout << "Pada tingkat stres pilih dari ketiga berikut\n";
                cout << "ringan/sedang/berat";
                }
            } else if (tingkat_aktivitas == "sedang"){
                if(tingkat_stres == "ringan"){
                    ke = bmrp * fkassp * fkstr;
                } else if (tingkat_stres == "sedang"){
                    ke = bmrp * fkassp * fksts;
                } else if (tingkat_stres == "berat"){
                    ke = bmrp * fkassp * fkstb;
                } else {
                cout << "Pada tingkat stres pilih dari ketiga berikut\n";
                cout << "ringan/sedang/berat";
                }
            } else if (tingkat_aktivitas == "berat"){
                if(tingkat_stres == "ringan"){
                    ke = bmrp * fkasbp * fkstr;
                } else if (tingkat_stres == "sedang"){
                    ke = bmrp * fkasbp * fksts;
                } else if (tingkat_stres == "berat"){
                    ke = bmrp * fkasbp * fkstb;
                } else {
                cout << "Pada tingkat stres pilih dari ketiga berikut\n";
                cout << "ringan/sedang/berat";
                }
            } else {
                cout << "Pada tingkat aktivitas dan stres pilih dari ketiga berikut\n";
                cout << "ringan/sedang/berat";
            }
        } else if (jenis_kelamin == "wanita"){
            if(tingkat_aktivitas == "ringan"){
                if(tingkat_stres == "ringan"){
                    ke = bmrp * fkasrw * fkstr;
                } else if (tingkat_stres == "sedang"){
                    ke = bmrp * fkasrw * fksts;
                } else if (tingkat_stres == "berat"){
                    ke = bmrp * fkasrw * fkstb;
                } else {
                cout << "Pada tingkat stres pilih dari ketiga berikut\n";
                cout << "ringan/sedang/berat";
                }
            } else if (tingkat_aktivitas == "sedang"){
                if(tingkat_stres == "ringan"){
                    ke = bmrp * fkassw * fkstr;
                } else if (tingkat_stres == "sedang"){
                    ke = bmrp * fkassw * fksts;
                } else if (tingkat_stres == "berat"){
                    ke = bmrp * fkassw * fkstb;
                } else {
                cout << "Pada tingkat stres pilih dari ketiga berikut\n";
                cout << "ringan/sedang/berat";
                }
            } else if (tingkat_aktivitas == "berat"){
                if(tingkat_stres == "ringan"){
                    ke = bmrp * fkasbw * fkstr;
                } else if (tingkat_stres == "sedang"){
                    ke = bmrp * fkasbw * fksts;
                } else if (tingkat_stres == "berat"){
                    ke = bmrp * fkasbw * fkstb;
                } else {
                cout << "Pada tingkat stres pilih dari ketiga berikut\n";
                cout << "ringan/sedang/berat";
                }
            } else {
                cout << "Pada tingkat aktivitas dan stres pilih dari ketiga berikut\n";
                cout << "ringan/sedang/berat";
            }
        } else {
            cout << "Pilihlah jenis kelamin diantara 2 berikut\n";
            cout << "pria/wanita\n";
        }
        cout << "Kebutuhan energi anda hari ini sebanyak " << ke << " kalori\n";
        system("pause");
        cout << "Apakah Anda ingin mengulang?(y/n) : ";
        cin >> ulang;
        if(ulang == 'y'){
            lanjut = true;
        } else {
            lanjut = false;
            cout << "Program selesai.\n";
            system("exit");
        }
        
    } while(lanjut);
}

//blm selesai 
int main(){
    string nama, nama_brg, id_brg;
    char nim[10];
    bool keluar, login;
    int stok_brg, maxCoba, pilihan, ngulang, kuantitas, harga ; 
    maxCoba = 0;
    ngulang = 0;
    //do{
    while(maxCoba < 3){
        system("cls"); 
        cout << "Pengelolaan stok barang Tutishop\n\n";
        cout << "Silahkan login terlebih dahulu\n";
        cout << "Username : ";
        cin >> nama;
        cout << "Password : ";
        cin >> nim;
        if (nama != "Ryan" && nim != "123240067"){
            maxCoba++;
            cout << "Username atau Password anda salah\n";
            system("pause");
        } else {
            cout << "Login berhasil\n";
            break;
            system("pause");
        }
    }
    if (maxCoba > 2){
        login = false;
        system("cls");
        cout << "Anda sudah melakukan kesalalahn login " << maxCoba << " kali\n";
        cout << "Coba lagi nanti";
        system("exit");
    }
    if (maxCoba < 2){
    system("cls");
    cout << "Pengelolaan stok barang Tutishop\n\n";
    cout << "----- HALAMAN UTAMA -----\n";
    cout << "Apa yang ingin anda lakukan\n";
    cout << "1. Input stok barang\n";
    cout << "2. Cetak stok barang\n";
    cout << "3. Cek stok barang\n";
    cout << "Masukkan pilihan anda : ";
    cin >> pilihan;
    //do{
        if(pilihan == 1){
            for (int i = 0; i < 4; i++){
                system("cls");
                cout << "--- Input stok barang ---\n";
                cout << "Petunjuk pengisian id = 2huruf afal + 00 + 2 angka terakhir nim.\n";
                cout << "Masukkan nama barang1 : ";
                cin.ignore();
                cin >> nama_brg;
                cout << "Masukkan ID barang : ";
                cin >> id_brg; 
                cout << "Masukkan kuantitas : ";
                cin >> kuantitas; //cin.ignore();           
                if (kuantitas < 0) {
                    cout << "kuantitas tidak boleh minus\n";
                    i--;
                    system("pause");
                    continue;
                }
                cout << "Masukkan harga barang : ";
                cin >> harga; //cin.ignore();
            }  
            cout << "selesai";
                             
        } else if(login = false) {
            system("exit");
        }
    }
    //} while(keluar = false);
    

    
}

