#include <iostream>
using namespace std;
int main(){/*
    int angka[5] = {10,20,30,40,50};
    cout << "elemen arry : " << endl;
    for(int i = 0; i < 5; i++){
        cout << "angka["<< i << "] = "<< angka[i] << endl;
    }
    int angka[5];
    for(int i = 0; i < 5; i++){
        cout << "angka "<< i + 1 << " = "; cin >> angka[i];
    }
    cout << "elemen arry : " << endl;
    for(int i = 0; i < 5; i++){
        cout << "angka["<< i << "] = "<< angka[i] << endl;
    }
    int baris, kolom;
    int matriks[baris][kolom]; //{{1,2,3},
                                //{4,5,6},
                                //{7,8,9}};

    cout <<"masukkan jumalh baris yg di inginkan:";cin >> baris;                            
    cout <<"masukkan jumalh kolom yg di inginkan:";cin >> kolom; 
    cout << "baris = " << baris << endl;
    cout << "kolom = " << kolom << endl;
    for(int i = 0; i<baris; i++){
        for(int j = 0; j<kolom; j++){
            cout << "masukkan angka [" << i  << "][" << j << "] = ";
            cin >> matriks[i][j];
        }
    }
    cout << "matriks :\n";
    for(int i = 0; i<baris; i++){
        for(int j = 0; j<kolom; j++){
            cout << matriks[i][j]; //<< " ";
        }
        cout << endl;
    }*/
    int baris =0, kolom_mtxa = 0, kolom_mtxb = 0, matriks_a[baris][kolom_mtxa], matriks_b[baris][kolom_mtxb];
    cout <<"jumalh baris: ";cin >> baris;                            
    cout <<"masukkan jumalh kolom matriks a: "; cin >> kolom_mtxa; 
    cout <<"masukkan jumalh kolom matriks b: "; cin >> kolom_mtxb; 
    cout << "matriks a :\n";
    for(int i = 0; i<baris; i++){
       for(int j = 0; j<kolom_mtxa; j++){
            cout << "masukkan angka [" << i  << "][" << j << "] = ";
            cin >> matriks_a[i][j];
        }
    }
    cout << "matriks b :\n";
    for(int a = 0; a<baris; a++){     
        for(int b = 0; b < kolom_mtxb; b++){
            cout << "masukkan angka [" << a  << "][" << b << "] = ";
            cin >> matriks_b[a][b];
        }
    }
    cout << "matriks a :\n";
    for(int i = 0; i<baris; i++){
        for(int j = 0; j<kolom_mtxa; j++){
            cout << "|" << matriks_a[i][j] << "|" << " ";
        }
        cout << endl;
    }
    cout << "matriks b :\n";
    for(int a = 0; a<baris; a++){
        for(int b = 0; b<kolom_mtxb; b++){
            cout << "|" << matriks_a[a][b] << "|" << " ";
        }
        cout << endl;
    }
}