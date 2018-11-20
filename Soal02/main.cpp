#include <iostream>

using namespace std;

int main()
{
    int N,X,T,Batas;
    cout<< "masukan nilai N :" ;
    cin>> N;
    cout<< endl;

    Batas = N + 100;
    X = 20;
    T = N;
    while( T <= Batas)
    {
        T = T + X;
        X = X + 10;
    }
    cout << "Hasilnya Adalah :" << T;
}
