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
	SimpleSequenceList() {};
	SimpleSequenceList(int);
	~SimpleSequenceList();
	int Length() const;
	bool Empty() const;
	void Clear();
	bool GetData(int, Type &) const;
	bool SetData(int, const Type &);
	bool InsertData(int, const Type &);
	bool DeleteData(int, Type &);
	bool Traverse() const;
	SimpleSequenceList(const SimpleSequenceList<Type> &);
	SimpleSequenceList<Type> * operator=(const SimpleSequenceList<Type> &);
};

#endif