#include <cmath>
#include <iostream>
#include <cassert>
using namespace std;

void experimenteraMedChar(){
cout << "experimenteraMedChar....." << endl;
char ch1 = 'R';
char ch2 = 82;
int i1 = 'R';
int i2 = 82;
cout << ch1 << endl;
cout << ch2 << endl;
cout << i1 << endl;

cout << i2 << endl;
}


void ingangTillKap08CStrangar(){
    char strang0[4]{72, 101, 106, 0};
    char strang1[4]{'H', 'e', 'j', 0};

    char strang2[]{'H', 'e', 'j', 0};
    char strang3[] = "Hej";
    char strang4[]{"Hej"};
    cout << strang0 << endl;
    cout << strang1 << endl;
    cout << strang2 << endl;
    cout << strang3 << endl;
    cout << strang4 << endl;
    cout << "Hej" << endl;
    }


void demoAvUtf8(){
cout << "demoAvUtf8............." << endl;
char strang[] = "ABC 012 ÅÄÖ";
cout << strang << endl;
for (int i=0; strang[i]!=0 ; ++i){
int heltal = strang[i];
cout << heltal << " ";
}
cout << endl;
}

void demoAvStrangjamforelse() {
  cout << "demo av strängJämförelse............" << endl;
  const char str1[] = "hej";
  const char str2[] = "hej";
  if (str1 == str2)
    cout << "Ha, det står fel i kompendiet!" << endl;
  else
    cout << "Ok, strängarna är olika." << endl;
}

bool arLika(const char str1[], const char str2[]){
// TODO
    int x=0;
    while ((str1[x]||str2[x])!=0){
        int y=str1[x];
        int y2=str2[x];
        if(y==y2){
            x+=1;
            continue;}
        else return false;
    }


    return true;
}







  /*  for (int x=0;1;x+=1){
        int y=str1[x];
        int y2=str2[x];
        if((str1[x]||str2[x])==0)
            break;
        else{
        if(str1[y] == str2[y2])
            continue;
        else return false;
    }
    }

    return true;
}*/

void automattestaArLika() {
  cout << "automattestar arLika" << endl;
  assert(arLika("abcd", "abcd"));
  assert(!arLika("abcd", "abcX"));
  assert(!arLika("abcd", "Xbcd"));
  assert(!arLika("abcd e", "abcd"));
  assert(!arLika("abcd", "abcd e"));
  cout << "testen av arLika lyckades!" << endl;
}

void provarArLika(const char str1[], const char str2[]) {
  bool lika = arLika(str1, str2);
  if (lika)
    cout << str1 << " och " << str2 << " är lika" << endl;
  else
    cout << str1 << " och " << str2 << " är OLIKA" << endl;
}
void provaFleraArLika() {
  provarArLika("hej hopp", "hej hopp");
  provarArLika("hej hopp", "hej hoppitopptop");
  provarArLika("hej hoppitopptop", "hej hopp");
}


void konverteraTillVersaler(char str[]) {
  // TODO'

    for(int x=0;str[x]!=0;x+=1){

        if (isalpha (str[x])){

            if(isupper(str[x])){
                continue;}

            else{
                str[x]=toupper(str[x]);
                continue;}


        }
        else{
            continue;}

    }

}


void konverteraTilllilla(char str[]) {
  // TODO'

    for(int x=0;str[x]!=0;x+=1){

        if (isalpha (str[x])){

            if(islower(str[x])){
                continue;}

            else{
                str[x]=tolower(str[x]);
                continue;}


        }
        else{
            continue;}

    }

}


void automattestaKonverteraTillVersaler() {
  cout << "automattestar konverteraTillVersaler" << endl;
  char str1[] = "abc ABC 123 .,- xyz";

  char str2[] = "ABC ABC 123 .,- XYZ";

  konverteraTillVersaler(str1);
  assert(arLika(str1, str2));
  cout << "testen av konverteraTillVersaler lyckades!" << endl;
}

void konverteraTillRubrik(char str[]) {
  // TODO
    //str[0]=toupper(str[0]);
    konverteraTilllilla(&str[0]);
    str[0]=toupper(str[0]);
    for(int x=1;str[x]!=0;x+=1){
        if (isspace(str[x]))
            str[x+1]=toupper(str[x+1]);
    else
         continue;

}

}

void automattestaKonverteraTillRubrik() {
  cout << "automattestar konverteraTillRubrik" << endl;
  char str1[] = "this is a test";
  char str2[] = "THIS IS A TEST";
  char rubrik[] = "This Is A Test";
  konverteraTillRubrik(str1);
  konverteraTillRubrik(str2);
  assert(arLika(str1, rubrik));
  assert(arLika(str2, rubrik));
  cout << "testen av konverteraTillRubrik lyckades!" << endl;
}


bool arVokal(char ch){
// TODO
    char vokaler[] = "aeiouyAEIOUY";
    int y=ch;
    for(int x=0;vokaler[x]!=0;x+=1){
        int y1=vokaler[x];
        if (y==y1)
            return true;
        else continue;

    }
    return false;
}

bool arKonsonant(char ch){
// TODO
    char konsonanter[] = "bcdfghjklmnpqrstvxzBCDFGHJKLMNPQRSTVXZ";
    int y=ch;
    for(int x=0;konsonanter[x]!=0;x+=1){
        int y1=konsonanter[x];
        if (y==y1)
            return true;
        else continue;
    }
    return false;

}
void automattestaArVokalOchArKonsonant() {
  cout << "automattestar arVokal och arKonsonant" << endl;
  char vokaler[] = "aeiouyAEIOUY";
  char konsonanter[] = "bcdfghjklmnpqrstvxzBCDFGHJKLMNPQRSTVXZ";
  char andraTecken[] = ".,?!; ";
  for (int i = 0; vokaler[i] != 0; ++i)
    assert(arVokal(vokaler[i]));
  for (int i = 0; konsonanter[i] != 0; ++i)
    assert(arKonsonant(konsonanter[i]));
  for (int i = 0; andraTecken[i] != 0; ++i)
    assert(!arVokal(andraTecken[i]) && !arKonsonant(andraTecken[i]));
  cout << "testerna av arVokal/arKonsonant lyckades!" << endl;
}
