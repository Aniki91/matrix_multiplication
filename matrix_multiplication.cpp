#include <iostream>

using namespace std;
 
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  cout << "Enter the number of rows and columns of first matrix\n" << endl;
  cin >> m ;
  cin >> n;
  cout << "Enter the elements of first matrix\n" << endl;
 
  for (  c = 0 ; c < m ; c++ )
  {
    for ( d = 0 ; d < n ; d++ )
	{
      cin >> first[c][d];
	}
  }
 
  cout << "Enter the number of rows and columns of second matrix\n" << endl;
  cin >> p;
  cin >> q;
 
  if ( n != p )
    cout << "Matrices with entered orders can't be multiplied with each other.\n" << endl;
  else
  {
    cout << "Enter the elements of second matrix\n" << endl;
 
    for ( c = 0 ; c < p ; c++ )
	{
      for ( d = 0 ; d < q ; d++ )
	  {
        cin >> second[c][d];
	  }
	}
 
    for ( c = 0 ; c < m ; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
      {
        for ( k = 0 ; k < p ; k++ )
        {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    cout << "Product of entered matrices:-\n" << endl;
 
    for ( c = 0 ; c < m ; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
	  {
        cout << "\t" << multiply[c][d] << endl;
	  }
 
      cout << "\n" << endl;
    }
  }
 
  return 0;
}