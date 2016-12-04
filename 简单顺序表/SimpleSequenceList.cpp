#include"SimpleSequenceList.h"

template<typename Type>
SimpleSequenceList<Type>::SimpleSequenceList(int number)
{
	count = 0;
	maxcount = number;
	DataPtr = new Type[maxcount];
}

template<typename Type>
SimpleSequenceList<Type>::~SimpleSequenceList()
{
	delete DataPtr;
}

template<typename Type>
int SimpleSequenceList<Type>::Length()
{
	return count;
}

template<typename Type>
bool SimpleSequenceList<Type>::Empty()
{
	return count == 0;
}

template<typename Type>
void SimpleSequenceList<Type>::Clear()
{
	count = 0;
}

template<typename Type>
bool SimpleSequenceList<Type>::GetData(int position, Type & item)
{
	if (position<1 || position>Length()) return false;
	item = DataPtr[position - 1];
	return true;
}

template<typename Type>
bool SimpleSequenceList<Type>::SetData(int position, Type & item)
{
	if (position<1 || position>Length()) return false;
	DataPtr[position - 1] = item;
	return true;
}

template<typename Type>
bool SimpleSequenceList<Type>::InsertData(int position, Type & item)
{
	if (position<1 || position>Length() + 1 || count == maxcount) return false;
	for (int pos = Length(); pos >= position; pos--) DataPtr[pos] = DataPtr[pos - 1];
	DataPtr[position - 1] = Item;
	++count;
	return true;
}

template<typename Type>
bool SimpleSequenceList<Type>::DeleteData(int positon, Type & item)
{
	if (position<1 || position>Length()) return false;
	item = DataPtr[position - 1];
	for (int pos = position; pos <= Length(); pos++) DataPtr[pos - 1] = DataPtr[pos];
	--count;
	return true;
}

template<typename Type>
bool SimpleSequenceList<Type>::Traverse()
{
	if (count == 0) return false;
	for (int i = 0; i < count; ++i) cout << DataPtr[i] << "   ";
	return true;
}
