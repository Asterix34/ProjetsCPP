#include <iostream>
using namespace std;
#include <ctime> // Obligatoire
#include <cstdlib> // Obligatoire

string melanger(string mot) {
    string motMelange = "";
    while (mot.size()) {
        // récupère un index aléatoire entre 0 et la taille du mot
        srand(time(0));
        int nbAleatoire = rand() % mot.size();

        char const c = mot.at(nbAleatoire);

        motMelange.push_back(c); // ajoute la lettre dans le mot mélangé
        mot.erase(nbAleatoire, 1); // retire la lettre du mot
    }

    return motMelange;
}
