#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a,b,c;
    printf("��������ֻС�������:");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b)
    {
        if(a > c)
        {
            printf("С��a����\n");
        }
        else{
            printf("С��c����\n");
        }
    }
    else if(b > a)
    {
        if(b > c)
        {
            printf("С��b����\n");
        
        }
        else{
            printf("С��c����\n");
        }
   
        
    }
    else if(a = b)
    {
        if(a>c)
        {
            printf("С��a��С��b����\n");
        }
        else if(c>a)
        {
            printf("С��c����\n");
        }
        else
        {
            printf("��ֻС��һ����\n");
        }
        
    }

    system("pause");
    return 0;
}
