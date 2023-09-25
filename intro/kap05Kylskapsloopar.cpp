#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include <cmath>
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;













void kylskapMedWhileTrue(){
cout << "kylskap med while true" << endl;
int tempratur=0;

while (true){

// to do
    cout << "tempratur" << endl;
    cin >> tempratur;
    if(tempratur<(-273))
        break;

    else if (tempratur<=2)
        cout <<"for kallt" << endl;
    else if (tempratur>=8)
        cout << "for varmt" << endl;
    else
        cout <<"det ar lagom"<<endl;

}
cout << "lämnar kylskåpsloop." << endl;
}

//void temperatur(){
  //  double temperatur=0;
   // cout<<"temperatur" << endl;
   // cin>>temperatur;



/*
void kylskapMedWhileVilkor()
{
    cout << "kylsap med while vilkor: " << endl;

    double temp = 0;
    while (temp > -273)
    {
        cout << "Enter a temp: ";
        cin >> temp;
        cout << endl;

        if (2 <= temp && temp <= 8)
            cout << "Lagom" << endl << endl;
        else if (-273 < temp && temp < 2)
            cout << "For kallt" << endl << endl;
        else if (temp > 8)
            cout << "For varmt" << endl;

    }
 cout << "lämnar kylskåpsloop." << endl;
}
*/

void kylskapMedWhileVilkor()
{
    cout << "kylsap med while vilkor: " << endl;

    double temp = 0;
    while (temp > -273)
    {
        cout << "Enter a temp: ";
        cin >> temp;
        cout << endl;



        if (temp<=2 && temp>-273)
            cout <<"for kallt" << endl;
        else if (temp>=8)
            cout << "for varmt" << endl;
        else if (temp<=8 && temp>2)
            cout <<"det ar lagom"<<endl;
    }
 cout << "lämnar kylskåpsloop." << endl;
}
