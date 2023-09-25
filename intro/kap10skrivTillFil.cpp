#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <sstream>


using namespace std;


void skapaFilenHejFilsystem(){
// TODO
    string filnamn="../hello.txt";
    ofstream utstorm;
    utstorm.open(filnamn);
    for(int i=0;i<10;i+=1){
        utstorm << i << "hej" << endl;

   }
    utstorm.close();
}







void skapaSvgFil(){
    string svg="../ritatest.svg";
    ofstream ut;
    ut.open(svg);
    ut << "<svg viewBox=\"-110 -110 220 220\"" << endl;


}


void ingangTillSkrivaFil(){
//skapaFilenHejFilsystem();
    skapaSvgFil();
}


vector<string> envektor(){
        istringstream t("denna  dag  ett  liv   !");
        vector<string> re;
        string ord;
        while (t>>ord)
            re.push_back(ord);
        return re;
    }
void test1111(){
    vector<string> v=envektor();

    string s=v[3];
    cout << v.size() << " " << s << endl;


}


