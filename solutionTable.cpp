/*
 *  solutionTable.cpp
 *  geneHackman
 *
 *  Created by Salvatore D'Agostino on 10-11-25.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "solutionTable.h"

solutionTable::solutionTable()
{
	this->table[0] = solutionRow(1, 0, 0, 1, 1, 2, 0, 1, 0, 0, 1);
	this->table[1] = solutionRow(1, 0, 0, 1, 2, 0, 0, 0, 2, 2, 0);
	this->table[2] = solutionRow(0, 1, 0, 0, 1, 0, 0, 0, 3, 0, 1);
	this->table[3] = solutionRow(1, 0, 1, 1, 2, 0, 0, 0, 2, 1, 1);
	this->table[4] = solutionRow(1, 0, 1, 0, 2, 2, 0, 1, 0, 3, 0);
	this->table[5] = solutionRow(0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1);
	this->table[6] = solutionRow(0, 1, 0, 0, 0, 0, 1, 0, 3, 0, 0);
	this->table[7] = solutionRow(0, 0, 0, 1, 1, 1, 1, 1, 2, 0, 1);
	this->table[8] = solutionRow(0, 1, 1, 0, 2, 0, 1, 0, 3, 3, 0);
	this->table[9] = solutionRow(1, 1, 1, 1, 2, 2, 0, 1, 1, 1, 0);
	this->table[10] = solutionRow(0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0);
	this->table[11] = solutionRow(1, 1, 1, 1, 2, 0, 0, 0, 3, 2, 1);
}

solutionTable::~solutionTable()
{
	
}

void solutionTable::printTable()
{
	for (int i=0; i<NUMBER_OF_ROWS; ++i) 
	{
		table[i].printRow();
	}
}