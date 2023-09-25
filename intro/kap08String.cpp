#include <string>
#include <cassert>
#include <iostream>

using namespace std;
bool arVokal(char ch);
bool arKonsonant(char ch);


void ingangTillKap08String(){
cout << "ingangTillKap08String." << endl;


}

void demoAvString() {
  string str1 = "hej";
  string str2 = "hej";
  if (str1 == str2)
    cout << "Hurra, man kan jämföra strängar utan att anropa ärLika!" << endl;
  else
    cout << "Rackans, det går fortfarande inte att jämföra strängar!" << endl;
  if (str1 == "hej")
    cout << "Det gick att jämföra med en litteral!" << endl;
  else
    cout << "Det gick dock inte att jämföra med en litteral." << endl;
  cout << "Strängen " << str1 << " har " << str1.size() << " tecken." << endl;
  str2 += " då!";
  cout << str2 << endl;
}

string versalstrang(const string str) {  
string str2=str;

    for(int x=0;str[x]!=0;x+=1){
        if (isalpha(str[x])){
             str2[x]=(toupper(str[x]));
            }
       else continue;
    }
return str2;
}



void automattestaVersalstrang() {
  cout << "testar versalStrang" << endl;
  assert(versalstrang("abc ABC 123 .,- xyz") == "ABC ABC 123 .,- XYZ");
  cout << "test av versalStrang lyckades!" << endl;
}

string tolower(string str){
    for (int x=0;str[x]!=0;x+=1){
        if (isalpha(str[x]))
            str[x]=tolower(str[x]);
        else continue;

    }
    return str;
}


string rubrikstrang(const string str) {
  // TODO
    string str2=tolower(str);
    str2[0]=toupper(str[0]);
    for(int x=1;str2[x]!=0;x+=1){
        if (isspace(str[x]))
            str2[x+1]=toupper(str2[x+1]);
        else continue;
    }

    return str2;
}




void automattestaRubrikstrang() {
  cout << "testar rubrikstrang" << endl;
  assert(rubrikstrang("ha en BRA DAG!") == "Ha En Bra Dag!");
  assert(rubrikstrang("") == "");
  cout << "test av rubrikstrang lyckades!" << endl;
}

string trimmad(const string str) {
  // TODO
    string str2;
    for(int x=0;str[x]!=0;x+=1){
        if (isalpha(str[x]))
            str2.push_back(str[x]);
        else if (isspace(str[x])){
            if(isalpha(str[x-1])&&isalpha(str[x+1]))
                str2.push_back(str[x]);
            else continue;}
        else str2.push_back(str[x]);


    }
    return str2;
}



void automattestaTrimmad() {

  cout << "testar trimmad" << endl;
  assert(trimmad(" Ha en bra dag! ") == "Ha en bra dag!");
  assert(trimmad(" A  B C ") == "A B C");
  assert(trimmad(" ") == "");
  assert(trimmad("") == "");
  assert(trimmad("abc") == "abc");
  cout << "testen av trimmad lyckades!" << endl;
}



string iSprik(const string str){
// TODO
    string str1;
    for(int x=0;str[x]!=0;x+=1){
        if (arVokal(str[x])){
            if(isupper(str[x]))
                str1.push_back('I');
            else
            str1.push_back('i');}
        else{
            str1.push_back(str[x]);
        }
    }
    return str1;
}


void automattestaISprik(){

cout << "testar i-sprik" << endl;
assert( iSprik("abcdefghijklmnopqrstuvxyz,.!? ") == "ibcdifghijklmnipqrstivxiz,.!? " );
assert( iSprik("ABCDEFGHIJKLMNOPQRSTUVXYZ") == "IBCDIFGHIJKLMNIPQRSTIVXIZ" );
cout << "test av i-sprik lyckades!" << endl;
}

string rovarsprak(const string str) {
  // TODO
    string str1;
    for(int x=0;str[x]!=0;x+=1){
       if(arKonsonant(str[x])){
           str1.push_back(str[x]);
           str1.push_back('o');
           str1.push_back(str[x]);
             }
       else
           str1.push_back(str[x]);

    }
    return str1;
}

void automattestaRovarsprak() {
  cout << "testar rovarsprok" << endl;
  assert(rovarsprak("abcdefghijklmnopqrstuvxyz,.!?") ==
         "abobcocdodefofgoghohijojkoklolmomnonopopqoqrorsostotuvovxoxyzoz,.!?");
  cout << "test av rovarsprok lyckades!" << endl;
}

bool arRovarsprak(const string str ){
// TODO
    int x=0;
    while (str[x]!=0){
        if(arKonsonant(str[x])){

            if(!(str[x]==str[x+2]&&(str[x+1]=='o'))){

                return false;}

            else{ x+=3;
                continue;}
        }
       else{ x+=1;
        continue;}
    }
    return true;
}

void automattestaArRovarsprak() {

  cout << "autotest är rövarspråk" << endl;
  assert(arRovarsprak("popror"));
  assert(arRovarsprak("poprorogogroramommomerorinongog aror kokulol"));
  assert(!arRovarsprak("poproror"));
  cout << "test av är rövarspråk lyckades" << endl;
}

string klartextFranRovarsprak(const string str) {
  assert(arRovarsprak(str)); // precondition
  // TOD0O
  int x=0;
  string str1;
  while (str[x]!=0){
      if (arKonsonant(str[x])){
          str1+=(str[x]);
          x+=3;
      }
      else{ str1+=str[x];
              x+=1;}

  }
  return str1;
}


void automattestaKlartextFranRovarsprak() {
  cout << "autotest klartextFranRovarsprak" << endl;
  assert(
      klartextFranRovarsprak("poprorogogroramommomerorinongog aror kokulol") ==
      "programmering ar kul");
  cout << "test av klartextFranRovarsprak lyckades" << endl;
}
