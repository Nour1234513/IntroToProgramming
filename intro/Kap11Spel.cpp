#include <array>
#include <cassert>
#include <cstdlib> // innehåller rand
#include <iostream>
#include <string>
#include <thread>
#include <time.h>
#include <vector>
#include <fstream>
#include <thread>
#include <iomanip>
#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include <cmath>
#include <iomanip>


using namespace std;
using namespace this_thread;
using namespace chrono;



int tarningsvarde(){
// TODO
    srand( unsigned( time(nullptr) ) );
    sleep_for(milliseconds(1000));
    return (1+rand()%6);


}

int bruttovinst(int t1, int t2, int t3){
// TODO
    if ((t1==t2&&t1==t3)&&t1==6)
        return 100;
    else if (t1==t2 && t1==t3)
        return 50;
    if (t1==t2||t1==t3||t2==t3)
        return 20;
return 0;

}

bool boolFranUppmaning(const char uppmaning[]){
// TODO
    cout << uppmaning<< endl;
    char svar;
    cin >> svar;
    if (svar=='y'||svar=='Y')
        return true;
    return false;
}

int bruttovinstFranUtfordSpelomgang(){
//
    int t1=tarningsvarde(), t2=tarningsvarde(), t3=tarningsvarde();

    cout<< "Tarningarna blev " << t1 << " " << t2 << " "<< t3 << ". Du vann " << bruttovinst( t1, t2, t3) << " kronor"<< endl;
    return bruttovinst( t1, t2, t3);
}

void spelaTarningsspelet() {
  int kapital = 100;
  while (kapital >= 10) {
    cout << "Du har " << kapital << " kronor" << endl;
    bool spelaMera = boolFranUppmaning("Vill du spela mera y/n??");
    if (spelaMera) {
      kapital = kapital - 10 + bruttovinstFranUtfordSpelomgang();
    } else {
      cout << "Fegis!!" << endl;
      break;
    }
  }
}

void spel(){
    spelaTarningsspelet();
}
