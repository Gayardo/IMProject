#include "head.h"
using namespace std;

Counter::Counter(int id)
{
								id=0;
								cnt[id]++;
}
Counter::~Counter()
{

}
void Counter::show()
{
								for (int i=0; i<1000; i++)
								{
																if(cnt[i]>0)
																{
																								//INFO("Counter", i,cnt[i]);
																}
								}
}
