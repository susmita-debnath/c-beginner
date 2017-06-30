#include<stdio.h>

int main()
{
    int n, player1[10000], player2[10000], comp1[10000], comp2[10000];
    int i,w[2]={1,2};
    int p1,p2,sum1=0,sum2=0;
    int max1,max2;
    if(scanf("%d", &n) < 1) return 0;
    for(i=0;i<n;i++){
        if(scanf("%d %d", &p1, &p2) < 1) return 0;

        if( p1 > 1000 || p2 > 1000 ) return 0;

        sum1=player1[i]=sum1+p1;
        sum2=player2[i]=sum2+p2;
    }

    int k = 0;
    for(i=0;i<n;i++){
        if(player1[i]>player2[i]||player1[i]==player2[i]){
            comp1[k++]=(player1[i]-player2[i]);
        }
        else if(player1[i]<player2[i]){
            comp2[k++]=(player2[i]-player1[i]);
        }
    }
    max1=0;
    max2=0;

    for(i = 0; i < k; i++)
    {
        if(comp1[i]>max1){
            max1=comp1[i];
          }
    }

    for(i = 0; i < k; i++)
    {
        if(comp2[i]>max2){
            max2=comp2[i];
          }
    }

    if(max1>max2){
        printf("%d %d",w[0],max1);
    }
    else{
        printf("%d %d",w[1],max2);
    }
    return 0;
}

