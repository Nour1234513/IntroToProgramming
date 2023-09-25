
#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include <cmath>
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;

void waiting();

void ingangkap04(){
    cout <<"kap034"<< endl;
}

void provaTilldelning(){
double x = 10;
double y = 20;
x = y;
cout << "x is " << x << " och y is " << y << endl;
y = 100;
cout << "x is " << x << " och y is " << y << endl;
}

void provaInlasningOchUtskrift(){
cout << "Ge ett decimaltal med många siffror efter decimalpunkten:";
double tal = 0;
cin >> tal;
cout << "Du gav talet " << tal << endl;
cout << "Med 2 värdesiffror: " << setprecision(2) << tal << endl;
cout << "Med 2 decimaler: " << fixed << setprecision(2) << tal << endl;
cout << "Du gav talet " << tal << endl;
}

void beraknaBokkostnad(){
// TODO
    double pris = 0;
    double sidor = 0;
    double procent = 0;
    double minuter = 0;
    double totaltAntalTimmar = 0;
    double kostnadPerTimme = 0;
    cout << "Hur manga kronor kostar boken?" << endl;
    cin >> pris;
    cout <<"Hur manga sidor har boken?" << endl;
    cin >> sidor;
    cout <<"Hur manga procent av sidorna kommer du att lasa?" <<endl;
    cin >> procent;
    cout <<"Hur manga minuter tar det att lasa och forsta en sida?"  << endl;
    cin >> minuter;
    totaltAntalTimmar = sidor*procent / 100*minuter/60;
    kostnadPerTimme = pris/totaltAntalTimmar;
    //cout <<"(Tystnad berakning pagar)" << endl;
    sleep_for(milliseconds(3000)) , waiting();;
    waiting();
    cout << "Du beraknas agna boken ca " << fixed << setprecision(1) << totaltAntalTimmar<< " timmar." << endl;
    cout << "Boken beraknas darfor kosta dig " << fixed << setprecision(2) << kostnadPerTimme << " kr/timme." << endl;
}

void waiting(){
    int barwidth=6;
    cout << "Berakning pagar" << endl;
    //int pos= barwidth*5;
            for (int i =0; i < barwidth; ++i){
                if (i < 5) { sleep_for(milliseconds(500));
                    cout << "*";}
                else {
                    cout << endl;
            }

          }
        }



void undersokFlyttalstyper(){
cout << "En float upptar " << 8*sizeof( float ) << " bit." << endl;
cout << "En double upptar " << 8*sizeof( double ) << " bit." << endl;
cout << "En long double upptar " << 8*sizeof( long double ) << " bit." << endl;
}

void provaFlyttal(){
double nollKommaEtt = 0.1;
double nollKommaTreA = 0.3;
double nollKommaTreB = 3*nollKommaEtt;
cout << endl;
cout << "Skriver ut 0.1 och 0.3 och 0.3:" << endl;
cout << nollKommaEtt << endl;
cout << nollKommaTreA << endl;
cout << nollKommaTreB << endl;
cout << setprecision(17) ;
cout << endl;
cout << "Skriver ut 0.1 och 0.3 och 0.3 igen:" << endl;
cout << nollKommaEtt << endl;
cout << nollKommaTreA << endl;
cout << nollKommaTreB << endl;
double noll = 0;
double tva = 2;
cout << endl;
cout << "Division med noll:" << endl;
cout << noll/noll <<endl;
cout << tva/noll <<endl;
cout << -tva/noll <<endl;
cout << endl;
cout << "En liten lek med oändligheten:" << endl;
double oo = tva/noll;
cout << tva * oo << endl;
cout << oo + oo << endl;
cout << oo - oo << endl;
cout << -oo - oo << endl;
cout << endl;
cout << "Division med oändligheten:" << endl;
cout << tva/oo << endl;
cout << -tva/oo << endl;
cout << oo/oo << endl;
cout << -oo/oo << endl;
cout << endl;
}
void undersokFlyttalstyper1(){
cout << "En char upptar " << 8*sizeof( char ) << " bit." << endl;
cout << "En short upptar " << 8*sizeof( short ) << " bit." << endl;
cout << "En int upptar " << 8*sizeof( int ) << " bit." << endl;
cout << "En long int upptar " << 8*sizeof( long int ) << " bit." << endl;
cout << "En long long int upptar " << 8*sizeof( long long int ) << " bit." << endl;
cout << sizeof(long long int) << endl;
}

void provaHeltal(){
int storstaHeltalet = INT_MAX;
int annuStorre = storstaHeltalet + 1;
cout << endl;
cout << "Stora heltal:" << endl;
cout << "störstaHeltalet: " << storstaHeltalet << endl;
cout << "ännuStörre: " << annuStorre << endl;
int noll = 0;
int tva = 2;
int fem = 5;
cout << endl;
cout << "Några heltalsdivisioner:" << endl;
cout << fem/tva <<endl;
cout << tva/fem <<endl;
cout << tva/fem + tva/fem + tva/fem <<endl;
cout << endl;
cout << "Division med noll:" << endl;
cout << noll/noll <<endl;
cout << tva/noll <<endl;
//cout<< INT_MAX << endl;
}
void skrivUtVaxel(int antalKronor){
    int kronorKvarAttBetala = antalKronor;
    int antal500 = kronorKvarAttBetala/500;
    kronorKvarAttBetala -= antal500*500;
    int antal200 = kronorKvarAttBetala/200;
     kronorKvarAttBetala -= antal200*200;
    int antal100 = kronorKvarAttBetala/100;
    kronorKvarAttBetala -= antal100*100;
    int antal20 = kronorKvarAttBetala/20;
    kronorKvarAttBetala -= antal20*20;
    int antal10 = kronorKvarAttBetala/10;
    kronorKvarAttBetala -= antal10*10;
    int antal5 = kronorKvarAttBetala/5;
    kronorKvarAttBetala -= antal5*5;
    int antal2 = kronorKvarAttBetala/2;
    kronorKvarAttBetala -= antal2*2;
    int antal1 = kronorKvarAttBetala/1;
    kronorKvarAttBetala -= antal1*1;

    cout << antalKronor << " kronor ar " << endl;
    cout <<  antal500 << " x 500" << endl;
    cout <<  antal200 << " x 200" << endl;
    cout <<   antal100 << " x 100" << endl;
    cout <<  antal20 << " x 20" << endl;
    cout <<  antal10 << " x 10" << endl;
    cout <<  antal5 << " x 5" << endl;
    cout <<  antal2 << " x 2" << endl;
    cout <<  antal1 << " x 1" << endl;
    }

void skrivUtVaxel1(){
    int antalKronor = 0;
    cout << "mata in beloppet" << endl;
    cin >> antalKronor;
    int kronorKvarAttBetala = antalKronor;
    int antal500 = kronorKvarAttBetala/500;
    kronorKvarAttBetala -= antal500*500;
    int antal200 = kronorKvarAttBetala/200;
     kronorKvarAttBetala -= antal200*200;
    int antal100 = kronorKvarAttBetala/100;
    kronorKvarAttBetala -= antal100*100;
    int antal20 = kronorKvarAttBetala/20;
    kronorKvarAttBetala -= antal20*20;
    int antal10 = kronorKvarAttBetala/10;
    kronorKvarAttBetala -= antal10*10;
    int antal5 = kronorKvarAttBetala/5;
    kronorKvarAttBetala -= antal5*5;
    int antal2 = kronorKvarAttBetala/2;
    kronorKvarAttBetala -= antal2*2;
    int antal1 = kronorKvarAttBetala/1;
    kronorKvarAttBetala -= antal1*1;

    cout << antalKronor << " kronor ar " << endl;
    cout <<  antal500 << " x 500" << endl;
    cout <<  antal200 << " x 200" << endl;
    cout <<   antal100 << " x 100" << endl;
    cout <<  antal20 << " x 20" << endl;
    cout <<  antal10 << " x 10" << endl;
    cout <<  antal5 << " x 5" << endl;
    cout <<  antal2 << " x 2" << endl;
    cout <<  antal1 << " x 1" << endl;
}

void provalitteraler(){
    cout << endl << " testar litteraler" << endl;
    cout << 7/10*500.0 << endl;
    cout << 7/10.0*500 << endl;
    cout << 3/4 + 3/4 + 3/4 + 3/4 << endl;
    cout << 3.0/4 + 3/4 << endl;
    cout << 3.0/4.0 << endl;
}

void provaHexUtSkrift(){

    cout << "provar hex utskrift" << endl;
    int x = 256 + 10;
    cout << "1) " << x << endl;
    cout << "2) " << hex << x << endl;
    cout << "3) " << x << endl;
    cout << "4)" << setw(8) << x  << endl;
    cout << "5)" << setw(8) << setfill('0');
    cout << x << endl;
    cout << "6)" << "x= " << setw(8) << x << " ,x= " << x << endl << endl;
}

void provaRest(){
cout << "Provar restberäkningar." << endl;
cout << 13 % 10 << endl;
cout << 57 % 10 << endl;
cout << 39 % 20 << endl;
cout << -57 % 10 << endl;
cout << endl;
}

void provaHexLitteraler(){
cout << "Provar hexlitteraler." << endl;
unsigned int x = 0xa7;
cout << "x = " << x << endl;
// Hur stor plats tar en int?
int antalByte = sizeof(unsigned int);
int antalHex = 2*antalByte;
int antalBit = 8*antalByte;
cout << "En (unsigned) int upptar " << antalByte
<< " bytes (dvs " << antalHex << " hex-siffror, eller "
<< antalBit << " bit)" << endl;
cout << "x = " << hex << setw( antalHex ) << setfill('_') << x << endl << endl;
cout << dec << setfill(' ');
cout << "int size " << 8*sizeof(int) << endl;
cout << "unsigned int " << 8*sizeof(unsigned int) << endl;
}
