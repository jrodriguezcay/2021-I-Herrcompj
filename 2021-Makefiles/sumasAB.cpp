#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cmath>

float sump(int i){
    float sum = 0;
    for(int j = 1; j <= i; j++){
        sum += 1.0/j;
    }

    return sum;
}

float sumdown(int i){
    float sum = 0;
    for(int j = i; j >= 1; j--){
        sum += 1.0/j;
    }

    return sum;
}

using namespace std;

int main(int argc, char **argv)
{
    cout<<setprecision(7);

     const int NMAX = atoi(argv[1]);

     for(int i = 1; i < NMAX; i++){
         float SUM1 = sump(i);
         float SUM2 = sumdown(i);
         cout<<i<<"\t\t"<<SUM1<<"\t\t"<<SUM2<<"\t\t"<<fabs(SUM1 - SUM2)/SUM2<<endl;
     }

     return 0;
}
