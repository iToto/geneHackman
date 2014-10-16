/*
 *  genePool.cpp
 *  geneHackman
 *
 *  Created by Salvatore D'Agostino on 10-11-25.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "gene.h"

gene::gene()
{
	this->createGene();
}

gene::~gene()
{
	
}

/*
	Creates the first genese to be tested
 */
void gene::createGene()
{
	this->alt = rand() % 3;//2=#
	this->bar = rand() % 3;//2=#
	
	this->est = rand() % 5;//4=#
	
	this->fri = rand() % 3;//2=#
	this->hun = rand() % 3;//2=#
	
	this->pat = rand() % 4;//3=#
	this->price = rand() % 4;//3=#
	
	this->rain = rand() % 3;//2=#
	this->res = rand() % 3;//2=#
	
	this->type = rand() % 5;//4=#
	
	this->expectedAnswer = 1;
	this->score = 0;
	
}

void gene::crossOver(gene gene1, gene gene2,gene genes[10],int losers[2])
{
	gene newGene1;
	gene newGene2;
	
	int pos = rand() % 3;
	
	switch (pos) {
		case 0:
			newGene1.alt = gene1.alt;
			newGene1.bar = gene1.bar;
			newGene1.est = gene1.est;
			newGene1.fri	= gene1.fri;
			newGene1.hun	= gene1.hun;
			newGene1.pat = gene1.pat;
			
			newGene1.price = gene2.price;
			newGene1.rain = gene2.rain;
			newGene1.res = gene2.res;
			newGene1.type = gene2.type;
			
			
			newGene2.alt = gene2.alt;
			newGene2.bar = gene2.bar;
			newGene2.est = gene2.est;
			newGene2.fri	= gene2.fri;
			newGene2.hun	= gene2.hun;
			newGene2.pat = gene2.pat;
			
			newGene2.price = gene1.price;
			newGene2.rain = gene1.rain;	
			newGene2.res = gene1.res;
			newGene2.type = gene1.type;
			break;
		case 1:
			newGene1.alt = gene1.alt;
			newGene1.bar = gene1.bar;
			newGene1.est = gene1.est;
			newGene1.fri	= gene1.fri;
			newGene1.hun	= gene1.hun;
			newGene1.pat = gene1.pat;
			newGene1.price = gene1.price;
			
			newGene1.rain = gene2.rain;
			newGene1.res = gene2.res;
			newGene1.type = gene2.type;
			
			
			newGene2.alt = gene2.alt;
			newGene2.bar = gene2.bar;
			newGene2.est = gene2.est;
			newGene2.fri	= gene2.fri;
			newGene2.hun	= gene2.hun;
			newGene2.pat = gene2.pat;
			newGene2.price = gene2.price;
			
			newGene2.rain = gene1.rain;	
			newGene2.res = gene1.res;
			newGene2.type = gene1.type;
			break;
		case 2:
			newGene1.alt = gene1.alt;
			newGene1.bar = gene1.bar;
			newGene1.est = gene1.est;
			newGene1.fri	= gene1.fri;
			newGene1.hun	= gene1.hun;
			newGene1.pat = gene1.pat;
			newGene1.price = gene1.price;
			newGene1.rain = gene1.rain;
			
			newGene1.res = gene2.res;
			newGene1.type = gene2.type;
			
			
			newGene2.alt = gene2.alt;
			newGene2.bar = gene2.bar;
			newGene2.est = gene2.est;
			newGene2.fri	= gene2.fri;
			newGene2.hun	= gene2.hun;
			newGene2.pat = gene2.pat;
			newGene2.price = gene2.price;
			newGene2.rain = gene2.rain;
				
			newGene2.res = gene1.res;
			newGene2.type = gene1.type;
			break;
		default:
			break;
	}
	
	genes[losers[0]] = newGene1;
	genes[losers[1]] = newGene2;
}

void gene::evolve(gene gene1,gene gene2,gene genes[NUM_GENES],int losers[2])
{
	gene newGene1;
	gene newGene2;
	
	newGene1.alt = gene2.alt;
	newGene1.bar = gene2.bar;
	newGene1.est = gene2.est;
	newGene1.fri = gene2.fri;
	newGene1.hun = gene2.hun;
	
	newGene1.pat = gene1.pat;
	newGene1.price = gene1.price;
	newGene1.rain = gene1.rain;
	newGene1.res = gene1.res;
	newGene1.type = gene1.type;
	
	
	newGene2.alt = gene1.alt;
	newGene2.bar = gene1.bar;
	newGene2.est = gene1.est;
	newGene2.fri = gene1.fri;
	newGene2.hun = gene1.hun;
	
	newGene2.pat = gene2.pat;
	newGene2.price = gene2.price;
	newGene2.rain = gene2.rain;
	newGene2.res = gene2.res;
	newGene2.type = gene2.type;	
	
	genes[losers[0]] = newGene1;
	genes[losers[1]] = newGene2;
}

void gene::mutate(gene* aGene)
{
	int chosen = rand() % 10;
	
	switch (chosen) 
	{
		case 0:
			aGene->alt = (aGene->alt + 1) % 3;
			break;
		case 1:
			aGene->bar = (aGene->bar + 1) % 3;
			break;
		case 2:
			aGene->est = (aGene->est + 1) % 5;
			break;
		case 3:
			aGene->fri	= (aGene->fri + 1) % 3;
			break;
		case 4:
			aGene->hun = (aGene->hun + 1) % 3;
			break;
		case 5:
			aGene->pat = (aGene->pat + 1) % 4;
			break;
		case 6:
			aGene->price = (aGene->price + 1) % 4;
			break;
		case 7:
			aGene->rain = (aGene->rain + 1) % 3;
			break;
		case 8:
			aGene->res = (aGene->res + 1) % 3;
			break;
		case 9:
			aGene->type = (aGene->type + 1) % 5;
			break;
		default:
			break;
	}
}


int gene::returnLowestIndex(gene genes[NUM_GENES],int ignore)
{
	int lowest = 0; 
	
	for (int i = 0; i < NUM_GENES; ++i) 
	{
		if(genes[i].score < genes[lowest].score && i != ignore)
			lowest = i;
	}
	
	return lowest;
}

void gene::resetScore()
{
	this->score = 0;
	this->expectedAnswer = 1;
}


void gene::printGene()
{
	cout << "Gene: " ;
	switch (this->alt) 
	{
		case 0:
			cout << "No";
			break;
		case 1:
			cout << "Yes";
			break;
		default:
			cout << "#";
			break;
	}
	cout << ":" ;
	switch (this->bar) 
	{
		case 0:
			cout << "No";
			break;
		case 1:
			cout << "Yes";
			break;
		default:
			cout << "#";
			break;
	}
	cout << ":" ;
	switch (this->fri) 
	{
		case 0:
			cout << "No";
			break;
		case 1:
			cout << "Yes";
			break;
		default:
			cout << "#";
			break;
	}
	cout << ":" ;
	switch (this->hun) 
	{
		case 0:
			cout << "No";
			break;
		case 1:
			cout << "Yes";
			break;
		default:
			cout << "#";
			break;
	}
	cout << ":" ;
	switch (this->pat) 
	{
		case 0:
			cout << "NONE";
			break;
		case 1:
			cout << "SOME";
			break;
		case 2:
			cout << "FULL";
			break;
		default:
			cout << "#";
			break;
	}
	cout << ":" ;
	switch (this->price) 
	{
		case 0:
			cout << "$";
			break;
		case 1:
			cout << "$$";
			break;
		case 2:
			cout << "$$$";
			break;
		default:
			cout << "#";
			break;
	}
	cout << ":" ;
	switch (this->rain) 
	{
		case 0:
			cout << "No";
			break;
		case 1:
			cout << "Yes";
			break;
		default:
			cout << "#";
			break;
	}
	cout << ":" ;
	switch (this->res) 
	{
		case 0:
			cout << "No";
			break;
		case 1:
			cout << "Yes";
			break;
		default:
			cout << "#";
			break;
	}
	cout << ":" ;
	switch (this->type) 
	{
		case 0:
			cout << "French";
			break;
		case 1:
			cout << "Italian";
			break;
		case 2:
			cout << "Thai";
			break;
		case 3:
			cout << "Burger";
			break;
		default:
			cout << "#";
			break;
	}
	cout << ":" ;
	switch (this->est) 
	{
		case 0:
			cout << "0-10";
			break;
		case 1:
			cout << "10-30";
			break;
		case 2:
			cout << "30-60";
			break;
		case 3:
			cout << ">60";
		default:
			cout << "#";
			break;
	}
	cout << ":" << "SCORE: " << this->score << endl;
}