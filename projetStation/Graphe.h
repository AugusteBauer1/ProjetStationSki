#ifndef GRAPHE_H_INCLUDED
#define GRAPHE_H_INCLUDED

#include "Sommet.h"
#include "Arcs.h"



#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <queue>
#include <utility>
#include <limits>

class Graphe
{
    private:
        std::vector<Sommet *> m_listeSommet;
        std::vector<Arcs *> m_listeArcs;
        int m_ordre,m_taille;
    public:
        Graphe(std::string nom,std::vector<bool> choix);
        ~Graphe();

        void afficherTrajet();
        void afficherVoisins();
        std::vector<std::pair<int,float>> dijkstra(int depart);
        void afficherPredDijkstra(std::vector<std::pair<int,float>> pred,int fin);
        std::vector<int> BFS(int depart);
        void afficherPredBFS(std::vector<int> pred);
};

#endif // GRAPHE_H_INCLUDED
