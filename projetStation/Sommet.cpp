#include "Sommet.h"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <queue>
#include <utility>
#include <limits>

Sommet::Sommet(int num,std::string nom,int alt)
    :m_numSommet(num),m_altitude(alt),m_nom(nom)
{

}

Sommet::~Sommet()
{

}


void Sommet::setAdjacence(Sommet * som,Arcs * arc)
{
    m_adjacent.push_back(std::make_pair(arc,som));
}
