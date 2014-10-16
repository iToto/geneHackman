/*
 *  solutionRow.h
 *  geneHackman
 *
 *  Created by Salvatore D'Agostino on 10-11-25.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef SOLUTIONROW_H
#define SOLUTIONROW_H
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

enum prices {$,$$,$$$};
enum pats {NONE,SOME,FULL};
enum types {FR,IT,TA,BG};
enum estimates {zeroToTen,tenToThirty,thirtyToSixty,overSixty};

class solutionRow
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
		int answer;
		
		solutionRow(int Alt, int Bar, int Fri, int Hun, int Pat, int Price, int Rain, int Res, int Type, int Est, int Answer);
		solutionRow();
		~solutionRow();
		
		void printRow();
};

#endif
