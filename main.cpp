#include <iostream>
using namespace std;

#include "motMystere.h"


int main()
{
    // 1.a on demande de saisir un mot
    string mot;

    cout << "Veuillez saisir un mot..." << endl;
    cin >> mot;

    // 1.b on melange le mot
    string motMelange = melanger(mot);

    // 2.b on demande au second joueur de trouver le mot jusqu'à ce qu'il le trouve
    string motSaisi = "";
    do {
        cout << "Essayez de trouver le bon mot... " << motMelange << endl;
        cin >> motSaisi;

    } while (motSaisi!=mot);

    // 3. on affiche la victoire
    cout << "Bravo vous avez trouvé le bon mot !" << endl;


    return 0;
}
