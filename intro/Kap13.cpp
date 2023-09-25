#include <assert.h>
#include <iostream>

using namespace std;

struct Biljardboll {
int nummer;
double x;
double y;
double vx;
double vy;
};




Biljardboll biljardboll(int nummer, double x, double y, double vx, double vy){
Biljardboll boll;
boll.nummer = nummer;
boll.x = x;
boll.y = y;
boll.vx = vx;
boll.vy = vy;
return boll;
}

Biljardboll boll1 = biljardboll(1, 5,5, 0,0);
Biljardboll boll2 = biljardboll(2, 5,10, 1.3, -1.5);




struct Vaxel {
int antal500;
int antal200;
int antal100;
int antal20;
int antal10;
int antal5;
int antal1;
};

Vaxel vaxelFranAntal(int a500, int a200, int a100,
                     int a20, int a10, int a5, int a1){
// TODO
    Vaxel Antal;
    Antal.antal500=a500;
    Antal.antal200=a200;
    Antal.antal100=a100;
    Antal.antal20=a20;
    Antal.antal10=a10;
    Antal.antal5=a5;
    Antal.antal1=a1;
    return Antal;
}

// Returnerar ett objekt ifylld med motsvarande belopp
Vaxel vaxelFranBelopp(int belopp){
// TODO
    Vaxel belop;
    int rest=0;
    belop.antal500=belopp/500;
    rest=belopp-(belop.antal500*500);
    belop.antal200=rest/200;
    rest=rest-(belop.antal200*200);
    belop.antal100=rest/100;
    rest=rest-(belop.antal100*100);
    belop.antal20=rest/20;
    rest=rest-(belop.antal20*20);
    belop.antal10=rest/10;
    rest=rest-(belop.antal10*10);
    belop.antal5=rest/5;
    rest=rest-(belop.antal5*5);
    belop.antal1=rest/1;

    return belop;
}
// Returnerar det belopp som motsvarar objektet vaxel
int beloppFranVaxel(Vaxel vaxel){
// TODO
    int belop = 0;
    belop+=vaxel.antal500*500;
    belop+=vaxel.antal200*200;
    belop+=vaxel.antal100*100;
    belop+=vaxel.antal20*20;
    belop+=vaxel.antal10*10;
    belop+=vaxel.antal5*5;
    belop+=vaxel.antal1*1;
    return belop;
}

// Skriver ut växeln på skärmen
void skrivUtVaxel(Vaxel vaxel){
// TODO
    cout<< "Antal 500: "<< vaxel.antal500 << "." << endl;
    cout<< "Antal 200: "<< vaxel.antal200 << "." << endl;
    cout<< "Antal 100: "<< vaxel.antal100 << "." << endl;
    cout<< "Antal 20: "<< vaxel.antal20 << "." << endl;
    cout<< "Antal 10: "<< vaxel.antal10 << "." << endl;
    cout<< "Antal 5: "<< vaxel.antal5 << "." << endl;
    cout<< "Antal 1: "<< vaxel.antal1 << "." << endl;

}

bool arLika(const Vaxel &v1, const Vaxel &v2){
// TODO returnera true omm v1==v2

    if(v1.antal500==v2.antal500
     &&v1.antal200==v2.antal200
     &&v1.antal100==v2.antal100
     &&v1.antal20==v2.antal20
     &&v1.antal10==v2.antal10
     &&v1.antal5==v2.antal5
     &&v1.antal1==v2.antal1)
        return true;
    else return false;

    enum class Vaxel;

}


void skrivUtVaxelV3(int belopp){
Vaxel vaxel = vaxelFranBelopp( belopp );
skrivUtVaxel( vaxel );
}


// Automattestar de funktioner som har med Växel att göra
void automattestaVaxel(){
    cout << "automattestaVaxel körs" << endl;
assert( arLika(vaxelFranBelopp(947), vaxelFranAntal(1,2,0,2,0,1,2)) );
Vaxel vaxel = vaxelFranBelopp(836);
assert( beloppFranVaxel(vaxel) == 836 );
cout << "automattestaVaxel lyckas" << endl;
}
