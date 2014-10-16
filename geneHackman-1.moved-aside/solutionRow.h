/*
 *  solutionRow.h
 *  geneHackman
 *
 *  Created by Salvatore D'Agostino on 10-11-25.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef solutionRow
#define solutionRow
 

class solutionRow 
{
	public enum prices {"$","$$","$$$"};
	public enum pats {"NONE","SOME","FULL"};
	public enum types {"FR","IT","TA","BG"};
	public enum estimates {"0-10","10-30","30-60",">60"};
	
	
public:	
	bool alt;
	bool bar;
	bool fri;
	bool hun;
	pats pat;
	prices price;
	bool rain;
	bool res;
	types type;
	estimates est;
	
	
	
	
		
	


};

#endif
