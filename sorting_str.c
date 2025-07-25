#include <stdio.h>
#include <string.h>
int main()
{
    char str[][12] = {"f", "e", "l", "m"};
    int l = 4;
    for (int i = 0; i < l - 1; i++)

    {   char temp[100];
        int minin = -1;
        char *min = str[i];
        for (int j = i; j < l; j++)
        {
            if (strcmp(min, str[j]) > 0)
            {
                min = str[j];
                minin = j;
            }
            
        }
        strcpy(temp,str[i]);
        strcpy(str[i],min);
        strcpy(min,temp);
            
       
    }
    for (int i = 0; i < l; i++)
    {
        printf("%s\n",str[i]);
    }
    

    return 0;
}