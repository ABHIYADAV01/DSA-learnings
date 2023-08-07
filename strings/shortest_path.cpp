#include<iostream>
using namespace std;

int main()
{
    char dist[10] = "SNNNEWE";
    char disp[10];

    int i=0,j=0;

    while(dist[i]!='\0'){
        if((dist[i]=='N' && dist[i+1]=='S') || (dist[i]=='S' && dist[i+1]=='N')  ){
            i=i+2;
            continue;
        }
        else if((dist[i]=='E' && dist[i+1]=='W') || (dist[i]=='W' && dist[i+1]=='E')  ){
            i=i+2;
            continue;
        }
        else{
            disp[j]=dist[i];
            j++;
            i++;
        }
    }
    
    disp[j] ='\0';
    cout<<"The shortest path or say displacement is :"<<disp;
}