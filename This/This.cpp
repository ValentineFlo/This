// This.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>


// Déclaration 

class Objet; // déclarer la cl
void PrintObjet(Objet* obj); // pas encore défini


class Objet
{
private:
    int x, y;
public:
    Objet(int x, int y)
    {
        // revoie à un pointeur de c donne privee
         /* Objet* e = this;
         e -> x = x;
         e -> y = y;*/
        this->x = x;
        this->y = y;
        PrintObjet(this);
    }

    int GetX() const
    {
        /*const Objet* e = this; */
        // const à gauche = objet constant, pas modif des donnees de l'obj; const a droite du pointeur = pas modif adresse pointeur :
        // ex : e->x = 2; Error
        return this->x;

    }
};

void PrintObjet(Objet* obj)
{
    std::cout << obj->GetX();
}


int main()
{
    Objet OBJ(10, 5);
    Objet* obj = &OBJ;


    return 0;
}

// this pointeur dans une méthode, une classe