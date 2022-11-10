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
	//inline - поток ifstream  для входного файла
	TextQuery tq(infile);//хранит файл и строит карту запроса 
	// цикл взаимодействия с пользователем: приглашение ввода искомого 
	// слова и вывод результатов 
	while (true)
	{
		cout << "enter word to look for, or q to quit: ";
		string s;
		// остановиться по достижении конца файла или при встрече 
		// символа 'q' во вводе
		if (!(cin >> s) || s == "q") break;
		print(cout, tq.query(s)) << endl;
	}
}