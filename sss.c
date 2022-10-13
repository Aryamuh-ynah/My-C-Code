#include<stdio.h>
#include<string.h>

int main()
{
       int a, b, i;
        scanf("%d\n%d", &a, &b);
        char *num[10]= {"one","two","three","four","five","six","seven","eight" ,"nine"};
        for(i=a;  i<=b;  i++)
            
    {
                if(i<=9)
                    {
                        printf("%s\n",num[i-1]);
                 
                    
        }
                else
                    
        {
                        if(i%2==0)
                            
            {
                printf("even\n");
            }
                        else 
                {
                                  printf("odd\n");
                                
                }
                        
            }
            
    }
        return 0;
}
