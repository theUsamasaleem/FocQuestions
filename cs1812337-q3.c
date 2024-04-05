// Question 3:
//Write a program in C to get the largest element of an array using recursion.

#include<stdio.h>
int MaxInArray(int []);
int n;

int main()
{
	int max=10;
    int arr1[max],hstno,i;
      printf(" Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf(" Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf(" element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }	
    hstno=MaxInArray(arr1);
    printf(" Largest element of the array is: %d\n\n",hstno);
    return 0;
}
int MaxInArray(int arr1[])
{
    static int i=0,hstno =-9999;
    if(i < n)
    {
         if(hstno<arr1[i])
           hstno=arr1[i];
      i++;
      MaxInArray(arr1);
    }
    return hstno;
}
