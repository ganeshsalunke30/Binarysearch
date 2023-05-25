4 N Queen Problem

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int Place(int r,int c);
int NQueen(int r,int n);
int Print(int n);
int x[20],Count;

int NQueen(int r,int n){
    int c,i;
    for(c=1; c<=n; c++){
   	 if(Place(r,c)){
   		 x[r]=c;
   		 if(r==n){
   			 Print(n);
   		 }
   		 else{
   			 NQueen(r+1,n);
   		 }
   	 }
    }
    return 0;
}

int Place(int r,int c){
    int i;
    for(i=1; i<=r-1; i++){
   	 if(x[i]==c){
   		 return 0;
   	 }
   	 else{
   		 if(abs(x[i]-c)==abs(i-r)){
   			 return 0;
   		 }
   	 }
    }
    return 1;
}


int Print(int n){
    int i,j;
    cout<<"\nSolution"<<++Count<<"\n\n";
    for(i=1;i<=n;i++){
   	 cout<<"\t"<<i;
    }
    for(i=1;i<=n;i++){
   	 cout<<"\n"<<i;
   	 for(j=1;j<=n;j++){
   		 if(x[i]==j)
   			 cout<<"\t Q";
   		 else
   			 cout<<"\t -";
   	 }
    }
    return 0;

}

int main() {
    cout << "**N Queen Problem**" << endl;

    int n;
    cout<<"Enter the No. of Queens : ";
    cin>>n;

    NQueen(1,n);

    return 0;
}
