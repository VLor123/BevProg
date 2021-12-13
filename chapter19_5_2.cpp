#include "std_lib_facilities.h"


template<typename T,typename A>
struct vector_base{
	unique_ptr<A> alloc;
	unique_ptr<T*> elem;
	int sz;
	int space;
	
	vector_base(const A& a, int n)
		:alloc{a}, elem{alloc.allocate(n)},sz{n},space{n}{}
	~vector_base(){alloc.deallocate(elem,space);}
	};

template<typename T,typename A = allocator<T>>
class vector:private vector_base<T,A>{
	public:
	
	};


template<typename T,typename A>
void vector<T,A>::reserve(int newalloc)
{
	if (newalloc<=this->space)return;
	vector_base<T,A> b(this->alloc,newalloc);
	uninitialized_copy(b.elem,&b.elem[this->sz],this->elem);
	for(int i=0;i<this->sz;++i)
		this->alloc.destroy(&this->elem[i]);
	swap<vector_base<T,A>>(*this,b);}


int main()
{
	
	return 0;
}
