#pragma once
#include "Blob.h"
#include <map>



class TextQuery {
	vector<string> text;
	multimap<int, string> index;
public:
	TextQuery(ifstream& file)
	{

	}


};
class QueryResult
{
	TextQuery* Object;
public:
	void print(){}
};
void runQueries(ifstream& infile)
{
	//inline - ����� ifstream  ��� �������� �����
	TextQuery tq(infile);//������ ���� � ������ ����� ������� 
	// ���� �������������� � �������������: ����������� ����� �������� 
	// ����� � ����� ����������� 
	while (true)
	{
		cout << "enter word to look for, or q to quit: ";
		string s;
		// ������������ �� ���������� ����� ����� ��� ��� ������� 
		// ������� 'q' �� �����
		if (!(cin >> s) || s == "q") break;
		print(cout, tq.query(s)) << endl;
	}
}