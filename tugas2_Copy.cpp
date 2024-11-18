#include <iostream>
using namespace std;
//program memilih menu kedai kopi
int main() {
    int total_harga, diskon, harga_akhir, pilihan, kuantitas;
    char kepemilikan_voucher;
    string voucher;
    int harga[] = {20000, 10000, 25000, 20000, 20000, 15000, 20000, 20000, 15000};
    string menu[] = {"Burger", "French Fries", "Pasta", "Espresso", "Cappucino", "Latte", "Macaron", "Tiramisu", "Cheesecake"};
    //menggunakan array agar code tidak terlalu panjang nantinya
    cout << "--- Selamat datang di kedai kopi senja sendu ---\n\n";
    cout << "Silakan pilih menu berikut\n";
    cout << "1. Menu Makanan" << endl;
    cout << "2. Menu Minuman" << endl;
    cout << "3. Menu Dessert" << endl;
    cout << "Masukan Pilihan Anda : ";
    cin >> pilihan;

switch (pilihan){
        case 1 :            
            cout << "\n------ Menu Makanan ------" << endl;
            cout << "1. Burger        IDR " << harga[0] << endl;
            cout << "2. French fries  IDR " << harga[1] << endl;
            cout << "3. Pasta         IDR " << harga[2] << endl;
            cout << "--------------------------\n";
            cout << "Silahkan pilih menu makanan\t: ";
            cin >> pilihan;
            cout << "Anda mau berapa porsi\t\t: ";
            cin >> kuantitas;
            cout << "Apakah anda punya voucher?(y/n) : ";
            cin >> kepemilikan_voucher;
                if(kepemilikan_voucher == 'y'){//menggunakan if untuk pengecekan kepemilikan voucher
                    cout << "Masukkan kode voucher\t\t: ";
                    cin >> voucher;
                }
            total_harga = harga[pilihan - 1] * kuantitas;
                if(voucher == "mknhmt"){//pengecekan apakah voucher benar atau salah
                    cout << "\nSelamat anda berhasil mendapatkan diskon sebesar 20%" << endl;
                    diskon = total_harga * 20/100;
                } else {
                    diskon = 0;
                }
            harga_akhir = total_harga - diskon;
            cout << "\n----- Nota Pembelian -----" << endl;
            cout << "Menu\t\t: " << menu[pilihan - 1] << endl;
        break;

        case 2:
            cout << "\n------ Menu Minuman ------" << endl;
            cout << "1. Espresso      IDR " << harga[3] << endl;
            cout << "2. Cappucino     IDR " << harga[4] << endl;
            cout << "3. Latte         IDR " << harga[5] << endl;
            cout << "--------------------------\n";
            cout << "Silahkan pilih menu minuman\t: ";
            cin >> pilihan;
            cout << "Anda mau berapa gelas\t\t: ";
            cin >> kuantitas;
            cout << "Apakah anda punya voucher?(y/n) : ";
            cin >> kepemilikan_voucher;
                if(kepemilikan_voucher == 'y'){//menggunakan if untuk pengecekan kepemilikan voucher
                    cout << "Masukkan kode voucher\t\t: ";
                    cin >> voucher;
                }
            total_harga = harga[pilihan + 2] * kuantitas;
                if(voucher == "mknhmt"){//pengecekan apakah voucher benar atau salah
                    cout << "\nSelamat anda berhasil mendapatkan diskon sebesar 20%" << endl;
                    diskon = total_harga * 20/100;
                } else {
                    diskon = 0;
                }
            harga_akhir = total_harga - diskon;
            cout << "\n----- Nota Pembelian -----" << endl;
            cout << "Menu\t\t: " << menu[pilihan + 2] << endl;
        break;

        case 3:
            cout << "\n------ Menu Dessert -----" << endl;
            cout << "1. Macaron       IDR " << harga[6] << endl;
            cout << "2. Tiramisu      IDR " << harga[7] << endl;
            cout << "3. Cheesecake    IDR " << harga[8] << endl;
            cout << "--------------------------\n";
            cout << "Silahkan pilih menu dessert\t: ";
            cin >> pilihan;
            cout << "Anda mau berapa porsi\t\t: ";
            cin >> kuantitas;
            cout << "Apakah anda punya voucher?(y/n) : ";
            cin >> kepemilikan_voucher;
                if(kepemilikan_voucher == 'y'){//menggunakan if untuk pengecekan kepemilikan voucher
                    cout << "Masukkan kode voucher\t\t: ";
                    cin >> voucher;
                }
            total_harga = harga[pilihan + 5] * kuantitas;
                if(voucher == "mknhmt"){//pengecekan apakah voucher benar atau salah
                    cout << "\nSelamat anda berhasil mendapatkan diskon sebesar 20%" << endl;
                    diskon = total_harga * 20/100;
                } else {
                    diskon = 0;
                }
            harga_akhir = total_harga - diskon;
            cout << "\n----- Nota Pembelian -----" << endl;
            cout << "Menu\t\t: " << menu[pilihan + 5] << endl;
        break;

        default :
            cout << "Maaf menu tidak tersedia";
        break;
    }
    
    if (pilihan >= 4){ 
        cout << "\nTERIMA KASIH TELAH BERKUNJUNG\n\n";     
    } else {
    cout << "Kuantitas\t: " << kuantitas << endl;
    cout << "Total Harga\t: " << total_harga << endl;
    cout << "Diskon\t\t: " << diskon << endl;
    cout << "Harga akhir\t: " << harga_akhir << endl;
    cout << "--------------------------\n";
    cout << "TERIMA KASIH TELAH MEMESAN! SELAMAT MENIKMATI!\n\n";
    }
    return 0;
}