#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a,b,c;
    printf("请输入三只小猪的体重:");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b)
    {
        if(a > c)
        {
            printf("小猪a最重\n");
        }
        else{
            printf("小猪c最重\n");
        }
    }
    else if(b > a)
    {
        if(b > c)
        {
            printf("小猪b最重\n");
        
        }
        else{
            printf("小猪c最重\n");
        }
   
        
    }
    else if(a = b)
    {
        if(a>c)
        {
            printf("小猪a和小猪b最重\n");
        }
        else if(c>a)
        {
            printf("小猪c最重\n");
        }
        else
        {
            printf("三只小猪一样重\n");
        }
        
    }

    system("pause");
    return 0;
}
