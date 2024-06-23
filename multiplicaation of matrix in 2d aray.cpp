#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int mat1[2][2],mat2[2][2];
	int mat3[2][2];
	cout<<"Enter Matrix 1"<<endl;
	for(int l=0;l<2;l++)
	{
	
	  for(int r=0;r<2;r++)
	  {
	  cout<<"Enter the values of at index ("<<l<<" , "<<r<<" : " ;
	  cin>>mat1[l][r];
      }
  }
  cout<<"----------------------------------------"<<endl;
  cout<<"Enter Matrix 2 "<<endl;
    for(int j=0;j<2;j++)
    {
    	
    	
    	for(int k=0;k<2;k++)
    	{
    		
    		cout<<"Enter the values of at index ("<<j<<" , "<<k<<" : ";
    		cin>>mat2[j][k];
		}
	}
	mat3[0][0]=(mat1[0][0]*mat2[0][0])+(mat1[0][1]*mat2[1][0]);
	mat3[0][1]=(mat1[0][0]*mat2[0][1])+(mat1[0][1]*mat2[1][1]);
	mat3[1][0]=(mat1[1][0]*mat2[0][0])+(mat1[1][1]*mat2[1][0]);
	mat3[1][1]=(mat1[1][0]*mat2[0][1])+(mat1[1][1]*mat2[1][1]);
	cout<<"----------------------------------------"<<endl;
	cout<<"Matrix 1"<<endl;

	for(int j=0;j<2;j++)
    {
    	for(int k=0;k<2;k++)
    	{
    		cout<<mat2[j][k]<<"\t";
		}
		cout<<endl;
	}
	  cout<<"----------------------------------------"<<endl;
		cout<<"Matrix 2"<<endl;
	
	for(int l=0;l<2;l++)
    {
    	for(int r=0;r<2;r++)
    	{
    		cout<<mat1[l][r]<<"\t";
		}
		cout<<endl;
	}
	    cout<<"----------------------------------------"<<endl;
		cout<<"Multiplication of two matrix is:"<<endl;
	
	for(int i=0;i<2;i++)
    {
    	for(int m=0;m<2;m++)
    	{
    		cout<<mat3[i][m]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
