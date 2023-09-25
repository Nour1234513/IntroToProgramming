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

void skrivUtArr(const int arr[], int antal) {
  // TODO
    cout<<"( ";
    for(int i =0;i<antal;i+=1){
       cout << arr[i] << " ";
    }
    cout <<")" << endl;
}

void fyllMedVarde(int arr[], int antal, int varde) {
  // TODO
    for(int i=0;i<antal;i+=1){
    arr[i]=varde;
    }

}

void fyllMedSlumptal(int arr[], int antal, int minsta, int storsta) {
  // TODO

   for(int i=0;i<antal;i+=1)
        arr[i]=((rand() % (storsta + 1 - minsta)) + minsta);
}

int minst(const int arr[], int antal) {
  // TODO
    int minst=0;
    for (int i=0; i<antal;i+=1){
        if (arr[i]<minst)
            minst=arr[i];
    }
    return minst;
}

int storst(const int arr[], int antal) {
  // TODO
    int storst=0;
    for (int i=0; i<antal;i+=1){
        if (arr[i]>storst)
            storst=arr[i];
    }
    return storst;
}

int indexTillMinsta(const int arr[], int antal) {
  //
    int minstvarde=0;
    int index=0;
    for(int i=0; i<antal;i=+1){
        if (arr[i]<minstvarde){
           index=i;
           minstvarde=arr[i];

            }
        }
    return index;

    }


int indexTillStorsta(const int arr[], int antal) {
  // TODO
    int storstvarde=0;
    int index=0;
    for(int i=0; i<antal;i=+1){
        if (arr[i]>storstvarde){
           index=i;
           storstvarde=arr[i];

            }
        }
    return index;


}

bool arSorterad(const int arr[], int antal) {
  // TODO



    for(int i=1; i<antal;i+=1){
        if (arr[i-1]<=arr[i]){
            continue;}
        else return false;
       }
return true;


    /*for(int i=0; i<antal;i+=1){
        if (arr[i]>arr[i+1]){
                return false;}
        else return true;
       }*/
}


bool innehaller(const int arr[], int antal, int x) {
  // TODO
    for(int i=0;i<antal;i+=1){
        if (arr[i]==x){
            return true;}

}
    return false;
}


void fyllMedUnikaSlumptal(int arr[], int antal, int minst, int storst){
// TODO
    arr[0]=0;
    int tal=0;
    int a=0;
while (a<antal){
    tal =(rand() % (storst + 1 - minst)) + minst;
    if (!innehaller(arr,antal,tal)){
        arr[a]=tal;
        a+=1;
    }
    else
        continue;

 }
skrivUtArr(arr,antal);
}


void provaArrayFunktionerna() {
    cout << "provaArrayFunktionerna" << endl;
    const int storlek = 10;
    int arr[storlek];
    fyllMedVarde(arr, storlek, 5);
    skrivUtArr(arr, storlek);
    arr[0] -= 1;
    arr[storlek - 1] += 1;
    if (arSorterad(arr, storlek)){
        cout << "Arrayen är sorterad" << endl;}
    else{
        cout << "BUG BUG arSorterad tycks inte fungera" << endl;}
    arr[0] = 6;
    if (arSorterad(arr, storlek))
        cout << "BUG arSorterad tror att arrayen är sorterad" << endl;
    fyllMedSlumptal(arr, storlek, -2, 2);
    skrivUtArr(arr, storlek);
    arr[1] = -3;          // Detta blir det minsta värdet
    arr[storlek - 1] = 3; // Detta blir det största värdet
    int m = minst(arr, storlek);
    int s = storst(arr, storlek);
    cout << "minst=" << m << " störst=" << s << endl;
    if (m != -3 || s != 3)
        cout << "BUG m eller s !!!!!!!!!!!" << endl;
    if (indexTillMinsta(arr, storlek) != 1)
        cout << "BUG i indexTillMinsta !!!!!!!!!!!" << endl;

    if (indexTillStorsta(arr, storlek) != (storlek - 1))
        cout << "BUG i indexTillStörsta !!!!!!!!!!!" << endl;
    if (!innehaller(arr, storlek, 3))
        cout << "BUG!!!!!!!!!!!" << endl;
}
void ingangTillArrayFunktioner() { provaArrayFunktionerna(); }


void fyllMedPrimtal(int arr[], int antal){
// TODO
    for(int p=0;p<antal;p+=1){
        for (int tal=3;tal<p;tal+=1){
            for(int prim=2;prim<tal;prim+=1){
                if ((tal%prim==0))
                    continue;

                else{
                     arr[p]=tal;

                }
            }
        }
    }

}

void provaFyllMedPrimtal(){
const int antalTal = 50;
int talen[antalTal];
fyllMedPrimtal( talen, antalTal );
skrivUtArr(talen, antalTal);
cout << endl;
}
