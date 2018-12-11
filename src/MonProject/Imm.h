#ifndef DEF_IMM
#define DEF_IMM

#include <cmath>
#include "InfGraph.h"
#include "Graph.h"
typedef long long int64;

using namespace std;



// à utiliser pour l'equation 9 présente dans la step 1 : Sampling Phase
class Math{
    public:
        // log de 2
        static double log2(int n){
            return log(n) / log(2);
        }
        // log de n parmi k
        static double logcnk(int n, int k) {
            double ans = 0;
            for (int i = n - k + 1; i <= n; i++)
            {
                ans += log(i);
            }
            for (int i = 1; i <= k; i++)
            {
                ans -= log(i);
            }
            return ans;
        }
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