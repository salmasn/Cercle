#include "Cercle.h"

using namespace std;
#include <iostream>

int main()
{
    /****************** teste qui assure que le pricipe de l'agregation est respecter *******************************/

    //on affecter meme objet point a deux cercle et quand on supprime cercle c1 le point n'est pas supprimer 
    Point p1 = Point::createur(2.0, 3.0);
    cout << &p1;
    cout << endl;

    cout << "Creation du cercle 1 :" << endl;
    Cercle* C1 = new Cercle(2.3, &p1);
    cout << endl;

    cout << "Creation du cercle 2 :" << endl;
    Cercle* C2 = new Cercle(3.4, &p1);
    cout << endl;

    cout << "Affichage du cercle 1 :" << endl;
    C1->affichage();
    cout << endl;

    cout << "Affichage du cercle 2 :" << endl;
    C2->affichage();
    cout << endl;

    delete C1;


    cout << "Affichage du cercle 2 :" << endl;
    C2->affichage();
    cout << endl;

    cout << "le point p1 reste est son adresse est :" << &p1 << endl;
    cout << endl;
    cout << endl;

    /*
    l'adresse de center du cercle c1 et c2 est elle meme adresse de point p1 donc on a travaille 
    avec l'objet originale point est quand on supprimer l'objet c1 qui utilise le point p1 qui 
    est utilise aussi par c2 le point n'est pas supprimer dans on respect le peincipe d'agregation 
    c'est quoi les cercles ne possedent pas le point p1 il juste l'utilise 
    */






    //************************* tester les methodes de la classe cercle ******************************/
    


    //je peux travailler avec C1 car l'objet associé à C1 dans la partie Heap qui a supprimer le C1 
    // dans stack n'est pas supprimer a ce moment la 
    cout << "Creation du cercle 11 :" << endl;
    Cercle* C11 = new Cercle(2.3, &p1);
    cout << endl;

    cout << "Affichage du cercle 11 :" << endl;
    C11->affichage();
    cout << endl;

    // Modification du rayon
    C11->ModifierRayon(7.5);
    cout << "Cercle apres modification du rayon :" << endl;
    C11->affichage();
    cout << endl;

    // Translation du centre du cercle
    C11->TranslaterCenter(10.0, 10.0);
    cout << "Cercle apres translation du centre :" << endl;
    C11->affichage();
    cout << endl;

    // Calcul et affichage de la surface et du périmètre
    cout << "Surface du cercle 11: " << C11->Surface() << endl;
    cout << endl;
    cout << "Perimetre du cercle 11: " << C11->perimetre() << endl;
    cout << endl;

    cout << "resultat du teste d'egaliter entre  de cercle 11 et cercle 2 est :" << (C11->equality(*C2) ? "Oui appartient" : "Non n'appartient pas ") << endl;
    cout << endl;

    // Test de l'opérateur ==
    cout << "resultat du teste d'egaliter entre de cercle 11 et cercle 2  est : " << (*C11 == *C2 ? "Oui appartient" : "Non n'appartient pas ") << endl;
    cout << endl;

    // Test d'appartenance d'un point au cercle
    Point p3 = Point::createur(12.0, 12.0);
    cout << endl;
    cout << "resultat du test d'appartenance de point p3 au Cercle 11 est  :" << (C11->appartenir(p3) ? "Oui appartient" : "Non n'appartient pas ") << endl;
    cout << endl;

    delete C2;
    delete C11;

    return 0;
}
