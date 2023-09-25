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

void skrivUtVaxelV2(int antalKronor){
const int antalValorer = 8;
int valorer[antalValorer]{ 500, 200, 100, 20, 10, 5, 2, 1 };
// TODO
    //int kronorrest=0;
    for(int i=0;i<antalValorer;i+=1)
        if ((antalKronor/valorer[i])>0){
            cout << valorer[i] <<": "<< antalKronor/valorer[i]<< endl;
            antalKronor-=valorer[i]*(antalKronor/valorer[i]);
        }
    /*else
            cout << valorer[i]<<": 0" << endl;*/
}

void ingangTillKapXXVaxelpengar(){
cout << "ingangTillKapXXVaxelpengar" << endl;
skrivUtVaxelV2(947);
}
