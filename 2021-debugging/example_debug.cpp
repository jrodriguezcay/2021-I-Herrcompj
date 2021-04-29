#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(int argc, char *argv[]){

    int a = atoi(argv[1]);
    double b;
    int c = 1.0/b;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    double data[100] = {0};
    int ii = 1;
    for(auto & val: data){
        val = sin(ii);
        ii++;
    }

    cout<<data[-1]<<"\n";
    cout<<data[100]<<"\n";



    return 0;
}
