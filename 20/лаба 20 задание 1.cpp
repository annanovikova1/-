#include <iostream>
#include <stdlib.h>
using namespace std;
int main()

{
int sum=0;
int n;

cout<<"Vvedite razmer massiva :";
cin>>n;
cout<<endl;
int *array=new int [n];

   for (int i=0;i<n;i++){
   	cin>> array[i];
   	}

    
  for (int i=2 ; i<n ; i+=2){
  	
  	cout<<array[i]<<" ";
  	
  }

cout << endl;

   for (int i=0 ; i<n ; i++){
   	
  	if (array[i]<0)
	  sum+=array[i];
  }

cout <<"sum=" <<sum<< endl;
delete [] array;
system ("pause");
return 0;
}
