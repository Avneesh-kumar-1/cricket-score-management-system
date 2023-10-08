#include<stdio.h>
#include<conio.h>
#include<string.h>
struct cricket
{
char name[18];
char team_name[15];
int batting_average;
};
void main()
struct criket player[100];
int i,n;
char ch,team[100];
printf("How many players ? \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nINPUT THE NAME OF THE PLAYER %d :",i+1);
scanf("%s",player[i].name);
printf("\nINPUT THE TEAM NAME OF THE PLAYER %d :" ,i+1);
scanf("%s",player[i].team_name);
printf("\nINPUT THE BATTING AVERAGE OF PLAYER %d  :",i+1);
scanbf("%d",&player[i].batting_average);
}
printf("==============================================================\n");
printf(" PLAYER'S NAME	          COUNTRY	       BATTING AVERAGE\n");
printf("==============================================================\n");
for(i=0;i<n;i++)
printf(" %.20s  %.20s%d\n",player[i],name,player[i].team_name,player[i].batting_average);
printf("========================================================\n");
printf(" PLAYER'S NAME COUNTRY BATTINGAVERAGE\n");
printf("=========================================================\n");
for(i=0;i<=n;i++) 
printf(" %20s %20s%d\n",player[i].name, player[i].team_name, player[i].batting_ average);
for(i=0;i<n;i++)
{
printf("\n INPUT THE NAME OF THE PLAYER %d : ",i+1);
scanf("%s",player[i].name);
printf("\n INPUT THE TEAM NAME OF THE PLAYER %d :",i+1);
scanf("%s",player[i].team_name);
printf("\n INPUT THE BATTING AVERAGE OF THE PLAYER %d:",i+1);
scanf("%d",&player[i].batting_average);
} 
printf("================================================\n");
printf(" PLAYER'S NAME COUNTRY BATTING AVERAGE\n"); 
printf("==============================================\n");
for(i=0;i<=n;i++)
printf("%20s%d\n",player[i].name,player[i].team_name,player[i].batting_average);
read:
printf("\n\n INPUT FOR WHICH TEAM YOU WANT TO LIST :");
scanf("%s",team);
printf("\n		%s		\n",team);
printf("============================================================\n");
printf("	PLAYER'S NAME			BATTING AVERAGE\n");
printf("============================================================\n");
for(i=0;i<n;i++)
if(strcmp(team,player[i].team_name)==0)
printf("  %20.s  %d\n",player[i].name,player[i].batting_average);
printf("\n\nDO YOU WANT TO LIST ANY OTHER TEAM ? (Y\N) :");
ch=getche();
if(ch=='Y' || ch='Y')
goto read;
getch();
}

