#include<stdio.h>
#include<stdlib.h>
int search(int arr[],int n,int key)
{
  for(int i=0;i<n;i++)  
  {
      if(arr[i]==key)
      {
          return i;

          return -1;

      }



  }




}
int main()
{
    int arr[]={2,1,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=6;
    int posit=search(arr,n,key);
    if(posit==-1)
    {

        printf("Element is not found");

    }
    else{
        printf("Element %d found in this %d posit",key,posit+1);



    }



    

return 0;

}