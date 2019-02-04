/*Program to sort an array inascending order using Selection sort */

#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int A[80],n;
lb: cout<<"Enter the size of array : ";
cin>>n;
if(n<=0||n>80)
{cout<<"\n\nEnter size of array less than or equal to 80.";
goto lb;
}

cout<<"\n\nEnter the elements of array : \n\n";
for(int i=0; ; i++)
cin>>A[i];

void selection_sort(int A[],int n);
selection_sort(A,n);

cout<<"\n\n\n\n\nSorted array is : \n\n";
for(i=0; i<n; i++)
cout<<A[i]<<" ";

getch();
}

void selection_sort(int A[], int n)
{int small;    int k,count=0;
   for(int i=0; i<n; i++)
   { small=A[i];  count++;
	for(int j=i+1; j<n; j++)
	{
	  if(A[j]<small)
	     {small=A[j];
	      A[j]=A[i];
	      A[i]=small;
	     }
	}
   cout<<"\n\nArray after iteration "<<count<<" is :\n\n";
   for(k=0; k<n; k++)
   cout<<A[k]<<" ";
   }
}
/*

Output:
Enter the size of array : 5
Enter the elements of array :

1
8
2
3
9

Array after iteration 1 is :

1 2 8 3 9

Array after iteration 2 is :

1 2 3 8 9

Array after iteration 3 is :

1 2 3 8 9

Array after iteration 4 is :

1 2 3 8 9

Sorted array is :

1 2 3 8 9

*/
