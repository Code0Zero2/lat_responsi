#include <iostream>
using namespace std;
//program konversi suhu
int main(){
    float celcius, fahrenhite, kelvin, reamur;//menggunakan tipe data float agar hasilnya bisa 
    
    cout << "Masukkan suhu dalam Celcius = ";
    cin >> celcius;//input suhu dalam celcius
    cout << endl;
    cout << "Hasil konversi\n";
    
    fahrenhite = (celcius * 9/5) + 32;//rumus konversi celcius to fahrenhite
    cout << "Fahrenhite\t= " << fahrenhite << endl;
    
    kelvin = 273 + celcius;//rumus konversi celcius to kelvin
    cout << "Kelvin\t\t= " << kelvin << endl;
    
    reamur = (celcius * 4/9) + 32;//rumus konversi celcius to reamur
    cout << "Reamur\t\t= " << reamur << endl;
    
    return 0;
}