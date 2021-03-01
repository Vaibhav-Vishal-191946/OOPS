//WAP to read a matrix of size m x n form the keyboard and display the same using functions.
#include <iostream>
using namespace std;
int matrix[100][100];
void read_matrix(int,int);
void display_matrix(int,int);
int main()
{
    int m, n;
    cout << "Enter the Number Of Rows - ";
    cin >> m;
    cout << "Enter the Number Of Columns - ";
    cin >> n;
    read_matrix(m,n);
    display_matrix(m,n);
    return 0;
}
void read_matrix(int row, int column)
{
	cout << "Enter the elements of "<<row<<" x "<<column<<" Matrix:" <<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "Element at ["<<i<<"]["<<j<<"] = ";       
            cin >> matrix[i][j];
        }
        cout << endl;
    }    
}
void display_matrix(int row, int column)
{
	cout << "Entered matrix is :" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++)
            cout <<matrix[i][j]<<"\t";       
        cout<<endl;
    }  
}
