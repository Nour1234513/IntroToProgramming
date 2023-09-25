#include <cassert>
#include <iostream>
#include <string>

using namespace std;


bool boolFranUppmaning1(const char uppmaning[]){
// TODO
    //while(true){
    char svar;
    cout << uppmaning << endl;
    cin>> svar;
    if (svar=='j'||svar=='J')
        return true;
    if (svar=='n'||svar=='N')
        return false;
   // else continue;
    //}
    return false;

}

string spelbord(int antalStickor){
// TODO
    //cout << antalStickor << endl;
    string s;
    for(int xi=0;xi<antalStickor;xi+=1){
        if (xi%5==0)
            s.push_back(' ');
        s.push_back('|');
    }
    return s;
}

int spelarensDrag(int antalStickor){
assert(antalStickor>=1);
// TODO
    int stickor;
    cout << "Antal att plocka?: " << endl;
    cin >> stickor;
    if ((stickor>=1)&&(stickor<=2))
        return stickor;
    else { cout << "försök ingen ett tall mellan 1 och 2"<< endl;
        spelarensDrag(antalStickor);
    }

}

int datornsDrag(int antalStickor){
assert(antalStickor>=1);
// TODO
    if (antalStickor==2)
        return 2;
    else if (antalStickor==1)
        return 1;
    else {
        if (antalStickor%2==0)
            return 1;
        else return 2;
    }
}



void spelaStickspelet() {
  while (true) {
    bool spela = boolFranUppmaning1("Vill du spela sticka?");
    if (!spela) {
      cout << "Fegis!" << endl;
      break;
    }
    int antalStickor = 20 + rand() % 8;
    cout << spelbord(antalStickor) << endl;
    while (antalStickor > 0) {
      antalStickor -= spelarensDrag(antalStickor);
      cout << spelbord(antalStickor) << endl;
      if (antalStickor == 0) {
        cout << "Du vann på tur!" << endl;
        break;
      }
      int drag = datornsDrag(antalStickor);
      cout << "Datorn tar " << drag << endl;
      antalStickor -= drag;
      cout << spelbord(antalStickor) << endl;
      if (antalStickor == 0) {
        cout << "Datorn vann, looser!" << endl;
        break;
      }
    }
  }
}
void spel2(){
    spelaStickspelet();
}
