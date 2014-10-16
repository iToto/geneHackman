/*
 *  solutionTable.h
 *  geneHackman
 *
 *  Created by Salvatore D'Agostino on 10-11-25.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef SOLUTIONTABLE_H
#define SOLUTIONTABLE_H

#include "solutionRow.h"

const int NUMBER_OF_ROWS = 12;

class solutionTable
{
	
	
	public:
		solutionRow table[NUMBER_OF_ROWS];
		void printTable();
	
		solutionTable();
		~solutionTable();
};

#endif