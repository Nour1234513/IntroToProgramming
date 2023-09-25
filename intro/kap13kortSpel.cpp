
enum class kortfarg {hjärter,ruter, spader,klöver};
enum class kortvalor{ess, två, tre,fyra, fem ,sex,tju,åtta,nio , tio, knekt, dam, kung};

struct Spelkort {

    kortfarg farg;
    kortvalor valor;
};



Spelkort spelkortFranData(kortfarg farg, kortvalor valor){
   Spelkort kort;
   kort.farg = farg;
   kort.valor= valor;
   return kort;
};


