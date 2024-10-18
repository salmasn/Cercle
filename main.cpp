#include "Cercle.h"

using namespace std;
#include <iostream>

int main()
{
    // Création d'un Point avec le créateur statique
    Point p1 = Point::createur(2.0, 3.0);

    // Création d'un Cercle avec un rayon de 5 et le Point p1 comme centre
    Cercle c1(5.0, p1);

    // Affichage des informations du cercle
    cout << "Affichage du cercle 1 :" << endl;
    c1.affichage();
    cout << endl;

    // Modification du rayon
    c1.ModifierRayon(7.5);
    cout << "Cercle apres modification du rayon :" << endl;
    c1.affichage();
    cout << endl;

    // Translation du centre du cercle
    c1.TranslaterCenter(10.0, 10.0);
    cout << "Cercle apres translation du centre :" << endl;
    c1.affichage();
    cout << endl;

    // Calcul et affichage de la surface et du périmètre
    cout << "Surface du cercle 1: " << c1.Surface() << endl;
    cout << endl;
    cout << "Perimetre du cercle 1: " << c1.perimetre() << endl;
    cout << endl;

    // Test de la méthode equality
    Point p2 = Point::createur(10.0, 10.0);
    Cercle c2(7.5, p2);
    cout << "teste d'egaliter de cercle 1 et cercle 2 " << (c1.equality(c2) ? "Oui" : "Non") << endl;
    cout << endl;

    // Test de l'opérateur ==
    cout << "teste d'egaliter de cercle 1 et cercle 2  == ? " << (c1 == c2 ? "Oui" : "Non") << endl;
    cout << endl;

    // Test d'appartenance d'un point au cercle
    Point p3 = Point::createur(12.0, 12.0);
    cout << endl;
    cout << "test d'appartenance de point p3 au Cercle 1 ? " << (c1.appartenir(p3) ? "Oui" : "Non") << endl;
    cout << endl;

    return 0;
}
