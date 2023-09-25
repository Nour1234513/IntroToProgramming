#include <iomanip>
#include <thread>
#include <chrono>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;
using namespace this_thread;
using namespace chrono;

void fyllMedSlumptal(int arr[], int storlek, int minsta, int storsta);
bool arSorterad(const int arr[], int storlek);


void sorteraMedSelectionsort(int arr[], int antal) {
  // TODO
    int swap=0;
    int minst=100;
    int index=0;
    for(int j=0;j<antal;j+=1) {
        for(int i=j;i<antal;i+=1){
            if (arr[i]<=minst){
                minst=arr[i];
                index=i;
            }
            else continue;
        }
        swap=arr[j];
        arr[j]=arr[index];
        arr[index]=swap;
        minst=100;
    }
    for(int g=0;g<antal;g+=1)
        cout << arr[g] << " ";
    cout << endl;
}

void sorteraMedBubbelsort(int arr[], int antal) {
  // TODO
    int swap=0;
    for(int j=0;j<20;j+=1){
        for(int i=0;i<antal;i+=1){
            if(arr[i]>arr[i+1]){
                swap=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=swap;
            }
            else continue;
    }

}

    for(int g=0;g<antal;g+=1){
        cout << arr[g]<< " ";
    }
    cout << endl;
}







void provaSortera(bool anvandSelectionSort) {
  const int storlek = 20;
  int arr[storlek];
  fyllMedSlumptal(arr, storlek, 0, 100);

  for(int g=0;g<20;g+=1){
      cout << arr[g]<< " ";
  }
  cout<<endl;
  if (arSorterad(arr, storlek))
    cout << "BUG Det verkar som om fyllMedSlumptal inte fungerar" << endl;
  if (anvandSelectionSort)
    sorteraMedSelectionsort(arr, storlek);
  else
    sorteraMedBubbelsort(arr, storlek);
  if (arSorterad(arr, storlek))

    cout << "Det verkar som om select-sorteringen fungerade" << endl;
  else
    cout << "BUG i select sorteringsalgoritmen" << endl;
}
void ingangTillSortera() {
  //provaSortera(true);
   provaSortera(false);
}
