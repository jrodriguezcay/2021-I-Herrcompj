#include<iostream>

using namespace std;

double div(double a, double b){
    return a/b;
}

double pro(double a, double c){
    return a*c;
}

int main(){
    double a = -1.7;
    double b = 2.1;
    double c;

    if(a >= 0){
        cout<<div(a,b);
    }
    else{
        cout<<pro(a,c);
    }

    return 0;
}
