//Nama   : Muhammad Azhari Rahman
//Nim    : 1301144116
//Kelas  : IF-38-06

#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main (){
    int m,n,x,i;
    i= 1;
    x = 1;
    cout << "Masukkan bilangan : ";
    cin >> m;
    cout << "Masukkan pangkat  : ";
    cin >> n;
    while (i<=n){
        x=x*m;
        ++i;
    }

    cout << endl << "Nilai dari " << m << " pangkat " << n << " adalah " << x;
    getch();
    return 0;
}
