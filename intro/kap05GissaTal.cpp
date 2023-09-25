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

// Returnerar tal mellan 0 och n (exklusive n)
int nyttTal(int n){
srand((unsigned int)time(NULL));
return rand() % n +1;
}
int anvandarensGissning(){
// TODO
    int gissning = 0 ;
    cout << "gissa ett tal" << endl;
    cin >> gissning;
    return gissning;

}




void utforEnSpelomgang() {
  cout << "Utför en spelomgång." << endl;
  const int n = 50;
  const int datornsTal = nyttTal(n);

  int antalUtfardaGissningar = 0;
  cout << "Datorn tänker på ett tal mellan noll och " << n << ". Gissa vilket!"
       << endl;
  //cout << datornsTal << endl;
  while (true) {

    antalUtfardaGissningar += 1;
    //cout << antalUtfardaGissningar << endl;
    int gissa = anvandarensGissning();
     sleep_for(milliseconds (500));
    if (gissa==datornsTal)
        break;

    else if ( gissa > datornsTal) {
      cout << "for stort" << endl;
    }

    else if( gissa < datornsTal) {

      cout << "for littet" << endl;
    }
    sleep_for(milliseconds(500));
  }

cout << "du fick rätt"<< endl;
cout << "antal utfarda gissningar: "<< antalUtfardaGissningar << endl;
}



void kap05IngangTillKap05GissaTal() {
  cout << "kap 05 Ingång till gissa tal." << endl;
  utforEnSpelomgang();
}
