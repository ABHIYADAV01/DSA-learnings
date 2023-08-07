#include<iostream>
using namespace std;

void spiral_Print(int arr[][4],int n,int m){

    int startCol=0;
    int startRow=0;
    int endCol=m-1;
    int endRow=n-1;

    while(startRow<=endRow && startCol<=endCol){

        for(int col=startCol;col<=endCol;col++)
        { 
            cout<<arr[startRow][col]<<" ";
        }

        for(int row=startRow+1;row<=endRow;row++)
        {
            cout<<arr[row][endCol]<<" ";
        }

        for(int col=endCol-1;col>=startCol;col--)
        {
            if(startCol==endCol){
                break;
            }
            cout<<arr[endRow][col]<<" ";
        }

        for(int row=endRow-1;row>=startRow+1;row--){
            if(startRow==endRow){
                break;
            }
            cout<<arr[row][startCol]<<" ";
        }
        
        startRow++;
        startCol++;
        endCol--; 
        endRow--;

    }


}
int main()
{
    
    int n,m;
    n=4;
    m=4;

   int arr[][4]={ {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}
                      };

   spiral_Print(arr,n,m);
    
}