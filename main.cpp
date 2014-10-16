#include "gene.h"
#include "solutionTable.h"

using namespace std;

void fitnessFunction(gene genes[NUM_GENES],solutionTable* solTable);
void findStrongGene(gene genes[NUM_GENES],int winners[2]);
void findWeakGene(gene genes[NUM_GENES],int losers[2]);

int main (int argc, char * const argv[]) 
{
	srand((unsigned)time(0));
	gene genePool[NUM_GENES];
	solutionTable solTable;
	int strongestGenes[2];
	int weakestGenes[2];
	
	cout << "Initial Genes: " << endl;
	
	for (int i = 0; i < NUM_GENES; ++i) 
	{
		genePool[i] = gene();
		genePool[i].printGene();
	}
	
	for (int steps = 0; steps < 50000; ++steps) 
	{
		cout << "Attempt: " << steps << endl;
		
		fitnessFunction(genePool, &solTable);
		
		for (int i = 0; i < NUM_GENES; ++i) 
		{
			genePool[i].printGene();
		}
		
		findStrongGene(genePool, strongestGenes);
		findWeakGene(genePool, weakestGenes);
		
		if (steps % 1 == 0) 		
		{
			gene::crossOver(genePool[strongestGenes[0]], genePool[rand()%NUM_GENES],genePool,weakestGenes);
		}		
		if (rand() % 10 == 0) 
		{
			gene::evolve(genePool[strongestGenes[0]],genePool[rand()%NUM_GENES],genePool,weakestGenes);
		}
		for (int i = 0; i < NUM_GENES; ++i) 
		{
			if(i != weakestGenes[0] && i != weakestGenes[1] && i != strongestGenes[0] && i != strongestGenes[1])
					gene::mutate(&genePool[i]);
		}
		
		
		for (int i = 0; i < NUM_GENES; ++i) 
		{
			genePool[i].resetScore();
		}		
	}	
	
    return 0;
}

void fitnessFunction(gene genes[NUM_GENES],solutionTable* solTable)
{
	for (int i=0; i < NUM_GENES; ++i) 
	{
		for (int j = 0; j < NUMBER_OF_ROWS; ++j) 
		{
			
			if(genes[i].alt != solTable->table[j].alt && genes[i].alt != 2)
			{
				genes[i].expectedAnswer = 0;
			}
			
			else if(genes[i].bar != solTable->table[j].bar && genes[i].bar != 2)
			{
				genes[i].expectedAnswer = 0;
			}
			
			else if(genes[i].fri != solTable->table[j].fri && genes[i].fri != 2)
			{
				genes[i].expectedAnswer = 0;
			}
			
			else if(genes[i].hun != solTable->table[j].hun && genes[i].hun != 2)
			{
				genes[i].expectedAnswer = 0;
			}
			
			else if(genes[i].pat != solTable->table[j].pat && genes[i].pat != 3)
			{
				genes[i].expectedAnswer = 0;
			}
			
			else if(genes[i].price != solTable->table[j].price && genes[i].price != 3)
			{
				genes[i].expectedAnswer = 0;
			}
			
			else if(genes[i].rain != solTable->table[j].rain && genes[i].rain != 2)
			{
				genes[i].expectedAnswer = 0;
			}
			
			else if(genes[i].res != solTable->table[j].res && genes[i].res != 2)
			{
				genes[i].expectedAnswer = 0;
			}
			
			else if(genes[i].type != solTable->table[j].type && genes[i].type != 4)
			{
				genes[i].expectedAnswer = 0;
			}
			
			else if(genes[i].est != solTable->table[j].est && genes[i].est != 4)
			{
				genes[i].expectedAnswer = 0;
			}
			
			
			if(genes[i].expectedAnswer == solTable->table[j].answer)
			{
				genes[i].score ++;
			}
			
			genes[i].expectedAnswer = 1;
		}
	}
}

void findStrongGene(gene genes[NUM_GENES], int winners[2])
{
	winners[0] = 0;
	winners[1] = 1;
	
	for (int i = 0; i < NUM_GENES; ++i) 
	{	
		if(genes[i].score > genes[winners[0]].score)
		{
			winners[0] = i;
		}
		else if(genes[i].score > genes[winners[1]].score && i != winners[0])
		{
			winners[1] = i;
		}
	}
	
}
void findWeakGene(gene genes[NUM_GENES],int losers[2])
{
	losers[0] = 0; 
	losers[1] = 1;
	
	for (int i = 0; i < NUM_GENES; ++i) 
	{
		if(genes[i].score < genes[losers[0]].score)
			losers[0] = i;
		else if(genes[i].score < genes[losers[1]].score && i != losers[0])
			losers[1] = i;
	}
	
}