#include <chrono>
#include <iostream>
#include <assert.h>
#include <thread>
using namespace std;

int langd(const char *strang){
    const char *p=strang;
    while(*p!=0){
        p+=1;
    }
    return p-strang;
}

bool arLikaP(const char *str1, const char *str2){
// TODO


    for(;(*str1!=0||*str2!=0);str1+=1,str2+=1){
        if(*str1==0||*str2==0)
            return false;
        if (*str1==*str2)
            continue;
        else return false;
    }
    return true;
}
void konverteraTillVersalerP(char *str){
// TODO
    for(;*str!=0;str+=1){
        *str=toupper(*str);
    }

}

void konverteraTillRubrikP(char *str) {
  // TODO
    *str=toupper(*str);
    for(int x=0;str[x]!=0;x+=1){
        if(*(str+x-1)==' ')
            *(str+x)=toupper(*(str+x));
        else if(x>0)
                *(str+x)=tolower(*(str+x));

    }

}
void automattestaStrangfunktionerP() {
  cout << "automattestar strangfunktionerna-P" << endl;
  assert(arLikaP("abcd", "abcd"));
  assert(!arLikaP("abcd", "abcX"));
  assert(!arLikaP("abcd", "Xbcd"));
  assert(!arLikaP("abcd e", "abcd"));
  assert(!arLikaP("abcd", "abcd e"));
  char strA[] = "abc ABC 123 .,- xyz";
  char strB[] = "ABC ABC 123 .,- XYZ";
  konverteraTillVersalerP(strA);
  assert(arLikaP(strA, strB));
  char str1[] = "this is a test";
  char str2[] = "THIS IS A TEST";
  char rubrik[] = "This Is A Test";
  char tom[] = "";
  konverteraTillRubrikP(str1);
  konverteraTillRubrikP(str2);
  konverteraTillRubrikP(tom);
  assert(arLikaP(str1, rubrik));
  assert(arLikaP(str2, rubrik));
  assert(arLikaP(tom, ""));
  cout << "testen av strangfunktionerna-P lyckades!" << endl;
}

void skrivStrangar(const char **strangar, int antal) {
  // TODO
    for(int xi=0;xi<antal;xi+=1){
        cout << *(strangar+xi) << " ";
    }
}

void provaSkrivStrangar() {
  const int antal = 7;
  const char *dagnamn[antal] = {"måndag", "tisdag", "onsdag", "torsdag",
                                "fredag", "lördag", "söndag"};
  skrivStrangar(dagnamn, antal);
}

void skrivUtArr(const int *pBegin, const int *pEnd) {
  // TODO
     for(;pEnd-pBegin!=0;pBegin+=1){
        cout << *pBegin;
    }
     cout << endl;
}
void fyllMedVarde(int *pBegin, int *pEnd, int varde) {
  // TODO
     for(;pEnd-pBegin!=0;pBegin+=1){
        *pBegin=varde;
    }
}
void fyllMedSlumptal(int *pBegin, int *pEnd, int minst, int störst) {
  // TODO
    for(int *xi=pBegin;xi!=pEnd;xi+=1){
        srand(time(nullptr));
        *xi=((rand()%störst-minst+1)+minst);
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
}

int minst(const int *pBegin, const int *pEnd) {
  assert(pEnd - pBegin > 0);
  // TODO
    int minst;
    for(;pEnd-pBegin!=0;pBegin+=1){
        if(*pBegin<minst)
            minst=*pBegin;
    }
    return minst;
}

int storst(const int *pBegin, const int *pEnd) {
  assert(pEnd - pBegin > 0);
  // TODO
  int storst=0;
   for(;pEnd-pBegin!=0;pBegin+=1){
       if(*pBegin>storst)
           storst=*pBegin;
   }
   return storst;
}

bool arSorterad(const int *pBegin, const int *pEnd) {
  // TODO
     for(;pEnd-pBegin!=0;pBegin+=1){
         if(*pBegin<=*(pBegin+1))
             continue;
         else return false;
     }
     return true;
}

bool innehaller(const int *pBegin, const int *pEnd, int x) {
  // TODO
     for(;pEnd-pBegin!=0;pBegin+=1){
         if(*pBegin== x)
             return true;
         else continue;
     }
     return false;
}

void testaArrayfunktionernaP() {
  cout << "testar arrayfunktionerna -P " << endl;
  const int storlek = 10;
  int arr[storlek];
  fyllMedVarde(&arr[0], &arr[storlek], 5);
  skrivUtArr(&arr[0], &arr[storlek]);
  arr[0] -= 1;
  arr[storlek - 1] += 1;
  assert(arSorterad(&arr[0], &arr[storlek]));
  arr[0] = 6;
  assert(!arSorterad(&arr[0], &arr[storlek]));
  fyllMedSlumptal(&arr[0], &arr[storlek], -2, 2);
  skrivUtArr(&arr[0], &arr[storlek]);
  arr[1] = -3;          // Detta blir det minsta värdet
  arr[storlek - 1] = 3; // Detta blir det största värdet
  int m = minst(&arr[0], &arr[storlek]);
  int s = storst(&arr[0], &arr[storlek]);
  assert(m == -3 && s == 3);
  assert(innehaller(&arr[0], &arr[storlek], 3));
  cout << "testar av arrayfunktionerna -P lyckades" << endl;
}

void bytVarden(int &a, int &b) {
  // TODO
    int &swap=a;



}
void bytVarden(double &a, double &b) {
  // TODO
}
void automattestaBytVarden() {
  int a = 1;
  int b = 2;
  bytVarden(a, b);
  assert(a == 2 && b == 1);
  double x = 1.5;
  double y = 2.5;

  bytVarden(x, y);
  assert(x == 2.5 && y == 1.5);
}

void ingangTillItereraMedPekare() {
  // automattestaStrangfunktionerP();
  //provaSkrivStrangar();
    testaArrayfunktionernaP();
}
