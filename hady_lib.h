#include<iostream>
#include<array>
#include<vector>
#include<functional>
#include<algorithm>
#include<iterator>
using namespace std ;

#define ascending  0
#define descending 1

#define display(vec) do{\
                    for_each(vec.begin(),vec.end(),[](int x){cout<<x<<"\n";});\
                   }while(0)

#define input(vec) do{\
                    for_each(vec.begin(),vec.end(),[](int & x){cout<<"enter\n";cin>>x;cout<<"\n";});\
                   }while(0)                   