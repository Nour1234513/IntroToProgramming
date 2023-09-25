#include <iostream>
#include <string>
using namespace std;

void ingangTillKap09ExperimentMedCin(){
cout << "ingangTillKap09ExperimentMedCin." << endl;
string strängvariabel;
cin >> strängvariabel;
cout << strängvariabel << endl;




}
void testaCinString(){
    cout << "testacinstring"<<endl;
    cout << "skriv en text sräng:";
    while (true){

        string strang=" ";
        cin >> strang;
        if (strang =="exit")
            break;
        cout << "Du skrev: " << strang<<endl;
    }
}

void skrivNagraAsciiTecken() {
  cout << "skrivNagraAsciiTecken" << endl;
  const char tabulator = 9;
  for (int asciital = 'a' - 5; asciital <= 'z' + 5; ++asciital) {
    char tecken = asciital;
    cout << asciital << '\t' << tecken << endl;
  }
}


void testaCinIntMedFalhantering(){
    cout << "testa cin med felhantering"<< endl;
    while (true){
        cout << "skriv ett heltal: ";
        int heltal=0;
        cin >> heltal;
        if(!cin.fail()){
            cout << "du skrev: " << heltal << endl;
        }
        else {
            cout << "(misslyckad läsning)" << endl;
            cin.clear();
            cin.ignore(1000,'\n');
        }
    }
}
