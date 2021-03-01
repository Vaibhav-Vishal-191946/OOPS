//WAP to read a matrix of size m x n from the keyboard and display the same using functions.
#include <iostream>
using namespace std;
void read_matrix(int,int);
void display_matrix(int,int);
int array_2d[100][100];
int main()
{
    int m,n;
    cout << "Required Rows - ";
    cin >> m;
    cout << "Required Columns - ";
    cin >> n;
    cout<<endl;
    read_matrix(m,n);
    cout<<endl;
    display_matrix(m,n);
    return 0;
}
void read_matrix(int row, int column)
{
	cout << "Enter the elements of "<<row<<" x "<<column<<" Matrix:" <<endl;
    for (int i = 0; i < row; i++) 
        for (int j = 0; j < column; j++) {
            cout << "Element at ["<<i<<"]["<<j<<"] = ";       
            cin >> array_2d[i][j];
        }   
}
void display_matrix(int row, int column)
{
	cout << "Entered "<<row<<" x "<<column<<" Matrix is:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++)
            cout <<array_2d[i][j]<<"\t";       
        cout<<endl;
    }  
}
