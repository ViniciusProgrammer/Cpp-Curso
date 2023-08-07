#ifndef TEMPO_H
#define TEMPO_H

//Arquivo de cabe;calho

class Tempo{
    //Membros privados
    private:
        int hora, minuto, segundo; // membros de dados

    //Membros públicos
    public:
        Tempo(); //Construtor - inicializa os membros de dados
        Tempo(int, int, int);
        void setTempo(int, int, int);
        void imprime();
        ~Tempo() { }; //Destrutot, serve para devolver alguma coisa para o sistema operacional
};

#endif