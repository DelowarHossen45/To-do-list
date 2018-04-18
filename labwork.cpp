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
void Show_file()
{
	ofstream file_open("To_Do_list.txt",ios::app);
   for (int i = 0; i < listSize; i++)
   {
   	  file_open<<data[i].name<<endl;
   	  file_open<<data[i].description<<endl;
   	  file_open<<data[i].Date<<endl;
   	  file_open<<"\n"<<endl;
   	  cout<<"Name : "<<data[i].name<<endl;
      cout <<"Description : "<<data[i].description << endl;
      cout <<"Date : "<< data[i].Date << endl;
      cout << "" << endl;
   }
}
