#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cassert>

using namespace std;
using namespace this_thread;
using namespace chrono;

void testarMinaKunskaper(){

assert( 2.5 + 3 == 5.5 );
assert( 5/2 == 2 );
assert( 1.0/2 * 10 == 5 );
assert( 1/2 * 10 == 0);
assert( (3 | 16) == 19 );
assert( (3 | 15) == 15 );
assert( (3 & 16) == 0 );
assert( (3 & 15) == 3 );
assert( 3 << 2 == 12 );
}


bool ungefarLika(double, double);

bool ungefarLika1(double x, double y){ // BUG

return x-y < 0.001;
}

void automattestaUngefarLika(){
    cout << "automattestaUngefarLika" << endl;
assert( ungefarLika1( 2, 2.000005 ) );
assert( ungefarLika1( 2-0.000005, 2 ) );
assert( !ungefarLika1(2, 3) );
assert( !ungefarLika1(3,2) );
}

void hejTal(int x) { cout << "Hej heltal " << x << endl; }
void hejTal(double x) { cout << "Hej på dig flyttal " << x << endl; }
void hejTal(double x, double y) {
  cout << "Hej på er flyttal " << x << ", " << y << endl;
}
void hejTal(int x, int y, int z) {
  cout << "Hej alla tre heltal " << x << ", " << y << "," << z << endl;
}
void testaHejTal() {
  hejTal(2);
  hejTal(2.1);
  hejTal(2, 3);
  hejTal(2.2, 3.1, 4.3);
  hejTal(2.0, 3.0, 4.0);
  double två = 2;
  hejTal(två, 3.0, 4.0);
}
