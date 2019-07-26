/*Read different types of data from standard input, process them as shown in output format and print the answer to standard output.

Input format:
First line contains integer N. 
Second line contains string S.

Output format: 
First line should contain N x 2. 
Second line should contain the same string S.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    char string[100];
    
    scanf("%d",&num);
    scanf("%s",string);
    
    printf("%d\n",num*2);
    printf("%s\n",string);
}
