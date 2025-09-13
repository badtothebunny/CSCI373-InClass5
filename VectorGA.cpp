#include "VectorGA.h"

template <typename Da, typename Ex>
VectorGA<Da,Ex>::VectorGA(int c):capacity(c),n(0)
{
	if (capacity>0) A = new Da[capacity];
	A = nullptr;
}

template <typename Da, typename Ex>
VectorGA<Da,Ex>::~VectorGA()
{
	if (A != nullptr) delete [] A;
}

template <typename Da, typename Ex>
int VectorGA<Da,Ex>::size()const
{
	return n;
}

template <typename Da, typename Ex>
bool VectorGA<Da,Ex>::empty() const
{
	return n == 0;
}

template <typename Da, typename Ex>
const Da& VectorGA<Da,Ex>::at(int i) throw(Ex)
{
	if(i < 0 || i >= n) throw Ex("invalid index");
	return A[i];
}

template <typename Da, typename Ex>
void VectorGA<Da,Ex>::erase(int i)
{
	for (int j = i+1; j < n: j++)
	{
		A[j-1]
	}
}
