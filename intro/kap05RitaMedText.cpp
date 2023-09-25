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

void skrivMultiplikationsmatris() {
    cout << "Multiplikationmatris" << endl;
    // TODO
    for (int rad=1;rad<=10;rad +=1){
        for (int kolumn = 1 ; kolumn <= 10 ;kolumn +=1 )
            cout << setw(3)<< rad*kolumn;
    cout << endl;}
}
void fyllRektangel(int hojd, int bredd) {
    cout << "Fylld rektangel" << endl;
    // TODO
    for (int tall=0;tall<hojd;tall+=1){
        for (int bred=0;bred<bredd;bred+=1)
            cout << "*";
    cout << endl;}
}
void ritaRektangel(int hojd, int bredd) {
    cout << "Ritad rektangel." << endl;
    // TODO
    for (int tall=0;tall<hojd;tall+=1){

        for(int bred=0;bred<bredd;bred+=1){
            if ((tall>0&&tall<(hojd-1))&&(bred>0&&bred<(bredd-1)))
                cout<<" ";
            else
                cout<<"*";}

    cout << endl;}
}
void fyllTriangel(int hojd) {
    cout << "Fylld triangel." << endl;

    // TODO
    for(int tall=0;tall<hojd;tall+=1){
        for (int bred=0;bred<tall;bred+=1)
        cout<<"*";
    cout << endl;}
}
void fyllCirkel(int radie) {

        const int n=radie;
        const double r2=(radie)*(radie);
        for (int y=-n;y<=n;++y){
        for (int x=-n;x<=n;++x){
            if ((y*y+x*x)<r2)
                cout << " * ";
            else cout << "   ";

        }
          cout << endl;
        }
    }

void ingangTillKap05RitaMedText() {
    cout << "Ingång till rita med text." << endl;
    cout << endl;
    skrivMultiplikationsmatris();
    fyllRektangel(4, 20);
    cout << endl;
    ritaRektangel(6, 25);
    cout << endl;
    fyllTriangel(6);
    cout << endl;
    fyllCirkel(5);
    cout << endl;
}
