#include <iostream>
using namespace std;
//program memilih menu kedai kopi
int main (){
    int burger, french_fries, pasta, espresso, cappucino, latte, macaron, 
    tiramisu, cheesecake, total_harga, diskon, harga_akhir, pilihan, kuantitas;
    char kepemilikan_voucher;
    string voucher;
    cout << "--- Selamat datang di kedai kopi senja sendu ---\n\n";
    cout << "Silahan pilih menu berikut\n";
    cout << "1. Menu Makanan" << endl;
    cout << "2. Menu Minuman" << endl;
    cout << "3. Menu Dessert" << endl;
    cout << "Masukan Pilihan Anda : ";
    cin >> pilihan;

    switch (pilihan){
        case 1 :
        burger = 20000, french_fries = 10000, pasta = 25000;
        cout << "\n-- Menu Makanan --" << endl;
        cout << "1. Burger        IDR " << burger << endl;
        cout << "2. French fries  IDR " << french_fries << endl;
        cout << "3. Pasta         IDR " << pasta << endl;
        cout << "Silahkan pilih menu makanan\t: ";
        cin >> pilihan;
        cout << "Anda mau berapa porsi\t\t: ";
        cin >> kuantitas;
        cout << "Apakah anda punya voucher?(y/n) : ";
        cin >> kepemilikan_voucher;
        if(kepemilikan_voucher == 'y'){//menggunakan if untuk pengecekan kepemilikan voucher
            cout << "Masukkan kode voucher\t\t: ";
            cin >> voucher;
            if(voucher == "mknhmt"){//pengecekan apakah voucher benar atau salah
                cout << "\nSelamat anda berhasil mendapatkan diskon sebesar 20%" << endl;
            }
        }
        cout << "\n----- Nota Pembelian -----" << endl;
        switch(pilihan){
            case 1: 
            total_harga = burger * kuantitas;
             if(voucher == "mknhmt"){
                diskon = total_harga * 20/100;
            }
            harga_akhir = total_harga - diskon;
            cout << "Menu\t\t: Burger" << endl;
            cout << "Kuantitas\t: " << kuantitas << endl;
            cout << "Total Harga\t: " << total_harga << endl;
            break;
            case 2:
            total_harga = french_fries * kuantitas;
             if(voucher == "mknhmt"){
                diskon = total_harga * 20/100;
            }
            harga_akhir = total_harga - diskon;
            cout << "Menu\t\t: French fries" << endl;
            cout << "Kuantitas\t: " << kuantitas << endl;
            cout << "Total Harga\t: " << total_harga << endl;
            break;
            case 3:
            total_harga = pasta * kuantitas;
             if(voucher == "mknhmt"){
                diskon = total_harga * 20/100;
            }
            harga_akhir = total_harga - diskon;
            cout << "Menu\t\t: Pasta" << endl;
            cout << "Kuantitas\t: " << kuantitas << endl;
            cout << "Total Harga\t: " << total_harga << endl;
            break;
            default :
            cout << "pilihan tidak valid";
            break;
        }
        break;

        case 2 :
        espresso = 20000, cappucino = 20000, latte = 15000;
        cout << "\n-- Menu Minuman --" << endl;
        cout << "1. Espresso      IDR " << espresso << endl;
        cout << "2. Cappucino     IDR " << cappucino << endl;
        cout << "3. Latte         IDR " << latte << endl;
        cout << "Silahkan pilih menu minuman\t: ";
        cin >> pilihan;
        cout << "Anda mau berapa gelas\t\t: ";
        cin >> kuantitas;
        cout << "Apakah anda punya voucher?(y/n) : ";
        cin >> kepemilikan_voucher;
        if(kepemilikan_voucher == 'y'){//menggunakan if untuk pengecekan kepemilikan voucher
            cout << "Masukkan kode voucher\t\t: ";
            cin >> voucher;
            if(voucher == "mknhmt"){//pengecekan apakah voucher benar atau salah
                cout << "\nSelamat anda berhasil mendapatkan diskon sebesar 20%" << endl;
            }
        }
        cout << "\n----- Nota Pembelian -----" << endl;
        switch(pilihan){
            case 1: 
            total_harga = espresso * kuantitas;
             if(voucher == "mknhmt"){
                diskon = total_harga * 20/100;
            }
            harga_akhir = total_harga - diskon;
            cout << "Menu\t\t: Espresso" << endl;
            cout << "Kuantitas\t: " << kuantitas << endl;
            cout << "Total Harga\t: " << total_harga << endl;
            break;
            case 2:
            total_harga = cappucino * kuantitas;
             if(voucher == "mknhmt"){
                diskon = total_harga * 20/100;
            }
            harga_akhir = total_harga - diskon;
            cout << "Menu\t\t: Cappucino" << endl;
            cout << "Kuantitas\t: " << kuantitas << endl;
            cout << "Total Harga\t: " << total_harga << endl;
            break;
            case 3:
            total_harga = latte * kuantitas;
             if(voucher == "mknhmt"){
                diskon = total_harga * 20/100;
            }
            harga_akhir = total_harga - diskon;
            cout << "Menu\t\t: Latte" << endl;
            cout << "Kuantitas\t: " << kuantitas << endl;
            cout << "Total Harga\t: " << total_harga << endl;
            break;
            default :
            cout << "pilihan tidak valid";
            break;
        }
        break;

        case 3 :
        macaron = 20000, tiramisu = 20000, cheesecake = 15000;
        cout << "\n-- Menu Dessert --" << endl;
        cout << "1. Macaron       IDR " << macaron << endl;
        cout << "2. Tiramisu      IDR " << tiramisu << endl;
        cout << "3. Cheesecake    IDR " << cheesecake << endl;
        cout << "Silahkan pilih menu dessert\t: ";
        cin >> pilihan;
        cout << "Anda mau berapa porsi\t\t: ";
        cin >> kuantitas;
        cout << "Apakah anda punya voucher?(y/n) : ";
        cin >> kepemilikan_voucher;
        if(kepemilikan_voucher == 'y'){//menggunakan if untuk pengecekan kepemilikan voucher
            cout << "Masukkan kode voucher\t\t: ";
            cin >> voucher;
            if(voucher == "mknhmt"){//pengecekan apakah voucher benar atau salah
                cout << "\nSelamat anda berhasil mendapatkan diskon sebesar 20%" << endl;
            }
        }
        cout << "\n----- Nota Pembelian -----" << endl;
        switch(pilihan){
            case 1: 
            total_harga = macaron * kuantitas;
             if(voucher == "mknhmt"){
                diskon = total_harga * 20/100;
            }
            harga_akhir = total_harga - diskon;
            cout << "Menu\t\t: Macaron" << endl;
            cout << "Kuantitas\t: " << kuantitas << endl;
            cout << "Total Harga\t: " << total_harga << endl;
            break;
            case 2:
            total_harga = tiramisu * kuantitas;
             if(voucher == "mknhmt"){
                diskon = total_harga * 20/100;
            }
            harga_akhir = tiramisu - diskon;
            cout << "Menu\t\t: Tiramisu" << endl;
            cout << "Kuantitas\t: " << kuantitas << endl;
            cout << "Total Harga\t: " << total_harga << endl;
            break;
            case 3:
            total_harga = cheesecake * kuantitas;
             if(voucher == "mknhmt"){
                diskon = total_harga * 20/100;
            }
            harga_akhir = total_harga - diskon;
            cout << "Menu\t\t: Cheesecake" << endl;
            cout << "Kuantitas\t: " << kuantitas << endl;
            cout << "Total Harga\t: " << total_harga << endl;
            break;
            default :
            cout << "pilihan tidak valid";
            break;
        }
        break;

        default :
        cout << "pilihan tidak valid";
        break;
    }

    if(pilihan == 4){//tidak di beri perintah apapun supaya hanya cout pilihan tidak valid
    } else {
        cout << "Diskon\t\t: " << diskon << endl;
        cout << "Harga akhir\t: " << harga_akhir << endl;
        cout << "--------------------------\n\n";
        cout << "TERIMA KASIH TELAH MEMESAN! SELAMAT MENIKMATI!";
    }
    return 0;
}