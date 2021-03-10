#include<iostream>

using namespace std;

double fact(int i)
{
    double nfact = 1;

    for(int j =  1; j <= i; j++ ){
        nfact *= j;
    }

    return nfact;
}

int main()
{
    double sum = 0, n, subt;

    cout<<"ingrese el número de terminos de la sucesion: ";cin>>n;

    for(int i = 1; i <= n; i++){
        subt = 1/fact(i);
        sum += subt;
        cout<<i<<"\t\t "<<sum<<endl;
    }

    return 0;
}
