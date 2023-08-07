#include<iostream>
using namespace std;

void wave_Print(int arr[][4],int n,int m){

    int startCol=0;
    int startRow=0;
    int endCol=m-1;
    int endRow=n-1;

   while(endCol>=startCol){

     for(int row=startRow;row<=endRow;row++){
        cout<<arr[row][endCol]<<" ";
    }
    endCol--;

    for(int row=endRow;row>=startRow;row--){
        cout<<arr[row][endCol]<<" ";
    }
    endCol--;
   }

}


int main()
{
    
    int n,m;
    n=4;
    m=4;

   int arr[][4]={   {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}
                      };

   wave_Print(arr,n,m);
    
}