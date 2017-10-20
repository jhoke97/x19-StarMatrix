#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int rows;
  int columns;
  cout << "Enter rows and columns of stars:\n";
  cin >> rows >> columns;
  vector< vector <char> > matrix(rows, vector <char> (columns));
  for(int i = 0; i < matrix.size(); i++)
  {
    for(int j = 0; j < matrix[i].size(); j++)
    {
      matrix[i][j] = '*';
    }
  }
  
  for(int i = 0; i < matrix.size(); i++)
  {
    cout << endl;
    for(int j = 0; j < matrix[i].size(); j++)
     { 
      cout << matrix[i][j];
     } 
  }

  return 0;    
}
