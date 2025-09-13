#include "VectorG.h"

template <typename Da, typename Ex>

class VectorGA: pubic VectorG <Da,Ex>
{
	private:
		DA *a;
		int capacity;
		int n; //Number of elements/ size 
	public:
		VectorGA(int c = 0);
		~VectorGA();
		
		int size() const; // number of elements
		bool empty() const; // is vector empty?

		const Da& set(int i, const Da& e) throw(Ex); // element at index
		const Da& at(int i) throw(Ex);  // sets an element at index
		void erase(int i);  // remove element at index
		void insert(int i, const Da& e) throw (Ex);  // insert element at index

};
