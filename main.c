#include <stdio.h>
#include <stdlib.h>

int p(int n , int k) {
    int sayi;//kaç paritonu var
    if(n==k){
   // printf("%d\n",n);
    return 1;
    }
    else if(k>n){
    return 0;
    }
    else {
    printf("%d + %d + %d\n",k,p(n,k+1),p(n-k,k));
    return p(n,k+1)+p(n-k,k);


    }



    return sayi;
}
int main()
{
    int n,k;

    printf("Sayiyi(n) giriniz : ");
    scanf("%d",&n);
    printf("k sayisinin degerini giriniz : ");
    scanf("%d",&k);
    printf("%d sayisinin %d tane partitionu vardir.",n,p(n,k));


    return 0;
}
