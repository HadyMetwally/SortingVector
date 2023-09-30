#include"RTE.h"

int main()
{
constexpr int size = 10 ;    
vector<int> v(size) ;
input(v);
RTE_Sort_Vector(v,descending) ;
display(v);
}