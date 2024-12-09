#include <iostream>
using namespace std;
//Program E-Dagang Game dengan pilihan menambahkan data game dan menampikan data game yang sudah ditambahkan sebelumnya
void menu(int &pilihan);
void tambah_data_game(string game[], string harga[], string dev[], int &jmlh_data, int max_data, int pilihan);
void tampil_data_game(string game[], string harga[], string dev[], int jmlh_data);

int main(){
    int max_data = 100, pilihan, tmbh, jmlh_data = 0;
    string harga[max_data], game[max_data], dev[max_data];
    bool ngulang;
    do{  
        menu(pilihan);
        switch(pilihan){
            case 1 : 
                tambah_data_game(game, harga, dev, jmlh_data, max_data, pilihan);
            break;
            case 2 :
                tampil_data_game(game, harga, dev, jmlh_data);
            break;
            case 3 :
                cout << "Terimakasih sudah menggunakan platform ini";
                system("exit");
            break;
            default :
                cout << "Pilihan tidak valid\n";
                if(cin.fail()){//error handling ketika inputan berupa char/string
                    cout << "Harap Masukan Angka\n";
                    cin.clear();
                    cin.ignore(999, '\n');
                } 
                system("pause");            
            break;
        }
        if(pilihan == 3){
            ngulang = false;
        } else {
            ngulang = true;
        }
    } while (ngulang);
    return 0;
}

void menu(int &pilihan){
    system("cls");
    cout << "===>   E-DAGAME (PLATFORM E-DAGANG GAME)   <===\n\n";
    cout << "Menu:\n";
    cout << "1. Tambah Data Game\n";
    cout << "2. Tampilkan Data Game\n";
    cout << "3. Keluar\n";
    cout << "Pilih Menu(1-3) : ";
    cin >> pilihan;
    system("pause");
}

void tambah_data_game(string game[], string harga[], string dev[], int &jmlh_data, int max_data, int pilihan){
    int tmbh, num = 0;
    bool cek;
    do{
        system("cls");
        cout << "=== Tambah Data Game ===\n";
        cout << "Berapa game yang mau ditambahkan? = ";
        //disini diberi opsi untuk user ingin menambahkan beberapa data sekaligus
        cin >> tmbh; 
        if(jmlh_data + tmbh > max_data){
            //untuk pengecekan jika data sudah sampai batas max = 100
            cout << "Penyimpanan sudah penuh\n";
        } else {
            if(cin.fail()){//error handling jika user input char/string
                if (num == 0){
                    cout << "Harap Masukan Angka\n";
                    cin.clear();
                    cin.ignore(999, '\n');
                    system("pause");
                    system("cls");
                } else if (num == 1){
                    cout << "Harap Diperhatiakan lagi\n"; 
                    cout << "Anda Hanya Bisa Memasukan Angka Saja\n";
                    cin.clear();
                    cin.ignore(999, '\n');
                    system("pause");
                    system("cls");
                } else if(cin.fail()) {
                    cout << "Anda Sudah Melebihi Batas Percobaan\n";
                    cout << "Selanjutnya Anda Akan Diarahkan Kembali Menuju Menu Utama\n";
                    system("pause");
                    system("cls");
                    cin.clear();
                    cin.ignore(999, '\n');
                    menu(pilihan);  
                }
                num++;
                cek = true;
            } else {
                cin.ignore();
                for(int j = 0; j < tmbh; j++){
                    cout << "Nama game\t: ";
                    getline(cin, game[jmlh_data]);
                    cout << "Harga game\t: ";
                    getline(cin, harga[jmlh_data]);
                    cout << "Nama Developer\t: ";
                    getline(cin, dev[jmlh_data]);
                    cout << endl;
                    jmlh_data++;
                }
                cek = false;
            }
        }
    } while(cek);
    if (tmbh > 0 && jmlh_data + tmbh <= max_data){
        cout << "Data berhasil ditambahkan\n\n";
    } else if (tmbh == 0){
        cout << "Tidak ada data yang ditambahkan\n\n";
    }
    system("pause");
}

void tampil_data_game(string game[], string harga[], string dev[], int jmlh_data){
    system("cls");
    if(jmlh_data > 0){
        cout << "== Data Game ==\n";
        for(int i = 0; i < jmlh_data ; i++){
        cout << i + 1 << ". Nama game : " << game[i] << ",  ";
        cout << "Harga game : " << harga[i] << ",  ";
        cout << "Nama developer : " << dev[i] << endl;
        } 
    } else {
        cout <<"Tidak ada data game yang tersedia\n\n";
    }
    system("pause");
}