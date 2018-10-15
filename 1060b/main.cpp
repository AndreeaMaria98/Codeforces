#include <bits/stdc++.h>

using namespace std;

void nr(long long int n,int &S,int &nr_cifre,int &prima_cifra){
    S = 0;
    nr_cifre = 0;
    while( n ){
        nr_cifre++;
        if( n < 10 ) prima_cifra = n;
        n = n/10;
    }
}
int sum(long long int n){
    int S = 0;
    while( n ){
        S = S + n % 10;
        n = n / 10;
    }
    return S;
}
int main()
{
    long long int n;
    int S;
    int nr_cifre;
    int prima_cifra;
    long long a;

    cin>>n;

    if( n < 10 ){
        cout<<n;
        return 0;
    }
    nr(n/2,S,nr_cifre,prima_cifra);
    a = prima_cifra;
    while(nr_cifre - 1){
        a = a * 10 + 9;
        nr_cifre--;
    }
    int suma = sum(a) + sum(n-a);
    cout<<suma;
    return 0;
}
