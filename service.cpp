#include"service.h"

void Service_Vec_Sort_Ascending(vector<int>& vec,function<void(bool&)> ACK ) 
{
  bool request = false ;
  ACK(request) ;
  if(request)
  {
   sort(vec.begin(),vec.end()) ;
  }
  else
  {
   cout<<"NOT ACK" ;
  }
}

void Service_Vec_Sort_Descending(vector<int>& vec,function<void(bool&)> ACK )
{
bool request = false ;
  ACK(request) ;
  if(request)
  {
    sort(vec.begin(),vec.end(),[](int x, int y)->bool{return x>y ;}) ;
  }
  else
  {
   cout<<"NOT ACK" ;
  }

}