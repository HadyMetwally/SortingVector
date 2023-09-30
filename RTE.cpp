#include"RTE.h"
void RTE_Sort_Vector(vector<int> & vec , bool sort_type)
{
    void(* ptr_to_sort [])(vector<int>& vec , function<void(bool&)> ACK )=
    {Service_Vec_Sort_Ascending,Service_Vec_Sort_Descending} ;
    
    ptr_to_sort[sort_type](vec,[](bool & request){request=true ;});
}