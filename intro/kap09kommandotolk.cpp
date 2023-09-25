#include <string>
#include <iostream>
#include <sstream>
#include <fstream>


using namespace std;

bool utforKommando(string str){
    cout << " utfor kommandot: " << str << endl;
    return true;
}


void huvudloop(){
    while (true){
        string textrad;
        cout << ":";
        getline(cin,textrad);
        if (textrad=="")
            continue;
        if (textrad =="exit")
            break;
        bool ok=utforKommando(textrad);
        if (!ok)
            cout << "forstor ej"<< endl;

    }
    cout << endl << "lamnar huvudloopen" << endl;
}



void ingangTillKommandotolk(){
    huvudloop();
}
