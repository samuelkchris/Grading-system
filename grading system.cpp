#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#define Student struct Stud

void add(FILE * fp);
void display(FILE * fp);
void title();
FILE *tp;
FILE *sp;

struct pass
{
	char pass[25];
}pa;

struct user
{
	char user[35];
}sa;

struct Stud
{
    char name[100];
    char dept[50];
    int roll;
    char subject[50];
    int Total;
    int average;
    float points;
	float weightedpoints;
};

admin()
{
	int n,option;
	FILE * fp;
	title();
        printf("\n\t");
       for (n=1;n<64;n++)
	{
		printf("=");
	}

        printf("\n\n\t\t\t\t1. Add Student");
        printf("\n\n\t\t\t\t2. Show All Students");
        printf("\n\n\t\t\t\t3. Logout\n\t");
         for (n=1;n<64;n++)
	{
		printf("=");
	}
        printf("\n\n\t\t\t\tEnter Your Option :--> ");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
                add(fp);
                break;
            case 2:
               display(fp);
                break;
            case 3:
               return 1;
                break;
            default:
                printf("\n\t\tNo Action Detected");
                printf("\n\t\tPress Any Key\n\n\n");
                getch();
                system("pause");
        }
    }







 void add(FILE * fp)
{
    title();
	float x,y,z,a,b,Essential,Relevant,Desirable,others;
    char another='y';
    Student s;
    int i;
	int paper1,paper2,paper3;
	int Total1,Total2,average1,average2,n;
	float points[5];
	

	
	fp=fopen("F:/data.txt","w+");

    fseek(fp,0,SEEK_END);
    while(another=='y'||another=='Y')
    {

        printf("\n\n\t\tEnter Full Name of Student: ");
        fflush(stdin);
		gets(s.name);
		fflush(stdin);
       
        printf("\n\n\t\tEnter Combination: ");
        fflush(stdin);
		gets(s.dept);
		fflush(stdin);

        printf("\n\n\t\tEnter Personal number: ");
        scanf("%d",&s.roll);

         while(another=='y'||another=='Y')
    {
    	printf("\n\t\tPlease Enter five subjects: ");
    	
    printf("\n\nEnter subject: ");
      	fflush(stdin);
		gets(s.subject);
		fflush(stdin);
    printf("Enter the number of papers: ");
    scanf("%d:",&n);
    printf("\n EOT: ");
    
    if(n==3)
    {
    printf("\n%s.1:",s.subject);
    scanf("\n%d",&paper1);
    printf("\n%s.2:",s.subject);
    scanf("\n\n%d",&paper2);
    printf("\n%s.3:",s.subject);
    scanf("\n\n%d",&paper3);
    
    Total1 = paper1+paper2+paper3;
    average1 =Total1/ 3;
	}
   
     else if(n==2)
    {
    printf("\n%s.1:",s.subject);
    scanf("\n\n%d",&paper1);
    printf("\n%s.2:",s.subject);
    scanf("\n\n%d",&paper2);
    
    Total1 = paper1+paper2;
    average1 =Total1/ 2;
    }
	else if(n==1)
	{
    	printf("\n%s.1:",s.subject);
    scanf("\n\n%d",&paper1);
    
    Total1 = paper1;
    average1 =Total1/ 1;
    }	
	else if(n<1 || n>3)
	{
    printf("invalid number of papers \n");
    }
    
    
    printf("\n Mock: ");
    
    if(n==3)
    {
    printf("\n%s.1:",s.subject);
    scanf("\n%d",&paper1);
    printf("\n%s.2:",s.subject);
    scanf("\n\n%d",&paper2);
    printf("\n%s.3:",s.subject);
    scanf("\n\n%d",&paper3);
    
    Total2 = paper1+paper2+paper3;
    average2 =Total2/ 3;
	}
   
     else if(n==2)
    {
    printf("\n%s.1:",s.subject);
    scanf("\n\n%d",&paper1);
    printf("\n%s.2:",s.subject);
    scanf("\n\n%d",&paper2);
    
    Total2 = paper1+paper2;
    average2 =Total2/ 2;
    }
	else if(n==1)
	{
    	printf("\n%s.1:",s.subject);
    scanf("\n\n%d",&paper1);
    
    Total2 = paper1;
    average2 =Total2/ 1;
    }	
	else if(n<1 || n>3)
	{
    printf("invalid number of papers \n");
    }
    
    /* Calculates.Total, s.average */
   s.Total =average1+average2;
    s.average =s.Total / 2;
    /* Print  results */
    printf("%s :",s.subject);
    printf("%d\n", s.average);
    
    
      if(s.average<0 || s.average>100)
    {
        printf("INVALID MARK");
    }
    else if(s.average<40)
    {
        printf("Grade F \n");
        printf("points: 0");
	
    }
    else if(s.average>=40 && s.average<=44)
    {
        printf("Grade E-\n");
        printf("points: 1");
      
        
    }
    else if(s.average>=45 && s.average<=49)
    {
        printf("Grade E \n");
        printf("points: 1.5");
    }
    else if(s.average>=50 && s.average<=54)
    {
        printf("Grade D\n");
        printf("points: 2");
    }
    else if(s.average>=55 && s.average<=59)
    {
        printf("Grade: D+\n");
        printf("points: 2.5");
    }
    
    else if(s.average>=60 && s.average<=64)
    {
        printf("Grade: C\n");
        printf("points: 3");
    }
    else if(s.average>=65 && s.average<=69)
    {
        printf("Grade: C+\n");
        printf("points: 3.5");
    }
    else if(s.average>=70 && s.average<=74)
    {
        printf("Grade: B\n");
        printf("points: 4");
    }
    
    else if(s.average>=75 && s.average<=79)
    {
        printf("Grade: B+\n");
        printf("points: 4.5");
    }
    else if(s.average>=80 && s.average<=89)
    {
        printf("Grade: A\n");
        printf("points: 5 ");
    }
    else if(s.average>=90 && s.average<=99)
    {
        printf("Grade: A+ \n");
        printf("points: 5\n");
    }
    fwrite(&s,sizeof(s),1,fp);
        printf("\n\n\t\tAdd another subject?(Y/N)?");
        fflush(stdin);
        another=getchar();
}	


        fwrite(&s,sizeof(s),1,fp);
	 	

        printf("\n\n\t\tAdd another student?(Y/N)?");
        
        
    	printf("\nEnter Points  : ");
        for(i=0,s.points=0; i<5; i++)
        {
            scanf("%f",&points[i]);
            s.points+=points[i];
           
        }
        printf("\nTotal Points = %f",s.points);
         	printf("\n\nEnter the total points above: ");
      		scanf("%f",&s.points);
        
        
        
        			//weighted points
			printf("\nEnter points for the two best done subjects\n");
			printf("1.:");
			scanf("%f",&x);
			printf("2.:");
			scanf("%f",&y);
			
			printf("\nEnter points for the other subject\n");
			scanf("%f",&z);
			
			printf("\nEnter points for ICT and GP respectively\n");
			scanf("%f%f",&a,&b);
			
			Essential=(x*3)+(y*3);
			Relevant=(z*2);
			Desirable=(a*1)+(b*1);
			others=0.5;
			
			s.weightedpoints=Essential+Relevant+Desirable+others;
			printf("\n Weighted points %f",s.weightedpoints);
			 printf("\n\nEnter the weighted points above: ");
      		 scanf("%f",&s.weightedpoints);
			
         fwrite(&s,sizeof(s),1,fp);
        
        fclose(fp);
        fflush(stdin);
        another=getchar();
    }
    system("CLS");
    admin();
    
}


void display(FILE * fp)
{
    title();
    Student s;
    int i,n,siz=sizeof(s);
    int tempRoll,flag;
    char another='y';



    while(another=='y'||another=='Y')
    {
        printf("\n\n\tEnter Personal number Number: ");
        scanf("%d",&tempRoll);

        fp=fopen("F:/data.txt","r");

        while((fread(&s,siz,1,fp))==1)
        {
            if(s.roll==tempRoll)
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
            printf("\n\t\tNAME : %s",s.name);
            printf("\n\n\t\tCombination : %s",s.dept);
            printf("\n\n\t\tPersonal Number : %d",s.roll);
            printf("\n\n\tTotal points: %f",s.points);
            printf("\n\n\tWeighted points %f",s.weightedpoints);
            printf("\n\n\t\t!!!! SYSTEM UNDER MAINTAINACE FOR THE WEIGHTED POINTS AND TOTAL POINTS TO BE VIEWED FROM HERE !!!!");

           
        }
        else printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND !!!!");


        printf("\n\n\t\tShow another student information? (Y/N)?");
        fflush(stdin);
        another=getchar();
    }
    fclose(fp);
    printf("\n\n\n\t");
    for (n=1;n<64;n++)
	{
		printf("=");
	}
    printf("\n\n\t");
    system("pause");
    system("CLS");
    admin();
}

    
void title()
{
	int n;
	
    system("cls");
    system("COLOR 03");
    printf("\n\n\t");
    for (n=1;n<20;n++)
	{
		printf("=");
	}
    
    printf(" Student Grading and management System ");
     for (n=1;n<20;n++)
	{
		printf("=");
	}
    printf("\n");
}

login()
{
	{
char u[30],p[30];
int n=0;
system("CLS");
printf("\n press enter and enter username and password(only3 attempts)");
while(n<=2)
{
printf("\n Username: ");
scanf("%s",&u);
printf("\n Password: ");
scanf("%s",&p);

	sp=fopen("F:/username.txt","r+");
    fgets(sa.user,25,sp);
    
    tp=fopen("F:/Password.txt","r+");
    fgets(pa.pass,25,tp);

if(strcmp(u,sa.user)==0 && strcmp(p,pa.pass)==0)
{
printf("\n Login Successfully!");
break;
}
else
{
n++;
printf("\nusername or password is incorrect. only %dtrials left. press enter to continue", 3-n);
}
}
if(n==3)
{
printf("\n you have used maximum attempts(3). please trylater.");
}
getch();

}
admin();
}

signup()
{
		printf("\n\n\tEnter Username: ");
		fflush(stdin);
		gets(sa.user);
		fflush(stdin);
	
	sp=fopen("F:/username.txt","w+");
	fwrite(&sa,sizeof(sa),1,sp);
	fclose(sp);
			
		printf("\n\n\tEnter Password: ");
		fflush(stdin);
		gets(pa.pass);
		fflush(stdin);
	
	tp=fopen("F:/password.txt","w+");
	fwrite(&pa,sizeof(pa),1,tp);
	fclose(tp);
	
	system("CLS");
	login();
}


teacher()
{
	int choice,ch,n;
		char c;
	
title();

printf("\n\t");
	 for (n=1;n<70;n++)
	{
		printf("=");
	}

printf("\n\n\t\t1. Login");
printf("\n\n\t\t2. Sign Up");
printf("\n\n\tChoice: ");
scanf("%d",&choice);

switch(choice)
{
	case 1:
	  login();
	  admin();
	  
		break;
	case 2:
		
	  signup();
	  
		break;
}

}

student()
{
		int choice,ch,n;
		char c;
		FILE *fp;
	
title();

printf("\n\t");
	 for (n=1;n<70;n++)
	{
		printf("=");
	}

printf("\n\n\t\t1. Login");
printf("\n\n\t\t2. Sign Up");
printf("\n\n\tChoice: ");
scanf("%d",&choice);

switch(choice)
{
	case 1:
	  login();
	  display(fp);
	  
		break;
	case 2:
		
	  signup();
	  
	  
		break;
}

}

int main()
{
	int n,i,ch;

    title();
    printf("\n\n\t\t\t\tCourse work 1 Year 1 Sem 1");
    printf("\n\n\t\t\t\t     Computer Science");
    printf("\n\n\t\t\t\t   Makerere University\n\t\t\t");
    for (n=1;n<40;n++)
	{
		printf("=");
	}
    printf("\n\n\n\t\t\t       press any key to Continue");
    getch();
    system("CLS");
    printf("\nLoading Please wait");
    for(i=0; i<5; i++)
        {
            printf(".");
            Sleep(1000);
        }
        system("CLS");
    
printf("\n\n\tA you a;");	    
printf("\n\n\t\t1. Teacher");
printf("\n\n\t\t2. Student(UNDER MAINTAINACE)");
printf("\n\n\tChoice: ");
scanf("%d",&ch);

switch(ch)
{
	case 1:
	  teacher();
	  
		break;
	case 2:
	  student();
	  
		break;
}
return 1;
}


