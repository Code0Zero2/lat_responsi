#include <iostream>
using namespace std;
//statement perulangan
/*
int main(){
    int x;
    cout << "masukkan nilai x : ";
    cin >> x;
     for(int i = 1; i <= x ;i++){
        cout << i << " halo" <<endl;  
    }
    int i = 0;
    cout << i;
}

int main(){
    int j=2,k=2;
    cout << "-FOR-" << endl ;
    for(int i = 2; i<=1;i++){
        cout << i << " halo" <<endl;  
    }
    cout << "-do while-\n";
    do{
        cout << j << " hallo"<< endl;
        j++;//ngejalain dulu baru ngecek??
    } while (j<=1);
    cout << "-while do-\n";
    while(k<=1){
        cout << k << " halo\n";
        k++;//ngecek dulu baru ngejalanin
    }
}

int main(){
   
    char ulangi;
    int counter = 0;    
    while(counter < 3){
        cout << "apakah mau ngulang? (y/t) : ";
        cin >> ulangi;
        if(ulangi == 'y'){
         
        counter++;
        } else {
            cout << "program selesai.";
            break;
        }
        
    }
    cout << "push up diulang sebanyak " << counter << " kali";//counter keknya buat menghitung berapa kali pengulangan yang udah terjadi
}

    int counter, count;
    cin >> count;
    counter=count;
    while(counter < 5){
        cout << "mencetak counter " << counter;
        counter++;
    }
    cout << "mencetak " << count << " counter";
}

int main(){
    int jumlah_siswa;
    float nilai, total_nilai = 0, rata_rata;
    cout << "masukkan jumlah siswa : ";
    cin >> jumlah_siswa;
    system("pause");
    system("cls");
    for(int i = 1; i <= jumlah_siswa; i++){
        cout << "masukkan nilai siswa ke- "<< i << " : ";
        cin >> nilai;
        total_nilai += nilai;
    }
    rata_rata = total_nilai / jumlah_siswa;
    system("pause");//untuk pause
    system("cls");//clear screen
    cout << "\nTotal nilai\t: " << total_nilai << endl;
    cout << "rata-rata nilai\t: " << rata_rata <<  endl;
    system("exit");//untuk keluar dari program?
    return 0;
}

int main(){ // kode masih salah yg bener yg bawah 
    int biasa, penjumlahan, menu, angka;
    char bintang, ulangi;
    bool lanjut;
    do{
        cout << "Menu : \n";
        cout << "1. deret biasa\n";
        cout << "3. deret penjumlahan\n";
        cout << "3. deret bintang\n";
        cout << "4. exit\n";
        cout << "silahkan pilih : ";
        cin >> menu;
        if(menu == 1){
            cout << "Masukan angka : ";
            cin  >> angka;
            for(int i = 1; i <= angka; i++ )
            cout << i ;
        } else if (menu == 2){
            cout << "masukkan angka : ";
            cin >> angka;
            for(int i = 1; i <= angka; i++)
            i += i;
            cout << " = " << angka;
        }
        cout << "\nmau mengulang ?(y/t) : ";
        cin >> ulangi;
         if(ulangi =='y'){
            lanjut = true;
        } else {
            lanjut = false;
        }
        
    } while(lanjut);
    system("exit");
}
*/
//code yg bener
#include <iostream>
using namespace std;

int main() {
    int pilihan, n;
    bool lanjut;
    string ulang;

    do {
        system("cls");
        // Menampilkan menu
        cout << "Menu:\n";
        cout << "1. Deret biasa\n";
        cout << "2. Deret Penjumlahan\n";
        cout << "3. Menu Bintang\n";
        cout << "4. Exit\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            // Deret biasa
            cout << "Masukkan jumlah angka dalam deret: ";
            cin >> n;
            for (int i = 1; i <= n; i++) {
                cout << i << " ";
            }
            cout << endl;

        } else if (pilihan == 2) {
            // Deret penjumlahan
            cout << "Masukkan jumlah angka dalam deret: ";
            cin >> n;
            int sum = 0;
            for (int i = 1; i <= n; i++) {
                cout << i;
                if (i != n) cout << " + ";
                sum += i;
            }
            cout << " = " << sum << endl;

        } else if (pilihan == 3) {
            // Menu bintang
            int subPilihan;
            cout << "Pilih menu bintang (1: Vertikal, 2: Horizontal): ";
            cin >> subPilihan;

            if (subPilihan == 1) {
                // Bintang vertikal
                cout << "Masukkan jumlah bintang: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "* ";
                }
                cout << endl;

            } else if (subPilihan == 2) {
                // Bintang horizontal
                cout << "Masukkan jumlah bintang: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "*\n";
                }
            } else {
                cout << "Pilihan tidak valid.\n";
            }

        } else if (pilihan == 4) {
            // Exit
            system("exit");
            cout << "Keluar dari program.\n";
            
        } else {
            cout << "Pilihan tidak valid.\n";
        }

        cout << "Apakah ingin mengulang?(y/n) : ";
        cin >> ulang;
        if(ulang == "y")
            lanjut = true;
        else lanjut = false;
        system("exit");
    } while (lanjut);
    
}
