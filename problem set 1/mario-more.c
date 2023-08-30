#include<stdio.h>
int main(){
    int height;
    getHeight:
    scanf("%d",&height);
    if(height<1||height>8){
        goto getHeight;
    }
    for(int i=1; i<=height;i++){
        for (int j = 1; j<=(height-i);j++){
            printf(" ");
        }
        for (int brick = 1; brick <= i; brick++)
        {
            printf("#");
        }
        printf(" ");
        for (int brick = 1; brick <= i; brick++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}