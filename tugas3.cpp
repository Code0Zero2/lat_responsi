#include <iostream>
using namespace std;

//Program menampikan menu sesuai dengan genjil genap NIM

bool tahunKabisat(int tahun);
int jmlhDigit(int angka);
int konversiJamkeDetik(int jam, int menit, int detik);
int nilaiMax();
float hitungBMI(float berat, float tinggi);

float BMI;
int nilai;

int main(){
    bool ngulang;
    char nim[10], ulang;
    string nama;
    float berat, tinggi;
    int dgtakir, pilihan, jam, menit, detik, tahun, angka;
    do{
        //menggunakan if else dan do while untuk pengecekan apakah nama dan nim sudah benar
        system("cls");
        cout << "Masukkan Nama Anda\t: ";
        cin.ignore();
        getline(cin, nama);
        cout << "Masukkan NIM Anda\t: ";
        cin >> nim;
        cout << "\n\nApakah Nama dan NIM Anda sudah benar?(y/n) : ";
        cin >> ulang;
        if(ulang == 'y'){
            ngulang = false;
        } else {
            ngulang = true;
        }
    } while(ngulang);
    dgtakir = nim[8] % 2;
    do{
        //menggunakan do while untuk memberi pilihan apakah nanti ingin menampilan menu kembali
        if (dgtakir == 0){
            //pengecekan untuk NIM genap lalu menampilkan menu untuk NIM genap
            system("cls");
            cout << "------ Menu ------\n";
            cout << "1. Hitung Jumlah Digit\n";
            cout << "2. Menentukan Nilai Maksimum\n";
            cout << "3. Hitung BMI\n";
            cout << "4. keluar\n";
            cout << "Masukkan Pilihan Anda : ";
            cin >> pilihan;
            switch(pilihan){
                case 1 :
                    cout << "\n--- Hitung Jumlah Digit ---\n";
                    cout << "Masukkan angka\t: ";
                    cin >> angka;
                    cout << "Jumlah digit\t: " << jmlhDigit(angka);
                break;
                case 2 :
                    cout << "\n--- Menentukan Nilai Maksimum ---\n";
                    cout << nilaiMax(); 
                break; 
                case 3 :
                    cout << "\n--- Hitung BMI ---\n";
                    cout << "Masukkan Berat Badan Anda(kg)\t\t: ";
                    cin >> berat;
                    cout << "Masukkan Tinggi Badan Anda(Meter)\t: ";
                    cin >> tinggi;
                    cout << "Skor BMI Anda\t\t\t\t: " << hitungBMI(berat, tinggi);
                    if (BMI < 18.5){
                    cout << " (Kurus)";
                    } else if(BMI >= 18.5 && BMI < 24.9){
                        cout << " (Normal)";
                    } else if(BMI >= 25 && BMI < 29.9){
                        cout << " (Gemuk)";
                    } else if (BMI >= 30){
                        cout << " (Obesitas)";
                    }
                break;
                case 4 : 
                    cout << "Keluar dari program";
                break;
                default :
                    cout << "pilihan tidak valid";
                break;
            }
        } else {
            //pengecekan untuk NIM ganjil lalu menampilkan menu untuk NIM ganjil
            system("cls");
            cout << "------ Menu ------\n";
            cout << "1. Tahun Kabisat\n";
            cout << "2. Konversi Jam ke Detik\n";
            cout << "3. Hitung BMI\n";
            cout << "4. keluar\n";
            cout << "Masukkan Pilihan Anda : ";
            cin >> pilihan;
            switch(pilihan){
                case 1 :
                    cout << "\n--- Cek Tahun Kabisat ---\n";
                    cout << "Masukkan Tahun : ";
                    cin >> tahun;
                    if (tahunKabisat(tahun)){
                        cout << tahun << " adalah tahun kabisat";
                    } else {
                        cout << tahun << " bukan tahun kabisat";
                    }
                break;
                case 2 :
                    cout << "\n--- Konversi Jam ke Detik ---\n";
                    cout << "Masukkan Jam\t: ";
                    cin >> jam;
                    cout << "Masukkan menit\t: ";
                    cin >> menit;
                    cout << "Masukkan detik\t: ";
                    cin >> detik;
                    cout << "Total detik\t: " << konversiJamkeDetik(jam, menit, detik);
                break;
                case 3 : 
                    cout << "\n--- Hitung BMI ---\n";
                    cout << "Masukkan Berat Badan Anda(kg)\t\t: ";
                    cin >> berat;
                    cout << "Masukkan Tinggi Badan Anda(Meter)\t: ";
                    cin >> tinggi;
                    cout << "Skor BMI Anda\t\t\t\t: " << hitungBMI(berat, tinggi);
                    if (BMI < 18.5){
                    cout << " (Kurus)";
                    } else if(BMI >= 18.5 && BMI < 24.9){
                        cout << " (Normal)";
                    } else if(BMI >= 25 && BMI < 29.9){
                        cout << " (Gemuk)";
                    } else if (BMI >= 30){
                        cout << " (Obesitas)";
                    }
                break;
                case 4 : 
                    cout << "Keluar dari program";
                break;
                default :
                    cout << "pilihan tidak valid";
                break;
            }
        }
        if (pilihan != 4){
            cout << "\n\nApakah Anda mau mengulang?(y/n) : ";
            cin >> ulang;
            if (ulang == 'y'){
                ngulang = true;
            } else {
                ngulang = false;
                cout << "Program selesai";
                system("exit");
            }
        } else {
            ngulang = false;
            system("exit");
        }
    } while(ngulang);
}

bool tahunKabisat(int tahun){
    if (tahun % 400 == 0 || tahun % 4 == 0){
        return true;
    } else {
        return false;
    }
}

int jmlhDigit(int angka){
    int digit = 0;
    if (angka == 0){
        return 1;
    }
    while (angka != 0){
        angka = angka /10;
        digit++;
    }
    return digit;
}
    
int konversiJamkeDetik(int jam, int menit, int detik){
    int totaldetik, mntTodtk;
    menit = menit * 60;
    jam = jam * 3600;
    totaldetik = jam + menit + detik;
    return totaldetik;
}

int nilaiMax(){
    int max;
    for(int a = 1; a <= 3; a++){
        cout << "Masukkan bilangan ke-" << a << "  : ";
        cin >> nilai;
        if(nilai > max){
        max = nilai;
        }
    }
    cout << "Nilai Maksimum\t\t: ";
    return max;   
}

float hitungBMI(float berat, float tinggi){
    BMI = berat / (tinggi * tinggi);
    return BMI;
}