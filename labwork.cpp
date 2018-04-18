#include <iostream>
#include <string>
#include<fstream>
using namespace std;
struct list
{
	string name;
   string description;
   string Date;
};

struct list data[100];
bool Add_in_file(string name,string description, string Date)
{
	
   if (listSize < 101)
   {
      list y = { name,description, Date };
      data[listSize] = y;
      listSize++;
      return true;
   }
   else
   {
      return false;
 
 
   }
}
