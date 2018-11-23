#include "Graph.h"
#include <stdio.h>
using namespace std;

//visiblement, la méthode TRACE sert à afficher les messages qui effectuent le suivi de l'execution d'une application.

//Constructeur de la classe Graphe
Graph::Graph(string folder, string graph_file): folder(folder),graph_file(graph_file)
{
    // lecture de la valeur de n et de m depuis le fichier attribute.txt
    readNM();
}
// methode permettant de choisir le modele de diffusion
void Graph::setInfuModel(InfluModel modele)
{
        influModel=modele;
}
void Graph::Afficher()
{
    cout << "L'info voulue : " << n <<endl;
}
void Graph::readNM()
{
    // c_str() pour supprimer les esapces après la fin du mot
    ifstream fichier((folder + "/attribute.txt").c_str());

    // On verifie que le fichier a été trouvé
     if(fichier)
    {
        string s;

        // On lit le fichier ligne par ligne
        while(fichier >> s)
        {
            //On verifie les deux premiers caractères de la ligne
            if(s.substr(0,2)== "n=")
            {
                // atoi sert a convertir en Int
                n=atoi(s.substr(2).c_str());
                continue;
            }
            if(s.substr(0,2) == "m=")
            {
                m=atoi(s.substr(2).c_str());
                continue;
            }
        }
        fichier.close();

    }
    else
    {
        cout << "Impossible d'ouvrir le fichier " << endl;
    }
}

void Graph::addEdge(int a, int b, double p)
{
    //push_back permet d'ajouter un element à la fin du vecteur.
    probT[b].push_back(p);
    gT[b].push_back(a);
    inDeg[b]++;
}

void Graph::readGraph()
{
    FILE * fic = fopen((folder+"/"+graph_file).c_str(),"r");

    if(fic)
    {
            cout << "graphe à lire trouvé"<< endl;
            fclose(fic);
    }
    else
    {
         cout << "NOOOOOOOO"<< endl;

    }

}
