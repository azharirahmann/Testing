//Nama   : Muhammad Azhari Rahman
//Nim    : 1301144116
//Kelas  : IF-38-06

#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main(){
    int a,b,c;
    cout << "Masukkan nilai sisi pertama : ";
    cin >> a;
    cout << "Masukkan nilai sisi kedua   : ";
    cin >> b;
    cout << "Masukkan nilai sisi ketiga  : ";
    cin >> c;
    cout << endl;
    cout << "segitiga tersebut merupakan segitiga ";
    if (a==b && b==c)
        {cout << "sama sisi";}
    else if (a==b || a==c || b==c)
        {cout << "sama kaki";}
    else
        {cout << "sembarang";}
    getch();
    return 0;
    }
