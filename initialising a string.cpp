#include<stdio.h>
  int main()
  {
  	char str1[] = "Rishika";
  	
  	char str2[8] = "Rishika";
  	
  	char str3[8] = {'R','i','s','h','i','k','a','\0'};
  	
  	char str4[] = {'R','i','s','h','i','k','a','\0'};
  	
  	printf("%s\n",str1);
  	printf("%s\n",str2);
  	printf("%s\n",str3);
  	printf("%s\n",str4);

     return 0;
  }
