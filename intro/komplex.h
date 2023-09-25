#ifndef KOMPLEX_H
#define KOMPLEX_H


#include <string>
struct komplex{
    double re;
    double im;
};
komplex komplexFranReIm(double re , double im);
komplex komplexFranReIm(double abslutebelopp , double vinkelIGrader);

double real(komplex c);
double img(komplex c);
double abs (komplex c);
double argGrader(komplex c);

komplex konjugat(komplex c);
komplex summa (komplex a, komplex b);
komplex differens (komplex a, komplex b );
komplex product (komplex a,komplex b);
komplex kvot(komplex a, komplex b);
std::string strangFranKomplex(komplex c);


#endif // KOMPLEX_H
