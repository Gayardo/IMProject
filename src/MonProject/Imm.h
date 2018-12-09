#ifndef DEF_IMM
#define DEF_IMM

#include <cmath>
#include "InfGraph.h"
#include "Graph.h"

using namespace std;



// structure constituée des parametres d'entrée de IMM
class Argument{
public:
	//the size of the seed set for influence maximization
    int k;
    // le dossier contenant le graph
    string dataset;
    // ??
    double epsilon;
    // le model de diffusion
    string model;
    // ??
    double T;
};

class Imm
{
	// prototypes des fonctions de la classe IMM
	private:
		// premiere phase de l'imm la sampling phase qui retourne l'OPT prime/set R (dans l'article)
		static double step1SamplingPhase(InfGraph &g, const Argument &arg);


	public: 

		// fonction principale de IMM
		static void InfluenceMaximize(InfGraph &g, const Argument &arg);



};


#endif