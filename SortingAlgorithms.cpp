#include<iostream>
using namespace std;

int BubbleSort(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n-i-1;j++)
   {
      if(arr[j]>arr[j+1])
      {
         swap(arr[j],arr[j+1]);
      }
   }
  }
}

int SelectionSort(int arr[],int n)
{
   for(int i=0;i<n-1;i++)
   {
      int smallest=i;
      for(int j=i+1;j<n;j++)
      {
         if(arr[j]<arr[smallest])
         {
            smallest=j;
         }
      }
      swap(arr[i],arr[smallest]);
   }
}

int InsertionSort(int arr[],int n)
{  for(int i=1;i<n;i++)
   {
      int curr=arr[i];
      int prev=i-1;

      while(prev>=0 && arr[prev]>curr)
      {
         arr[prev+1]=arr[prev];
         prev--;
      }
      arr[prev+1]=curr;
   }
   
}


int main()
{ 
  int arr[]={5,3,2,4,1};     
  int n=5; 
  //BubbleSort(arr,n);
  //SelectionSort(arr,n);
  InsertionSort(arr,n);
  for(int i=0;i<n;i++)
  {
    cout<< arr[i]<<" ";
  }
   return 0;
}