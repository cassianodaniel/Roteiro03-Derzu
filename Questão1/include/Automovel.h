#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H


//AUTOM�VEIS CONT�M: VELOCIDADE E BUZINA.

class Automovel
{
    public:
        Automovel();
        virtual ~Automovel();
        Velocidade(double);
        Buzina(bool);
        double velocidade;
        bool buzina;
};

#endif // AUTOMOVEL_H
