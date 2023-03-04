#include <stdio.h>
 
int Add(int a, int b){

    return a+b;

}








int main(){
    
    int x =Add(7,23);

    scanf("%d", &x);   // 輸入
    printf("hello world x=%d\n", x);  // 輸出
    return 0;
}