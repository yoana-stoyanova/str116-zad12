//Програмата извежда сумата на отрицателните елементи в редицата от числа
#include <iostream>
using namespace std;
int main ()
{
    int n;
    double sum=0;
    while (n<2 || n>10) {cout<<"n = "; cin>>n;}
    double a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int j=0; j<n; j++)
    {
        if(a[j]<0){sum=sum+a[j];}
    }

    cout<<"sum = "<<sum;


    return 0;
}
