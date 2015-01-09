#include <iostream>
#include <fstream>
#include <ctime> // Obligatoire
#include <cstdlib> // Obligatoire
#include <vector>

using namespace std;

#include "motMystere.h"

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

string tirer() {
    string* mots = getMots();

    srand(time(0));
    int nbAleatoire = rand() % sizeof(mots);

    return mots[nbAleatoire];
}

void creer() {
    ofstream monFlux("C:/Users/HumanBooster/Desktop/mots.txt");

    monFlux << "MONSIEUR" << endl;
    monFlux << "XYLOPHONE" << endl;
    monFlux << "ANALPHABETE" << endl;
    monFlux << "ORDINATEUR" << endl;
    monFlux << "DEVELOPPEUR" << endl;
    monFlux << "PRESIDENT" << endl;
}

string* getMots() {
    ifstream monFlux("C:/Users/HumanBooster/Desktop/mots.txt");

    vector<string> mots;

    string mot;

    while (getline(monFlux, mot)) {
        mots.push_back(mot);
    }

    return &mots[0];
}
