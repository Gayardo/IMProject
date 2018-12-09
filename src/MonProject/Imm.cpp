#include "Imm.h"
using namespace std;


double Imm::step1SamplingPhase(InfGraph &g, const Argument &arg)
{
	double epsilone_Prime=arg.epsilon * sqrt(2);
	cout <<"Valeur de epsilone_Prime dans step 1 : " <<epsilone_Prime << endl;

}

// Fonction qui va executer tout l'imm
void Imm::InfluenceMaximize(InfGraph &g, const Argument &arg)
{
	
    //Ajouter un timer ici ?? a quoi cela sert ?? peut etre a calculer la complexité ? 

	double Opt_prime;
	// On estime le OPT prime grace a la sampling phase
	Opt_prime =step1SamplingPhase(g,arg);

	// Step 1 : Sampling



	// Step 2 : NodeSelection

}
