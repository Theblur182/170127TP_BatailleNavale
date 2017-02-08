#include <stdio.h>
#include <stdlib.h>
#define TAILLE 3

//08022017 - TP BATAILLE NAVALE - MAXIME DORFFER

/*
BUT : Produire le code en C de la bataille navale, sans tableau � deux dimensions. Utiliser une structure Cellule pour d�crire les cellules occup�es
        par les bateaux. Un bateau sera d�crit par un ensemble de cellules, et la flotte de bateaux � couler par un ensemble de bateaux.
ENTREE : Coordonn�es de bateaux � initialiser, de bateaux sur lesquels tirer.
SORTIE : Le jeu de bataille navale fonctionel.
*/


/*But: Produire le code en C de la bataille navale. Vous ne pourrez pas utiliser de tableaux � 2 dimensions pour repr�senter la grille du jeu.
        Afin de pouvoir repr�senter cette girlle, vous utiliserez une structure Cellule pour d�crire les cellules occup�es par les bateaux.
        De m�me, un bateau sera d�crit par un ensemble de cellules, et la flotte de bateaux � couler sera repr�sent�e par un ensemble de bateaux.
Travail � faire :
    0- Un tableau statique pour placer les bateaux.
   /1- Ecrire une structure celulle compos�e de deux champs Ligne et Colonne des entiers.
   /2- Ecrire une structure bateau compos�e d'un ensemble de N cellules.
   /3- Ecrire une structure flotte compos�e d'un ensemble de bateaux.
   /4- Ecrire une fonction/proc�dure de cr�ation d'une cellule. Elle prend en param�tre la ligne et la colonne associ�es � la cellule.
    5- Ecrire une fonction de comparaison de deux cellules. Cette fonction renverra Vrai ou Faux selon les cas. (Enum)
    6- Ecrire une fonction de cr�ation de bateaux, qui renverra une structure bateau correctement remplie.
    7- Ecrire une fonction qui v�rifie qu'une cellule appartient � un bateau. Cette fonction renverra Vrai ou Faux selon le cas.
                        Attention, cette fonction de verification devra utiliser votre fonction de comparaison de cellule.
    8- Ecrire une fonction qui v�rifie qu'une cellule appartient � une flotte de bateaux.
                        Attention, cette fonction devra utiliser votre fonction de v�rification pour un bateau.
    9- Ecrire la bataille navale compl�te.

    10- + 3 structures cod�es dans le programme.
        flotte element ;
            element.tabflote[1].tabbateau[1].ligne=100;
            element.tabflote[1].tabbateau[1].ligne=50;
*/
//----------------------------------------------------------------------------------------------------------INITIALISER

typedef struct Cellule {                                      //(1) type structur� Cellule

    int x;                                                  //ligne
    int y;                                                  //colonne

}Cellule;

typedef struct Bateau {                                      // (2) type structur� Bateau

    Cellule tab_cell [TAILLE]; //Un tableau qui va de 0 � 9
                                                                // ? ensemble de N cellules

}Bateau;

typedef struct Flotte {                                      // (3) type structur� Flotte

    Bateau tab_boat [TAILLE];                                                  // ? ensemble de bateaux

}Flotte;

enum BOOL{                                                  // (5) Enum pour comparer les deux cellules (VRAI/FAUX)

    True,False,
};

//------------------------------------------------------------------------------------------------------------PROTOTYPES

void initbateau(Flotte *j1) ;



//------------------------------------------------------------------------------------------------------------PROGRAMME PRINCIPAL

int main()
{

    Flotte j1;                                                                          //on commence par d�clarer la flotte des deux joueurs
    Flotte j2;
    int i,a,b;
    printf(" _____________________________________\n\n Bienvenue dans la bataille navale!\n _____________________________________\n\n Le joueur 1 commence ! \n");


        initbateau(&j1);                                                                // les deux joueurs placent leurs 3 bateaux

        printf("\n A vous, joueur 2! \n");

        initbateau(&j2);

        printf("%d\n",j1.tab_boat[0].tab_cell[0].x);
        printf("%d\n",j1.tab_boat[0].tab_cell[0].y);

        printf("%d\n",j2.tab_boat[0].tab_cell[0].x);
        printf("%d\n",j2.tab_boat[0].tab_cell[0].y);



    return 0;
}

//------------------------------------------------------------------------------------------------------------PROCEDURES & FONCTIONS



void initbateau(Flotte *j1)                           //proc�dure boucle for qui demande au user de saisir l'emplacement ligne colonne + affecter � la flotte appel�e deux fois
{

    //Flotte j2;
    int i,j,a,b;
        for (i=0;i<TAILLE;i++) {
        printf(" Pour placer vos 3 bateaux, indiquez leur position en saissant leur valeur en ligne et en colonne.");
            printf("\n");
            scanf("%d",&a);
            scanf("%d",&b);
            printf("\n");
            j1->tab_boat[0].tab_cell[i].x=a;
            j1->tab_boat[0].tab_cell[i].y=b;

        }

        printf("%d\n",j1->tab_boat[0].tab_cell[0].x);
        printf("%d\n",j1->tab______________________________________boat[0].tab_cell[0].y);


}
/*

enum BOOL comparCell (){                                       // (5) fonction de comparaison de 2 cellules. Enum. � compl�ter avec les bonnes donn�es de cellules;
    enum
    if (){

            return True;
        }


    return False;
}



int creboat ;                                                  // (6) fonction qui remplit correctement un type bateau
    Bateau (x=3, y=4);*/


void compare_boat(){                                               //v�rifie qu'une cellule touche un bateau
    touche=FAUX;
    int i;
    for(i=0;i<TAILLE;i++){


       if((
       }

}

return valide;
}


