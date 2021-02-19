#include <iostream>
#include <stdlib.h>

using namespace std;

int main()

{
int max=0;
int sum=0;
int n,m;

cout<<"Vvedite razmer massiva stroki : ";

cin>>n;

cout<<endl;

cout<<"Vvedite razmer massiva stolbci : ";

cin>>m;

cout<<endl;

int **array=new int* [n]; 

    for (int i=0;i<n;i++)
    
        array[i]=new int [m]; 

    for (int i=0;i<n;i++){
    	
        cout<<endl;

    for (int j=0;j<m;j++){
    	
        array[i][j]=0+rand()%10;
        
        cout<<array[i][j]<<" ";
				
		}
}

cout<<endl;

    for (int i=0;i<n;i++){

        cout<<endl;

        sum=0;

    for (int j=0;j<m;j++)

        sum+=array[i][j];

        cout<<"summa("<<i+1<<") = " <<sum;
        
      


}
    for (int i=0;i<n;i++){

        cout<<endl;

     

    for (int j=0;j<m;j++)

        if (array[i][j] > max)
        max=array[i][j];

}
cout <<"max="<< max<<endl;


for (int i=0;i<n; i++)

delete []array[i];

delete [] array;

system ("pause");

return 0;

}
