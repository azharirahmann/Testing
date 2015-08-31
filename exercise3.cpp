//Nama   : Muhammad Azhari Rahman
//Nim    : 1301144116
//Kelas  : IF-38-06

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
    int i,a;
    a=9999;
    while (i != 9999){
        cout << "Masukkan angka : ";
        cin >> i;
        if (i<a){
            a=i;
        }
    }
    cout << "Nilai minimum dari angka yang telah anda masukkan adalah " << a;
    getch();
    return 0;
}
