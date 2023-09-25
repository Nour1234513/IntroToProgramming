#include <iostream>
using namespace std;

int vardeSomPar(const int yatzyhand[]) {
  // TODO
    int resultat=0;
    for (int i=0;i<6;i+=1)
        for(int j=i+1;j<6;j+=1){
            if (yatzyhand[i]==yatzyhand[j]){
                if (yatzyhand[i]*2>resultat)
                    resultat=yatzyhand[i]*2;
        }
}
    return resultat;
}

int vardeSomTvapar(const int yatzyhand[]) {
  // TODO
    int par2=0;
    int par1=0;
    int resultat=par1+par2;
    for (int i=0;i<6;i+=1){
        for(int j=i+1;j<6;j+=1){
            if (yatzyhand[i]==yatzyhand[j]){
                    if ((par1==0)||(par1==yatzyhand[i]))
                        par1=yatzyhand[i];
                    else par2=yatzyhand[i];

            }




}
}
    if (par1>0&&par2>0){
        return 2*(par1+par2);}
    else return 0;
}


int vardeSomTriss(const int yatzyhand[]) {
  // TODO
    int tris=0;
    int resultat=0;
    for (int i=0;i<6;i+=1)
        for(int j=i+1;j<6;j+=1){
            if (yatzyhand[i]==yatzyhand[j]){
                resultat=yatzyhand[i];
                tris+=1;
        }
}
if (tris==3)
    return 3*resultat;
else return 0;
}

int vardeSomLitenstege(const int yatzyhand[]) {
  // TODO
    for(int i=0;i<6;i+=1){
        if (yatzyhand[i]>=1&&yatzyhand[i]<=5)
            return 0;
    }
}

bool arOk(bool testresultat) {
  if (!testresultat)
    cout << "BUG BUG Programmet innehåller en BUG " << endl;
  else
    cout << "ok" << endl;
  return testresultat;
}

void testaYatzyvarden() {
  cout << "testar Yatzyvärden" << endl;
  int hand1[5]{3, 6, 4, 2, 4};
  int hand2[5]{3, 2, 4, 2, 3};
  int hand3[5]{3, 4, 4, 2, 4};
  int hand4[5]{3, 5, 4, 2, 1};
  bool ok =
      arOk(vardeSomPar(hand1) == 8) &&
      arOk(vardeSomPar(hand2) == 6) &&
      arOk(vardeSomPar(hand3) == 8) &&
      arOk(vardeSomPar(hand4) == 0) &&
      arOk(vardeSomTvapar(hand1) == 0) &&
      arOk(vardeSomTvapar(hand2) == 10) &&
      arOk(vardeSomTvapar(hand3) == 0) &&
      arOk(vardeSomTvapar(hand4) == 0) &&
      arOk(vardeSomTriss(hand1) == 0) &&
      arOk(vardeSomTriss(hand2) == 0) &&
      arOk(vardeSomTriss(hand3) == 12) &&
      arOk(vardeSomTriss(hand4) == 0) &&
      arOk(vardeSomLitenstege(hand1) == 0) &&
      arOk(vardeSomLitenstege(hand2) == 0) &&
      arOk(vardeSomLitenstege(hand3) == 0) &&
      arOk(vardeSomLitenstege(hand4) == 15);
  if (ok)
    cout << "testen lyckades" << endl;
  else
    cout << "testen MISSLYCKADES" << endl;
}
void ingangTillYatzi() {
    testaYatzyvarden();
}
