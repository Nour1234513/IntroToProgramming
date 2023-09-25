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


void skrivCollatzSekvens(long int n){
// TODO
    cout<<n<<endl;
   while (true){

    if ((n%2)!=0){
         n=(3*n)+1;
        cout << n << endl;}

    else{
        n=n/2;
        cout<<n<< endl;}

    if (n==1)
        break;

   }
}
long int collatzMax(long int n){

 long int storst=0;
    while (true){

     if ((n%2)!=0){
          n=(3*n)+1;}

     else{
         n=n/2;
            }

     if (n==1)
         break;

     if (n>=storst)
         storst=n;
}


return storst;



}
long int collatzLangd(long int n){
// TODO
    int langd=1;
    while (true){
    langd+=1;
    if ((n%2)!=0){
         n=(3*n)+1;
        }

    else{
        n=n/2;}


    if (n==1){
        break;}


   }
    return langd;

}
void skrivCollatzStatistik(long int maxN){
// TODO
    int startvardel=0;
    int startvardev=0;
    int maximaltv=0;
    int maximaltl=0;
    for(long int n=1;n<=maxN;n+=1){

        if( collatzMax(n) > maximaltv){
            maximaltv=collatzMax(n);
            startvardev=n;}

        if (collatzLangd(n)>maximaltl){
            maximaltl=collatzLangd(n);
            startvardel=n;}


    }
cout << "maximalt varde =" << maximaltv<< " (for startVarde=" <<startvardev<<")"<<endl;
cout << "maximalt langd =" << maximaltl<< " (for startVarde=" <<startvardel<<")"<<endl;
}
void nagraTestanrop() {
    cout << "Anropar skrivCollatzSekvens(7)" << endl;
    skrivCollatzSekvens(7);
    cout << "collatzMax(7) = " << collatzMax(7) << endl;
    cout << "collatzLangd(7) = " << collatzLangd(7) << endl;
    skrivCollatzStatistik(10000);
    cout << endl;
}
void ingangTillKap05Collatz() {
    cout << "Ingang till Kap05 Collatz." << endl;
    nagraTestanrop();
    cout << endl;
}
