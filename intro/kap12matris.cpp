#include <iomanip>
#include <iostream>
using namespace std;

void skrivUtMatrisdata(double **ppElement, int antalRader, int antalKolumner) {
  // TODO
    cout << antalRader << " x " << antalKolumner << " Matris." << endl;
    for (int r = 0; r < antalRader; ++r){
      for (int k = 0; k < antalKolumner; ++k) {
        cout << (ppElement[r][k]) << '\t' ;
      }
    cout << endl;
    }
    cout << endl;
}

void nollstallMatrisdata(double **ppElement, int antalRader,
                         int antalKolumner) {
  for (int r = 0; r < antalRader; ++r)
    for (int k = 0; k < antalKolumner; ++k) {
      ppElement[r][k] = 0;
    }
}
double **allokeradMatris(int antalRader, int antalKolumner) {
  double **ppElement = new double *[antalRader];
  for (int rad = 0; rad < antalRader; ++rad) {
    ppElement[rad] = new double[antalKolumner];
  }
  nollstallMatrisdata(ppElement, antalRader, antalKolumner);
  return ppElement;
}

void frigorMatrisdata(double **ppElement, int antalRader) {
  // TODO
    for(int r=0;r<antalRader;++r){
        delete ppElement[r];
    }

}

double **allokeradEnhetsmatris(int n) {
  // TODo

    double **enhet = allokeradMatris(n,n);
    for (int r = 0; r < n; ++r)
      for (int k = 0; k < n; ++k) {
          //double *x=&(ppElement[r][k]);
        //cout << *x << '\t';
          if (k==r)
              enhet[k][r] =1;
          else continue;

      }
return enhet;
}



void provkorMatrisdatafunktioner() {
  cout << "Provkör matrisdatafunktioner" << endl;
  double **ppData = allokeradMatris(4, 5);
  skrivUtMatrisdata(ppData, 4, 5);
  double **ppEnhetsdata = allokeradEnhetsmatris(3);
  skrivUtMatrisdata(ppEnhetsdata, 3, 3);
  frigorMatrisdata(ppData, 4);
  frigorMatrisdata(ppEnhetsdata, 3);

  cout << "matrisdatafunktionerna provkörda" << endl;
}







void ingangTillMatrisdata() {

    provkorMatrisdatafunktioner();

}
