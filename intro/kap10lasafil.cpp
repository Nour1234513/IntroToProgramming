#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <assert.h>
using namespace std;



vector<string> ordlistan(){
// TODO
string fill="../3000ord.txt";
vector<string> lista;
ifstream fillen(fill);
while (!fillen.fail()){
    string ettOrd;
    fillen >> ettOrd;
    if (!fillen.fail())
        lista.push_back(ettOrd);
}
return lista;
}

void testaOrdlistan(){
// TODO
    vector <string> lista = ordlistan();
    for (unsigned long long int i=0;i< ordlistan().size();i+=1 ){
        cout << lista[i] << endl;
}
    cout << ordlistan().size() <<'\n';
}


void ingangTillLasafil(){
testaOrdlistan();
}

string toupper(string ord){
    string uppercase;
    for(unsigned int xi=0;xi<ord.size();xi+=1){
        if (isalpha(ord[xi]))
            uppercase.push_back(toupper(ord[xi]));
        else uppercase.push_back(ord[xi]);

    }
    return uppercase;
}

bool matcharFragenyckel(string ord, string nyckel) {
  // TODO
        if(ord.size()!=nyckel.size())
            return false;
        for(unsigned int x=0;x<ord.size();x+=1){
            if(isalpha(nyckel[x])){
                if (toupper(nyckel[x])==toupper(ord[x]));
                else return false;
            }
            else continue;
        }
    return true;
}



void automattestaMatcharFragenyckel() {

  cout << "testar matcharFragenyckel ..." << endl;
  assert(matcharFragenyckel("xaby", "?ab?"));
  assert(!matcharFragenyckel("xaby", "?abz"));
  assert(!matcharFragenyckel("xaby", "?abyx"));
  assert(!matcharFragenyckel("xabyx", "?aby"));
  cout << "automattestaMatcharFragenyckel lyckades" << endl;
}

void skrivMatchningar(const vector<string> &allaOrd, string nyckel) {
  for (unsigned int i = 0; i < allaOrd.size(); ++i) {
    if (matcharFragenyckel(allaOrd[i], nyckel))
      cout << allaOrd[i] << endl;
  }
}
void ordMatch() {
  vector<string> allaOrd = ordlistan();
  cout << "Välkommen till ordmatch!" << endl;
  while (true) {
    cout << "NYCKEL:";
    string nyckel;
    getline(cin, nyckel);
    if (nyckel == "")
      continue;
    if (nyckel == "avbryt")
      break;
    skrivMatchningar(allaOrd, nyckel);
  }
  cout << "(ordmatchningen avbröts)" << endl;
}


bool matcharVildnyckel(string ord, string nyckel){
// TODO
    int x=0;
    for(int x=0;true;x+=1){

        if(nyckel[x]==0)
            return false;
        if (isalpha(nyckel[x]))
            if (ord[x] != nyckel[x])
                return false;
        if(nyckel[x]=='?')
            continue;
        if (nyckel[x]=='*')
            break;


    }

    int xi=1;
    while (true) {
        if (isalpha(nyckel[(nyckel.size()-xi)]))
        if (ord[(ord.size()-xi)] != nyckel[(nyckel.size()-xi)])
          return false;
      if(nyckel[(nyckel.size()-xi)]=='?')
          continue;
      if (nyckel[(nyckel.size()-xi)]=='*')
          break;
      xi+=1;
    }

    return true;

}

void automattestaMatcharVildnyckel(){
assert( matcharVildnyckel("abcdefgh", "a?c*h") );
assert( !matcharVildnyckel("abcdefgh", "a?c*x") );
assert( !matcharVildnyckel("abcdefgh", "abc?") );
assert( matcharVildnyckel("yourself","you?s*f"));
cout << "automattestaMatcharVildnyckel lyckades" << endl;
}


void skrivMatchningar1(const vector<string> &allaOrd, string nyckel) {
  for (unsigned int i = 0; i < allaOrd.size(); ++i) {
    if (matcharVildnyckel(allaOrd[i], nyckel))
      cout << allaOrd[i] << endl;
  }
}
void ordMatch1() {
  vector<string> allaOrd = ordlistan();
  cout << "Välkommen till ordmatch!" << endl;
  while (true) {
    cout << "NYCKEL:";
    string nyckel;
    getline(cin, nyckel);
    if (nyckel == "")
      continue;
    if (nyckel == "avbryt")
      break;
    skrivMatchningar1(allaOrd, nyckel);
  }
  cout << "(ordmatchningen avbröts)" << endl;
}

void test10(string nyckel){
    vector <string> ord= ordlistan();
    unsigned int x=0;
    while (x<ord.size()){
        if (matcharVildnyckel(ord[x],nyckel ))
            cout<< ord[x]<<endl;

        x+=1;
    }
cout << "här"<<endl;
}
