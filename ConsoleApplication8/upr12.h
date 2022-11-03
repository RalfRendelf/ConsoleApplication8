#pragma once
#include "Blob.h"
#include <map>



class TextQuery {
	vector<string> text;
	multimap<int, string> index;
public:
	TextQuery(fstream& file)
	{

	}


};
class QueryResult
{
	QueryResult* Object;
public:
	void print(){}
};