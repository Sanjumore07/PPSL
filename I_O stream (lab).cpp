#include <iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
  string userInput;
  
  cout<<"Enter sometext:";
  getline(cin,userInput);
  
  ofstream outfile("myfile.txt");
  if(outfile.is_open())
  {
    outfile<<userInput;
    outfile.close();
    cout<<"Data saved to file."<<endl;
  }
  else
  {
    cout<<"Error opening file for writing."<<endl;
  }
  
  string filecontent;
  ifstream infile("myfile.txt");
  if(infile.is_open())
  {
    getline(infile,filecontent);
    infile.close();
    cout<<"Data read from file:"<<filecontent<<endl;
  }
  else
  {
    cout<<"Error opening file for reading."<<endl;
  }
  return 0;
}