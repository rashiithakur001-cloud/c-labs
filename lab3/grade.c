#include<stdio.h>
#include<string.h>
int main(){
char grade[3];
    printf("enter the grade:\n");
    scanf("%s",grade);
    if(strcmp(grade,"AA")==0||strcmp(grade,"aA")==0||strcmp(grade,"Aa")==0||strcmp(grade,"aa")==0)
    {
        printf("EXCELLENT");
    }
      else if (strcmp(grade,"AB")==0||strcmp(grade,"Ab")==0||strcmp(grade,"aB")==0||strcmp(grade,"ab")==0)
      {
        printf("VERY GOOD");
      }
        else if(strcmp(grade,"BB")==0||strcmp(grade,"bB")==0||strcmp(grade,"Bb")==0||strcmp(grade,"bb")==0)
        {
        printf("GOOD");
        }
        else if(strcmp(grade,"BC")==0||strcmp(grade,"Bc")==0||strcmp(grade,"bC")==0||strcmp(grade,"bc")==0)
        {
        printf("AVERAGE");
        }
        else if(strcmp(grade,"CC")==0||strcmp(grade,"Cc")==0||strcmp(grade,"cC")==0||strcmp(grade,"cc")==0)
        {
        printf("SATISFACTORY");
        }
        else if(strcmp (grade,"CD")==0||strcmp(grade,"Cd")==0||strcmp(grade,"cD")==0||strcmp(grade,"cd")==0)
        {
        printf("PASS");
        }
        else if (strcmp(grade,"DD")==0||strcmp(grade,"Dd")==0||strcmp(grade,"dD")==0||strcmp(grade,"dd")==0)
        {
        printf("JUST PASS");}
        else if(strcmp(grade,"FR")==0||strcmp(grade,"Fr")==0||strcmp(grade,"fR")==0||strcmp(grade,"fr")==0)
        {
        printf("FAIL");
        }
        else{
            printf("invalid input");
        }
        return 0;
    }