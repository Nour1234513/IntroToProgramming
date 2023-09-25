#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;
using namespace this_thread;
using namespace chrono;


int aritmetiskSummaFranAnalys(int n){
return n*(n+1)/2;
}
int aritmetiskSummaFranLoop(int n){
// TODO

    int k, sum = 0;

        for (k = 0; k <=n; k++) {

            sum = sum + k;
        }

        return sum;
}

// ******** Integral ************
// Returnerar ett exakt värde på hur stor yta som ligger under
// funktionen y=x*x mellan a och b på x-axeln.
double integralX2FranAnalys(double a, double b) {
    return (b * b * b - a * a * a) / 3;
}
// Returnerar ett approximativt värde på hur stor yta som ligger under
// funktionen y=x*x mellan a och b på x-axeln.

    double integralX2FranLoop(double a, double b){
        const double dx = 0.01;
        double area = 0;

        for ( double x = a; x <=(b-dx); x += dx){
            double y1=(x*x);
            double y2= (x+dx)*(x+dx);
            area+=  (dx*((y1+y2)/2));

        }
        return area;
}

void testaEnIntegral(double a, double b) {
    double resultatLoop = integralX2FranLoop(a, b);
    double resultatAnalys = integralX2FranAnalys(a, b);
    double diff = resultatLoop - resultatAnalys;
    cout << "integralX2FranLoop(" << a << "," << b << ") = " << resultatLoop
         << ", diff = " << diff << endl;
}
void skrivUtFibonacci(int n){
// TODO

    if (n>=1)
        cout << "1:1";
    if (n>=2)
        cout << ", 2:1";
    int x2 = 1;
    int x1 = 1;
    for (int i=3; i<=n ; ++i){
        x1=x1+x2;
        x2=x1-x2;
        cout<< ", "<<i << ":"<< x1;
    }
}


double kvadratroten(double x){
    // TODO
    long double k =0;
    long double g=1;
    for (int y =0;y<=10;y+=1){

        k=x/g;
        g=((g+k)/2);

    }
    return g;
}

void testaKvadratroten(double x){
    double resultat = kvadratroten(x);
    double diff = resultat - sqrt(x);
    cout << "kvadratroten(" << x << ") beräknad till " << resultat << " diff " << diff << endl;}
            void testaFleraKvadratrotter(){
            testaKvadratroten(2);
            testaKvadratroten(10);
            testaKvadratroten(100);
            cout << endl;
}



void testaFleraIntegraler() {
    testaEnIntegral(-1, 1);
    testaEnIntegral(0, 1);
    testaEnIntegral(1, 2);
    testaEnIntegral(2, 10);
    cout << endl;
}

void testaEnSumma(int n) {
    double resultat = aritmetiskSummaFranLoop(n);
    double diff = resultat - aritmetiskSummaFranAnalys(n);
    cout << aritmetiskSummaFranAnalys(n)<< endl;
    cout << "aritmetiskSummaFranLoop(" << n << ") = " << resultat
         << ", diff = " << diff << endl;
}
void testaFleraSummor() {
    for (int n = 0; n < 100; n += 20)
        testaEnSumma(n);
}
// (*********** fler uppgifter skall senare placeras här ****)
void ingangTillKap05Matteberakningar() {
    cout << "Ingång till Kap05 Matteberakningar." << endl;
    //*testaFleraSummor();
    testaFleraIntegraler();
    //*skrivUtFibonacci(20);

    //*testaFleraKvadratrotter();
    // gorFleraEstimatAvPi()
    // testaFleraExponenter();
    // plottaMinSinus();
    cout << endl;
}
