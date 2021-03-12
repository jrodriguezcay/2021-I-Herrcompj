#include<iostream>
#include<iomanip>

using namespace std;

double fact(int i)
{
    double nfact = 1;

    for(int j =  1; j <= i; j++ ){
        nfact *= j;
    }

    return nfact;
}

int main(int argc, char **argv )
{
    cout<<setprecision(10);
    double sum = 0, n, subt;
    const int N = atoi(argv[1]);

    for(int i = 1; i <= N; i++){
        subt = 1/fact(i);
        sum += subt;
        cout<<i<<"\t\t "<<sum<<endl;
    }

    return 0;
}
