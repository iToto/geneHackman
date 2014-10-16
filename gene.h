/*
 *  genePool.h
 *  geneHackman
 *
 *  Created by Salvatore D'Agostino on 10-11-25.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef GENE_H
#define GENE_H
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;
const int NUM_GENES = 10;
class gene
{
	
public: 
	int alt;
	int bar;
	int fri;
	int hun;
	int pat;
	int price;
	int rain;
	int res;
	int type;
	int est;
	int expectedAnswer;
	int score;
	
	gene();
	~gene();
	void createGene();
	void printGene();
	void resetScore();
	static void crossOver(gene, gene,gene[],int[]);
	static void evolve(gene,gene,gene[],int[]);
	static void mutate(gene*);
	static void deleteWeaklings(vector<gene>*);
	
private:
	static int returnLowestIndex(gene[],int);

	
};


#endif