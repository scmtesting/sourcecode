#include <stdio.h>
#include <stdlib.h>
char getGrade(float a);
int main()
{
FILE * input;

char StdNames[2][20];
float StdAllMarks[2][6];
float StdTotal[2];
char StdGrade[2];
float Total;
char Grade;
int i,j;

for (i=0;i<2;i++)
{ Total = 0.0;
scanf("%s",StdNames[i]);

for(j=0;j<=5;j++)
{
scanf("%f",&StdAllMarks[i][j]);
Total = Total + StdAllMarks[i][j];
}
StdTotal[i] = Total;
Grade =getGrade(Total);
StdGrade[i]= Grade;

input = fopen("result.txt", "w");

}
fprintf(input,"_____________________________________________________________________________________\n");
fprintf(input,"Name Quiz Assignment HOT1 HOT2 Project Final Grade\n");
for(i=0;i<2;i++)
{fprintf(input,"%s",StdNames[i]);
for(j=0;j<=5;j++)
fprintf(input," %0.2f",StdAllMarks[i][j]);
fprintf(input," %.2f",StdTotal[i]);
fprintf(input," %c\n",StdGrade[i]);
}
fprintf(input,"_____________________________________________________________________________________");
fclose(input);
}
char getGrade(float a)
{ char b;
if (a >= 80)
b = 'A';
else if (a >= 75)
b = 'B';
else if (a >= 50)
b = 'C';
else
b ='F';
return b;


}



