#include <cassert>
#include <cstdlib> // innehåller rand
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
using namespace std;



void skrivSlumptal(int antal) {
    int n=0;
  cout << "skriver några slumptal mellan 0 och " << RAND_MAX << endl;
  for (int i = 0; i < antal; ++i){
       n = 1 + rand() % 6;
        cout << n << " ";
  }
  cout << endl;
}


void provaSkrivSlumptal() {
  cout << "Provar skrivSlumptal" << endl;
  skrivSlumptal(5);
  skrivSlumptal(5);
}

void provaCyklicitet(){
    const int x=42;
    long int antalAnropTillRand=0;
    int antalSeddaX=0;
    long int senasteAnropsnummret=0;
    while(antalSeddaX<3){
        int slumptal=rand();
        antalAnropTillRand+=1;
        if(slumptal==x)
            cout << "sag " <<x<< "efter "<<antalAnropTillRand << "anrop\n";
        if (antalSeddaX>0)
            cout << antalAnropTillRand-senasteAnropsnummret << " anrop sedan forra gongen"<< endl;
        antalSeddaX+=1;
        senasteAnropsnummret=antalAnropTillRand;
        cout << "efter " << x << " kommer nu "<<  rand() << ", " << rand() << " och " << rand() << endl << endl;
        antalAnropTillRand+=3;
    }
}




int randnummer(){
     srand( unsigned( time(nullptr) ) );
     return rand();
}

void ingangTillSlump() {
    provaSkrivSlumptal();
    //provaCyklicitet();'
    //cout << randnummer();


}
