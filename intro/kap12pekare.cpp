#include <iostream>
#include <assert.h>
using namespace std;
void ovaPaPekarnotation() {
  cout << "Övar på pekarnotation" << endl;
  double x = 1.0;
  // TODO: inför variablerna pX ppX och pppX och
  // ändra sedan x till 2 med hjälp av pppX
  double *px=&x;
  double **ppx=&px;
  double ***pppx=&ppx;
  ***pppx=2;

  cout << "x är nu " << x << endl;
  assert(x == 2.0);
  cout << "Övningen lyckades." << endl;
}

void bytVarden(int *pA, int *pB) {
  // TODO
    int gammalv=*pA;
    *pA=*pB;
    *pB=gammalv;
}

void bytVarden(double *pA, double *pB) {
  // TODO
    double gammalv=0;
    gammalv=*pA;
    *pA=*pB;
    *pB=gammalv;

}

void automattestaBytVarden1() {
  cout << "Testar bytVarden" << endl;
  int a = 1;
  int b = 2;
  bytVarden(&a, &b);
  assert(a == 2 && b == 1);
  double x = 1.5;
  double y = 2.5;
  bytVarden(&x, &y);
  assert(x == 2.5 && y == 1.5);
  cout << "Testet av bytVarden lyckades!" << endl;
}

void ingangTillPekare() {
    //ovaPaPekarnotation();'
    automattestaBytVarden1();
}
