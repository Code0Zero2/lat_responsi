#include <iostream>
using namespace std;
//statement if, if-else, if-else if-else atau statement pengendalian
/*
int main(){
    int jumlah_poin;
    cout << "Masukkan jumlah koin : ";
    cin >> jumlah_poin;
    // kalo statement tunggal tanpa {} statement max 1 saja yang termausk di if nya
    if (jumlah_poin >= 100 || jumlah_poin < 200){
        cout << "kamu adalah member gold\n";
        cout << "kamu dapat diskon 10%\n";
        int a = 5;
        cout << "nilai a : " << a << endl;
    } else {
        cout << "kamu nukan member\n";
    }
    return 0;
}


int main(){
    int nilai;
    cout << "nilai : ";
    cin >> nilai;
    if (nilai >= 50){
        if(nilai >= 60){
            if(nilai >= 70){
                if(nilai >= 80){
                    if(nilai >= 90){
                        if(nilai >= 100){// kalo input lebih dari 100 hasilnya masuk ke else sebelumnya
                            cout << "anomali";
                        } else
                        cout << "nilai A";
                    } else
                    cout << "nilai B";
                } else
                cout << "nilai C";
            } else
            cout << "nilai D"; 
        } else
        cout << "nilai E";
    }
    return 0;
}
*/
int main(){
    float ipk;
    int lama_studi;
    cout << "lama studi : ";
    cin >> lama_studi;
    cout << "masukkan ipk : ";
    cin >> ipk;

    if (lama_studi <= 4){
        if (ipk >= 3.51 && ipk <= 3.79 ){cout << "cumlaude";}
        else if (ipk >= 3.80 && ipk <= 3.99 ){cout << "mangna cumlaude";} 
        else if (ipk == 4.00 ){cout << "summa cumlaude";}
    }   
    else if (ipk >= 3.00 && ipk <= 3.50 ){
        cout << "predikat : sangat baik";
    }
    else if (ipk >= 2.99 && ipk <= 2.50 ){
        cout << "predikat : baik";
    }
    else if (ipk >= 2.49 && ipk <= 2 ){
        cout << "predikat : cukup";
    }
    else {
        cout << "predikat : kurang";
    }
    return 0;
}