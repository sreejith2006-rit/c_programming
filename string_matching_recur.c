#include <stdio.h>
#include <string.h>
int string_matcher(char str[],char pat[],int len_str,int len_pat,int i){
    if(i>(len_str-len_pat)){
        return -1;
    }
    else{
        int f=0;
        for (int j = 0; j < len_pat; j++)
        {   
            if(str[i+j]!=pat[j]){
                f=1;
                break;
            }
        }
        if(f==0){
            return i;
        }
        return string_matcher(str,pat,len_str,len_pat,i+1);
        
    }
}
int main()
{
    char str[50], pat[20];
    printf("enter the sting :");
    gets(str);
    int len_str = strlen(str);
    printf("enter the pattern :");
    gets(pat);
    int len_pat = strlen(pat);
    int index=string_matcher(str, pat, len_str, len_pat,0);
    printf("%d",index);
    return 0;
}