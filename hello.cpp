#include <iostream>
#include <string>
using namespace std ;

int main(int argc,char **argv)
{
   string World = "World" ;
   if(argc>1)
      World = argv[1] ;
 
   cout << "Hello: " << World << endl;

   return 0 ;
}
