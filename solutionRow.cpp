/*
 *  solutionRow.cpp
 *  geneHackman
 *
 *  Created by Salvatore D'Agostino on 10-11-25.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "solutionRow.h"

solutionRow::solutionRow(int Alt, int Bar, int Fri, int Hun, int Pat, int Price, int Rain, int Res, int Type, int Est, int Answer)
{
	this->alt = Alt;
	this->bar = Bar;
	this->fri = Fri;
	this->hun = Hun;
	this->pat = Pat;
	this->price = Price;
	this->rain = Rain;
	this->res = Res;
	this->type = Type;
	this->est = Est;
	this->answer = Answer;
}

solutionRow::solutionRow()
{
	
}

solutionRow::~solutionRow()
{
	
}

void solutionRow::printRow()
{
	cout << "Alt: " << this->alt
		 << "Bar: " << this->bar
		 << "Fri: " << this->fri
		 << "Hun: " << this->hun
		 << "Pat: " << this->pat
		 << "Price: " << this->price
		 << "Rain: " << this->rain
		 << "Res: " << this->res
		 << "Type: " << this->type
		 << "Est: " << this->est
		 << "Answer: " << this->answer << endl;
}