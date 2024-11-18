#include <iostream>
using namespace std;
// MATERI FUNGSI
// prototype?
/*
int angkakembali();
int main(){
    cout << angkakembali();
}
int angkakembali(){
    return 5;
}
-----------------------------------------------------------------------
void info();  // deklarasi fungsi
int main()
{
	info();  // memanggil fungsi
}
void info()
{
    int i;
    for (i = 0; i < 5; i++)
        cout << i << endl;
}
-------------------------------------------------------------------
double pembagian(int a, int b)
{
    double hasil = a / b;
    return hasil;
}

int main()
{
    int a, b;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "hasil pembagian: " << pembagian(a, b) << "\n";
}
----------------------------------------------------------------------
int penjumlahan(int a, int b);
int pengurangan(int a, int b);
int perkalian(int a, int b);
int pembagian(int a, int b);

int main(){
    system("cls");
    int a, b, pilih;
    cout << "masukkan nilai a : "; cin >> a;
    cout << "masukkan nilai b : "; cin >> b;
    cout << "1. penjumlahan\n";
    cout << "2. pengurangan\n";
    cout << "3. perkalian\n";
    cout << "4. pembagian\n";
    cout << "masukkan pilihan : "; cin >> pilih;
    switch(pilih){
        case 1:
            cout << "hasil :" << penjumlahan(a, b);
        break;
        case 2:
            cout << "hasil :" << pengurangan(a, b);
        break;
        case 3:
            cout << "hasil :" << perkalian(a, b);
        break;
        case 4:
            cout << "hasil :" << pembagian(a, b);
        break;
        default:
            cout << "tidak valid";
        break;
    }
    return 0;
}
int penjumlahan(int a, int b){
    int jumlah = a + b;
    return jumlah;
}
int pengurangan(int a, int b){
    int kurang = a - b;
    return kurang;
}
int perkalian(int a, int b){
    int kali = a * b;
    return kali;
}
int pembagian(int a, int b){
    int bagi = a / b;
    return bagi;
}
-----------------------------------------------------------------
// FUNGSI Void
char nama[15]; //deklarasi global 
void inputmahasiswa();
int main(){
    inputmahasiswa();
    cout << endl;
    system("pause");
    cout << "mantap";
}
void inputmahasiswa(){
    int nim;// deklarasi lokal
    cout << "Masukkan NIM : "; cin >> nim;
    cout << "Masukkan nama : "; cin >> nama;
    cout << "nama anda " << nama << " dengan NIM " << nim;
}
*/
// latihan
const float phi = 3.14;
int pilih, jari_jari;
float htgkeliling(int jari_jari);
float htgluas(int jari_jari);
int ganjilgenap();
int main(){
    cout << "Menu :\n";
    cout << "1. lingkaran\n";
    cout << "2. ganjil genap\n";
    cout << "pilih : ";
    cin >> pilih;
    switch (pilih){
        case 1:
        cout << "Masukkan jari-jari : "; cin >> jari_jari;
        cout << "1. keliling lingkaran : " << htgkeliling(jari_jari);
        cout << "2. luas lingkaran : "<< htgluas(jari_jari);
    }
}
float htgkeliling(int jari_jari){
    float keliling = 2 * phi * jari_jari;
    return keliling;
}
float htgluas(int jari_jari){
    float luas = 2 * phi * jari_jari;
    //return luas;
}