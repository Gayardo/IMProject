#include "Graph.h"
#include <stdio.h>
//#define TRACE_LINE(...) { ___debug( #__VA_ARGS__,  __VA_ARGS__,cerr); cerr<<"                    \033[100D";  }
//#define TRACE_LINE(...) ;

using namespace std;

//visiblement, la méthode TRACE sert à afficher les messages qui effectuent le suivi de l'execution d'une application.

//Constructeur de la classe Graphe
Graph::Graph(string folder, string graph_file): folder(folder),graph_file(graph_file)
{
    // lecture de la valeur de n et de m depuis le fichier attribute.txt
    readNM();

    // initialisation des vecteurs du graphe
    //boucle pour chaque noeud
    for(int i=0; i<n; i++)
    {
        gT.push_back(vector<int>());
        hasnode.push_back(false);
        probT.push_back(vector<double>());
        inDeg.push_back(0);
    }

    //lecture du graph
    readGraph();
}
// methode permettant de choisir le modele de diffusion
void Graph::setInfuModel(InfluModel modele)
{
        influModel=modele;
}
void Graph::Afficher()
{
    cout << "L'info voulue : " <<  m <<endl;
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
            //??
            int readCnt=0;

            // on parcourt le fichier ligne par ligne
            // le fichier a exactement le meme nomnre de lignes que le graphe a d'arretes
            for(int i=0; i<m; i++)
            {
                readCnt++;
                // noeud de départ et neoud d'arrivée
                int a,b;
                // probabilité ???
                double p;
                int c=fscanf(fic,"%d%d%lf",&a,&b,&p);
                // trois valeurs doivent etre récupérées pour chaque arrete, si ce n'est pas le cas,
                // il y'a une erreur
                if(c!= 3)
                {
                    cout << "Le i: " << i << endl;
                }

                // le numéro du noeud ne peut pas etre supérieur au nombre total de noeuds
                if(a>=n || b>=n)
                {
                    cout << "erreur" <<endl;

                }
                 cout << i << endl;
                 //TRACE_LINE(a, b);
                 //mettre le noeud de départ en existant
                 hasnode[a]=true;
                 //mettre le noeud d'arrivée en existant
                 hasnode[b]=true;

                 // ajout de l'arrete du noeud a vers le b avec la probabilité p
                  addEdge(a,b,p);

            }

            fclose(fic);
    }
    else
    {
         cout << "NOOOOOOOO"<< endl;

    }

}
