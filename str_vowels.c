#include <stdio.h>
int main()
{
    char a[50];
    int b = 0;
    printf("enter a string: ");
    scanf("%[^\n]",a);
    int i = 0;
    while(a[i]!='\0')
    {
      if(a[i] == 'a'||a[i] =='A'||a[i] =='e'||a[i] =='E'||a[i] =='i'||a[i] =='I'||a[i] =='o'||a[i] =='O'||a[i] =='u'||a[i] =='U')
      {
       b++;
      }	      
     a[i++];
    }
    printf("the total number of vowels in a given string is %d",b);
    return 0;
}
