
#include <iostream>
using namespace std;

int a[20];          //deklarasi array a dengan ukuran 20
int n;              //deklarasi variabel n untuk menyimpan banyak elemen 

void input(){        //prosedur untuk input
    while (true) {  //looping
        cout << "Masukan banyak elemen pada array : ";  //output ke layar
        cin >> n;   //input dari pengguna
        if (n <= 20)    //jika n kurang dari atau sama dengan 20
            break;  //keluar dari loop
        else {      //jika n lebih dari 20
            cout << "\nAraay dapat mempunyai maksimal 2o elemen. \n";   //output ke layar
        }
    }
    cout << endl;                               //output baris kosong
    cout << "====================" << endl;     //output ke layar
    cout << "Masukan Elemen Araay" << endl;     //output ke layar
    cout << "====================" << endl;     //output ke layar

    for (int i = 0; i < n; i++) {       //looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ":";   //output ke layar
        cin >> a[i];                    //input dari pengguna
    }
}

