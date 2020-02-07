#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}
    float sigma;
void stat(const double a[],int n ,double b[]) {
    int i = 0;
    for( i ;i<n;i++){
        b[0] += a[i]/n;
        sigma += pow(a[i],2);
        b[1] = sqrt( sigma/n - pow(b[0],2) );
    if ( b[2] < a[i] ) b[2] = a[i];
    if ( b[3] > a[i] ) b[3] = a[i];
    }
}

