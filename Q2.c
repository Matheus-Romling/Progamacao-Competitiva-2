#include <stdio.h>
 
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int l,r;
        scanf("%d %d",&l,&r);
        if(l==1 && r==1){
            printf("1\n");
        }else{
            printf("%d\n",r-l);
        }
    }
    return 0;
}
