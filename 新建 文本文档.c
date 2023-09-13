#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

int n;
int i;

int temp[10024];






int main()
{    
    int count=1;
    scanf("%d",&n);
    int j=0;
    int number=0;
    for(i=1;i<=n+j;i++)
    {
        number++;
        if(count%4==1)
        {
            
            count=1;
            
        }
        if(number%10==7||number%7==0||number/10%10==7||number/100%10==7||number/1000==7)
        {    
            temp[count]+=1;
            j++;
            count++;
            continue;
            
        }
        
        count++;
        
        
        
    }
    for(i=1;i<=4;i++)
    {
        printf("%d\n",temp[i]);
    }

    return 0;    
}
    


    
