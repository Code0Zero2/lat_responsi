#include <iostream>
#include <string.h>
using namespace std;/*
void tampil(int x)  // x merupakan contoh dari pass by value
{
    cout << x << '\n';
}
int main()
{
    tampil(10);

    int nilai = 5;
    tampil(nilai);  // mengirim variable x 
}
//pass by reference
void tampil(int &x)
{
    x += 5;
    //cout <<" = " <<  x << '\n';
}
int main()
{
    int nilai = 5;
    cout << "nilai awal: " << nilai << '\n';
    tampil(nilai);
    cout << "nilai setelah pemanggilan tampil: " << nilai;
}
//pass by adress
void tampil(int *a)
{
    *a = *a + 10;
    //cout <<" = " <<  x << '\n';
}
int main()
{
    int nilai = 5;
    cout << "nilai awal: " << nilai << '\n';
    tampil(&nilai);
    cout << "nilai setelah pemanggilan tampil: " << nilai;
}
//fungsi rekursi
int faktorial (int n)
{
    if (n == 1)
        return 1;
    else 
        return n * faktorial(n-1);
}
int main()
{
    int x;
    cout << "Mencari faktorial dari x! \n";
    cout << "Masukkan nilai x (bulat positif) : ";
    cin >> x;
    cout << "Faktorial dari " <<x<< " = " <<faktorial(x) <<endl;
    return 0;
}
int fibonacci(int n){
    if(n<=1){
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main(){
    int n;
    cout << "masukkan angka : "; cin >> n;
    cout << "elemen ke-" << n << " dalam fibonacci adalah " << fibonacci(n);
}
int main()
{ 
    char nama[40];
    strcpy(nama, "I Gusti Ngurah Alit Widana Putra");//strcpy konversi string to char???
    cout << "Nama : "<< nama;
    cout << "\nBanyaknya karakter nama Anda : " << strlen(nama);
    return 0;
}*///latsol
#include <math.h>
int pangkat(int x, int y){
    if(y == 1){
        return 1;
    } else {
        //pow(x,y)
        return pangkat(pow(x,y));
    }
}
int main(){
    int x,y;
    x = 2;
    cout << "masukkan angka : ";
    cin >> y;
    cout << "hasil dari 2 pangkat " << y << " = " << pangkat(x,y);
}
int jmlhdrt(int x){
    //int awal = 3;
    if(x == 1){
        return 3;
    } else {
        return x ;
    }
}
int main(){
    int x;
    cout << "Masukkan jumlah deret : ";
    cin >> x;
    cout << "hasil : " << jmlhdrt(x);
}