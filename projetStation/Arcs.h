#ifndef ARCS_H_INCLUDED
#define ARCS_H_INCLUDED



#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <queue>
#include <utility>
#include <limits>

class Arcs
{
    private:
        int m_numTrajet;
        std::string m_nomTrajet;
        std::string m_type;
        float m_duree;
        int m_flot;
        int m_capacita;
        std::pair<int,int> m_SommetAdjacent;
    public:
        Arcs(int num,std::string nom,std::string type,int depart,int arrive,int altd, int alta,int capa);
        ~Arcs();

        float getDuree();
        int getNbr();

        int getDepart();
        int getArrivee();

        int getCapacite();
        int getFlot();
        void setFlot(int flot);

        std::string getNomTrajet();
        std::string getType();
};

#endif // ARCS_H_INCLUDED
