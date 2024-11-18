#include <iostream>
#include <iomanip>
using namespace std;
// nested loop(loop bersarang)
/*
int main(){
    int baris, kolom, hasil_kali, MAKS = 10;
    for(baris = 1; baris <= MAKS; baris++){
        for(kolom = 1; kolom <= MAKS; kolom++){
            hasil_kali = baris * kolom;
            cout << setw(3) << hasil_kali;
        }
        cout << endl;
    }
    return 0;
}
int main(){
    int i, j, n;
    cout << "= ";
    cin >> n;
    for(i = n; i >= 1; i--){ // atau bisa for(i = 1; i <= 5; i++)
        for(j = 1; j <= i; j++){// for(j = 5; j >= i; j--)
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
int main(){
    int transaksi, item, brp_trans, brp_item;
    float harga, total;
    cout << "mau berapa kali transaksi?\n ";
    cout << "= "; cin >> brp_trans;
    for(transaksi = 1; transaksi <= brp_trans; transaksi++){
        total = 0;
        cout << "transaksi ke- " << transaksi << endl;
        cout << "mau berapa item? "; cin >> brp_item;
        for(item = 1; item <= brp_item; item++ ){
            cout << "masukkan harga item ke- " << item << " : "; 
            cin >> harga;
            total+= harga;
        }
        cout << "total untuk transkaski ke-" << transaksi << " : " << total << "\n\n";
    }
    cout << 'a';
}  

int main ()
{
	int jum_data = 0;
	int nomor=1;
	float total_nilai =0;
	float nilai, rata_rata;
	
	cout << "\nJumlah data :"; cin >> jum_data;

	while (nomor <= jum_data)
		{
		cout << "\n Data ke-" << nomor << " : ";
		cin >> nilai;
		if (nilai>100)
			{
			cout << "\nData terlalu besar";
			continue;
			}
		total_nilai=total_nilai + nilai;
		nomor++;
     }
  rata_rata =total_nilai/jum_data;

	cout << "\nJumlah data  = " << jum_data;
	cout << "\nJumlah nilai = " << total_nilai;
	cout << "\nRata-rata    = " << rata_rata;
	return 0;
}
*/
int main ()
{
	int i,n;
	float x,sx,rx;
	
	cout << "Jumlah data :"; cin >> n;
	cout << "\n==============================\n";
	cout << "no                     data   \n";
	cout << "==============================\n";
	sx=0;
	for (i=1;i<=n; i++)
	 {
		cout << i;
		cout << setw(45) << "Input data : ";cin >> x; 
    	cout << setw(23);
		if (x<0)
			{
			 cout << "\n";
			 goto selesai;
            }
            cout << x << endl;
		    sx+=x;
		}

	selesai:

	 cout << "==============================\n";
	 cout << "Total data            " << sx << "\n";
	 cout << "==============================\n";
	 rx= sx /(i-1);
	 cout << "Rata-rata             " << rx << "\n";
	 cout << "==============================\n";
	 cout << "            ";

	return 0;
}
