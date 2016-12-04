#ifndef SIMPLESEQUENCELIST_H_
#define SIMPLESEQUENCELIST_H_
#include<iostream>
using std::cin; using std::cout; using std::endl;

template<typename Type>
class SimpleSequenceList
{
private:
	int count;
	int maxcount;
	Type * DataPtr;
public:
	SimpleSequenceList(int);
	~SimpleSequenceList();
	int Length();
	bool Empty();
	void Clear();
	bool GetData(int, Type &);
	bool SetData(int, Type &);
	bool InsertData(int, Type &);
	bool DeleteData(int, Type &);
	bool Traverse();
};

#endif