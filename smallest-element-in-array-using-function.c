#include<stdio.h>

int smallest()

{ int arr[]={20,18,14,26};
    
int min=arr[0];
    
for(int i=0;i<4;i++)
    
{ if(min>arr[i])
    
{
        
min=arr[i];
    
}
    
}
    
printf("Smallest number in array= %d",min);
    
return 0;

}

int main()

{ smallest(); 
  
return  0;

}