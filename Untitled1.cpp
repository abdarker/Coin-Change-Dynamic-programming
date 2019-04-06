#include<bits/stdc++.h>

int DP(int M, int c[], int d)
{

   if (M==0){
        return 0;
   }
   int best=INT_MAX;

   for (int i=0;i<d;i++)
   {
     if (M>=c[i])
     {
         int temp=DP(M-c[i],c,d);
         if (temp!=INT_MAX&&temp+1<best)
            best=temp+1;
     }
   }
   return best;
}

int main(){

    int M;
    scanf("%d",&M);
    int arr[] = {1,2,3,5};
    int d = sizeof(arr)/sizeof(arr[0]);
    int e= DP(M,arr,d);
    printf("%d",e);

}


