#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main (){
    int a,b,c;
    float x1,x2;
    cout << "Masukkan a     : ";
    cin >> a;
    cout << "Masukkan b     : ";
    cin >> b;
    cout << "Masukkan c     : ";
    cin >> c;
    cout << endl;
    x1 = ((-b)+sqrt((b*b)-4*a*c))/(2*a);
    x2 = ((-b)-sqrt((b*b)-4*a*c))/(2*a);
    cout << "Nilai x1 adalah : " << x1 << endl;
    cout << "Nilai x2 adalah : " << x2 << endl;
    getch();
    return 0;
}
