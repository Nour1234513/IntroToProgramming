#include <iostream>
using namespace std;



double flyttalFranUppmaning(const char uppmaning[]){
// TODO
    int inmatning=0;
    while (true){
        cout << uppmaning << endl;
        cin >> inmatning;
        if (!cin.fail()){
            return inmatning;

        }
        else {
            cout << "misslyckad läsning" << '\n';
            cin.clear();
            cin.ignore(1000,'\n');

        }
    }
}

void provaFlyttalFranUppmaning() {
  const double bokPris = flyttalFranUppmaning("Hur många kronor kostar boken?");
  const double antalSidor = flyttalFranUppmaning("Hur många sidor har boken?");
  const double procentAttLasa =
      flyttalFranUppmaning("Hur många procent av sidorna kommer du att läsa? ");
  cout << "Du har angett att boken kostar " << bokPris << " kronor"
       << ", och att den har " << antalSidor << " sidor"
       << ", och att du tänker läsa " << procentAttLasa << "%" << endl;
}
void ingangTillKap09Uppmaningar() { provaFlyttalFranUppmaning(); }
