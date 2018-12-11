#include "Imm.h"
using namespace std;


double Imm::step1SamplingPhase(InfGraph &g, const Argument &arg)
{
	double epsilone_Prime=arg.epsilon * sqrt(2);
	// AJOUTER UN TIMER ICIII ???

	// boucle infinie
	// la boucle s'arrete quand on retourne le OPT_Prime
	for(int x=1; ;x++){


		// (ci)lambda prime comme défini à l'quation 9, page 5 de l'article
		// le int64 est le type long long, un int normal ne suffirait pas à contenir le lambda prime(ci)
		int64 ci= (2+2/3 * epsilone_Prime)*( log(g.n)+ Math::logcnk(g.n, arg.k) + log(Math::log2(g.n))) * pow(2.0, x) / (epsilone_Prime* epsilone_Prime);
        
    	cout <<"lambda prime : " <<ci<< endl;
   		cout <<"n : " <<g.n<< endl;
    	cout <<"k : " <<arg.k<< endl;

    	// construction de l'hyper graph avec le nouveau lambda prime
    	g.build_hyper_graph(ci,arg);

    	 if(x==10){
    	 	return 4.0;
    	 }
	}

	return 2.5;

}

// Fonction qui va executer tout l'imm
void Imm::InfluenceMaximize(InfGraph &g, const Argument &arg)
{
	
    //Ajouter un timer ici ?? a quoi cela sert ?? peut etre a calculer la complexité ? 

    // Step 1 : Sampling
	
	double Opt_prime;
	// On estime le OPT prime grace a la sampling phase
	// On identifie |R| >= epsilonePrime/OPT
	Opt_prime =step1SamplingPhase(g,arg);


	// Step 2 : NodeSelection

}
