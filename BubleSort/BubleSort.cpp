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
void bubbleSortAraay() {               //prosedur untuk menggurutkan array dengan metode booble sort
    for (int i = 1; i < n; i++) {           //looping dengan i dimulai dari 1 hingga n-1
        for (int j = 0; j < n - i; j++) {   //looping dengan j dimulai dari 0 hingga n-i
            if (a[j] > a[j + 1]) {          //jika nilai pada pada a[j] lebih besar dari a[j+1]
                int temp = a[j];            //simpan nilai a[j] ke variabel sementara temp
                a[j] = a[j + 1];            //assign nilai a[j+1] ke a[j]
                a[j + 1] = temp;            //assign nilai temp ke a[j+1]
            }
        }
    }
}

void unsorted() {
    cout << endl;                                      //output barais kosong
    cout << "==============================" << endl;   //output ke layar
    cout << "Elemen Araay yg belum tersusun" << endl;   //output ke layar
    cout << "==============================" << endl;   //output ke layar
    for (int j = 0; j < n; j++) {                       //looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                           //output ke layar
    }
    cout << endl;                                       //output baris kosong
}
void display() {                                        //prosedur untuk menampilkan hasil
    cout << endl;                                       //output baris kosong
    cout << "================================" << endl; //output ke layar
    cout << "Element Araay yg telah tersusun" << endl;  //output ke layar
    cout << "================================" << endl; //output ke layar
    for (int j = 0; j < n; j++) {                       //looping dengan j dimulai 0 hingga n-1
        cout << a[j] << endl;                           //output ke layar
    }
    cout << endl;                                       //output baris kosong
}





