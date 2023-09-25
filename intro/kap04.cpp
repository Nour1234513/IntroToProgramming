#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include <cmath>
#include <iomanip>
#include <bitset>

using namespace std;
using namespace this_thread;
using namespace chrono;

bool arJamnt(int n){
    if (n % 2 == 0)
        return true;
    else return false;
}

bool arJamnt1(int n){
return n % 2 == 0;
}
void provaAttJamforaFlyttal(){
    cout << "provar att jämföra flyttal." << endl;
    double tal1 = 0.3;
    double tal2 = 0.1 + 0.1 + 0.1;
    if (tal1 == tal2)
        cout << tal1 << " och " << tal2 << " är lika" << endl;
    else cout << tal1 << " och " << tal2 << " är OLIKA" << endl;
    cout << setprecision(20) << tal1 << " och " << tal2 << endl;
    cout << endl;
}


void test(){
    double n = 123.502;
    double x = 123.5;
    if (n-x <= 0.001)
         cout << "ture" << endl;
    else
        cout << "false" << endl;
    cout << fixed << setprecision(3) << n-x << endl;
    cout << fixed << setprecision(3) << 1.0/1000 << endl;
}

bool ungefarLika(double a, double b){
   /* if (a>=b)
        if (a-b < 1.0/1000)
            return true;

        else
            return false;
    else
        if (b-a < 1.0/1000)
            return true;

        else
            return false;*/
    if (a>b)
        return  (a-b <= 0.001);
    else
        return (b-a <= 0.001);


}

void testaUngefarLika(){
    cout << "testar ungefarLika" << endl;
    const double epsilon = 0.0005;
    const double delta = 0.002;
    const double x = 123.5;
    bool ok1 = ungefarLika( x, x + epsilon);
    bool ok2 = ungefarLika( x, x - epsilon);
    bool ok3 = !ungefarLika( x, x + delta);
    bool ok4 = !ungefarLika( x, x - delta);
    cout << ok1 << ok2 << ok3 << ok4 << endl;
    if (ok1 && ok2 && ok3 && ok4)
        cout << "ungefarLika klarade testen" << endl;
    else cout << "ungefarLika har minst en BUG!!!!!" << endl;
    cout << endl;
}

void provaUngefarLika(){


cout << "Provar ungefarLika." << endl;
double a = 0.3;
double b = 0.1 + 0.1 + 0.1;
if ( ungefarLika(a,b) ){
cout << "a och b har ungefär samma värden." << endl;
if (a == b)
cout << "De har faktiskt exakt samma värden!" << endl;
else
cout << "Men bara ungefär." << endl;
}
else cout << "a och b är inte särskilt lika" << endl;
cout << endl;
}

void provaOavsiktligTilldelning(){
    cout << "provar oavsiktlig tilldelning." << endl;
    const double summa = 3 + 4 + 5 + 3;
    const int antal = 4;
    if (antal == 0)
        cout << "medelvärdet kan ej beräknas" << endl;
    else {
        double medelvarde = summa/antal;
        cout << "medelvärdet är " << medelvarde << endl;
    }
    cout << endl; 
}

void skrivatallibinara(int n){
    while (n!=0){
        //while(true){
            int rest =0;
            int binar = n/2;

            rest = n - binar;
            n=rest;

            cout << n << endl;



        }
    }
//}
