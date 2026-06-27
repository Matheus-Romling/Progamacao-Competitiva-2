#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int impares=k/2;
        if(k%2!=0 && n%2!=0){
            impares++;
        }
        if(impares%2==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
