#include <iostream>
#include <string>
using namespace std ;

int main(int argc,char **argv)
{
   string Hello="Combe-Martin" ;
   if(argc>1)
      Hello = argv[1] ;
 
   cout << Hello << endl;

   return 0 ;
}
