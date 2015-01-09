#include <iostream>
using namespace std;

#include "motMystere.h"


int main()
{
    // 1.a on demande de saisir un mot
   /* string mot;

    cout << "Veuillez saisir un mot..." << endl;
    cin >> mot;*/

    // 0. On initialise les mots
    creer();

    // 1.b on tire un mot au hasard depuis un fichier
    string mot = tirer();

    // 2. on melange le mot
    string motMelange = melanger(mot);

    // 3. on demande au second joueur de trouver le mot jusqu'à ce qu'il le trouve
    string motSaisi = "";
    do {
        cout << "Essayez de trouver le bon mot... " << motMelange << endl;
        cin >> motSaisi;

    } while (motSaisi!=mot);

    // 4. on affiche la victoire
    cout << "Bravo vous avez trouvé le bon mot !" << endl;


    return 0;
}
