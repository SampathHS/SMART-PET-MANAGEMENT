#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
struct animal
{
     char type[20];
     char breed[30];
     char vaccine[20];
     char food[20];
     char cosmetics[20];
     int price;
};
struct bird
{
    char type[20];
     char breed[30];
     char vaccine[20];
     char cosmetics[20];
     char food[20];
     int price;
};
struct fish
{
    char type[20];
     char breed[30];
     char vaccine[20];
     char cosmetics[20];
     char food[20];
     int price;
};
struct customer
{
    char name[20];
     int pno;
     char place[20];
};
void addbird(FILE *fp)
{
    struct bird a;
     printf("\nenter bird details:");
     printf("\nenter bird name :");
     scanf("%s",a.type);
     printf("\n enter breed:");
     scanf("%s",a.breed);
     printf("\nenter vaccine for bird:");
     scanf("%s",a.vaccine);
     printf("\nenter other extras(like cleaning and maintenence materials):");
     scanf("%s",a.cosmetics);
     printf("\n enter food to be feeded:");
      scanf("%s",a.food);
     printf("\nenter price of pet:");
     scanf("%d",&a.price);

    fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%d\n",a.type,a.breed,a.food,a.vaccine,a.cosmetics,a.price);
}

void addfish(FILE *fp)
{
     struct fish a;
     printf("\n enter fish details:");
     printf("\nenter fish name :");
     scanf("%s",a.type);
     printf("\n enter breed:");
     scanf("%s",a.breed);
     printf("\nenter vaccine for fish:");
     scanf("%s",a.vaccine);
     printf("\nenter other extras(like cleaning and maintenence materials):");
     scanf("%s",a.cosmetics);
     printf("\n enter food to be feeded:");
     scanf("%s",a.food);
     printf("\nenter price of pet:");
     scanf("%d",&a.price);

    fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%d\n",a.type,a.breed,a.food,a.vaccine,a.cosmetics,a.price);
}
void addanimal(FILE *fp)
{
     struct animal a;
     printf("\n enter animal details:");
     printf("\nenter animal name:");
     scanf("%s",a.type);
     printf("\n enter breed:");
     scanf("%s",a.breed);
     printf("\nenter vaccine for animal:");
     scanf("%s",a.vaccine);
     printf("\nenter other extras(like cleaning and maintenence materials):");
     scanf("%s",a.cosmetics);
     printf("\n enter food to be feeded:");
     scanf("%s",a.food);
     printf("\nenter price of pet:");
     scanf("%d",&a.price);

    fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%d\n",a.type,a.breed,a.food,a.vaccine,a.cosmetics,a.price);
}
void displayanimal(FILE *fp)
{
     struct animal a;
    if(fp==NULL)
    {
        printf("\n file is empty");
        return;
    }
    printf("\t************DETAILS OF ALL ANIMALS************");
    printf("\nANIMALNAME\tBREED\tFOOD\tVACCINE\t\tEXTRAS\t\tPRICE\n");

    while(fscanf(fp,"%s%s%s%s%s%d",a.type,a.breed,a.food,a.vaccine,a.cosmetics,&a.price)!=EOF)

    printf("%s\t\t%s\t%s\t%s\t\t%s\t\t%d\n",a.type,a.breed,a.food,a.vaccine,a.cosmetics,a.price);
}
void displaybird(FILE *fp)
{
    if(fp==NULL)
    {
     printf("\n file is empty");
     return;
    }
    struct bird a;
    printf("\t************DETAILS OF ALL BIRDS************");
    printf("\nBIRDNAME\tBREED\tFOOD\tVACCINE\t\tEXTRAS\t\tPRICE\n");

    while(fscanf(fp,"%s%s%s%s%s%d",a.type,a.breed,a.food,a.vaccine,a.cosmetics,&a.price)!=EOF)

    printf("%s\t\t%s\t%s\t%s\t\t%s\t\t%d\n",a.type,a.breed,a.food,a.vaccine,a.cosmetics,a.price);
}
void displayfish(FILE *fp)
{
     struct fish a;
     if(fp==NULL)
    {
     printf("\n file is empty");
     return;
    }printf("\t************DETAILS OF ALL FISHES************");
    printf("\nFISHNAME\tBREED\tFOOD\tVACCINE\t\tEXTRAS\t\tPRICE\n");

    while(fscanf(fp,"%s%s%s%s%s%d",a.type,a.breed,a.food,a.vaccine,a.cosmetics,&a.price)!=
    EOF)

    printf("%s\t\t%s\t%s\t%s\t\t%s\t\t%d\n",a.type,a.breed,a.food,a.vaccine,a.cosmetics,a.price);
}
void sortdisplayanimal(FILE *fp)
{
     struct animal a;
     char breed[20];
     int r1,r2,choice,flag=0;
     printf("\n1:for sorting based on breed\n2:sorting based on price range:");
     printf("\nenter choice :");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1:printf("\n enter breed to be shown :");
        scanf("%s",breed);

        while(fscanf(fp,"%s%s%s%s%s%d",a.type,a.breed,a.food,a.vaccine,a.cosmetics,&a.price)!=EOF)
     {
         if(strcmp(breed,a.breed)==0)
        {
        if(flag==0)
        {
        printf("\nANIMALNAME\tBREED\tFOOD\tVACCINE\t\tEXTRAS\t\tPRICE\n");
        flag=1;
        }

        printf("%s\t\t%s\t%s\t%s\t\t%s\t\t%d\n",a.type,a.breed,a.food,a.vaccine,a.cosmetics,a.price);
        }
     }
        if(flag==0)
        {
            printf("\n no animal of that breed found");
        }
     break;
        case 2:printf("\nenter range of the price :");
        scanf("%d%d",&r1,&r2);

        while(fscanf(fp,"%s%s%s%s%s%d",a.type,a.breed,a.food,a.vaccine,a.cosmetics,&a.price)!=EOF)
     {
         if(a.price>r1&&a.price<r2)
     {
     if(flag==0)
     {
         printf("\nANIMALNAME\tBREED\tFOOD\tVACCINE\t\tEXTRAS\t\tPRICE\n");
         flag=1;
     }

            printf("%s\t\t%s\t%s\t%s\t\t%s\t\t%d\n",a.type,a.breed,a.food,a.vaccine,a.cosmetics,a.price);
        }
     }
     if(flag==0)
     printf("\n no animal of that range found");
     break;
 }
}
void sortdisplaybird(FILE *fp)
{
 struct bird a;
 char breed[20];
  int r1,r2,choice,flag=0;
 printf("\n1:for sorting based on breed\n2:sorting based on price range:");
 printf("\nenter choice :");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:printf("\n enter breed to be shown :");
 scanf("%s",breed);

while(fscanf(fp,"%s%s%s%s%s%d",a.type,a.breed,a.food,a.vaccine,a.cosmetics,&a.price)!=
EOF)
 {if(strcmp(breed,a.breed)==0)
 {
 if(flag==0)
 {
 printf("\nBIRDNAME\tBREED\tFOOD\tVACCINE\t\tEXTRAS\t\tPRICE\n");
 flag=1;
 }

printf("%s\t\t%s\t%s\t%s\t\t%s\t\t%d\n",a.type,a.breed,a.food,a.vaccine,a.cosmetics,a.price);
 }
 }
 if(flag==0)
 printf("\n no bird of that breed found");
 break;
 case 2:printf("\nenter range of the price :");
 scanf("%d%d",&r1,&r2);

while(fscanf(fp,"%s%s%s%s%s%d",a.type,a.breed,a.food,a.vaccine,a.cosmetics,&a.price)!=
EOF)
 {if(a.price>r1&&a.price<r2)
 {
 if(flag==0)
 {
 printf("\nBIRDNAME\tBREED\tFOOD\tVACCINE\t\tEXTRAS\t\tPRICE\n");
 flag=1;
 }

printf("%s\t\t%s\t%s\t%s\t\t%s\t\t%d\n",a.type,a.breed,a.food,a.vaccine,a.cosmetics,a.price);
 }
 }
 if(flag==0)
 printf("\n no bird of that range found");
 break;
 }
}

void sortdisplayfish(FILE *fp)
{
 struct fish a;
 char breed[20];
 int r1,r2,choice,flag=0;
 printf("\n1:for sorting based on breed\n2:sorting based on price range:");
 printf("\nenter choice :");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:printf("\n enter breed to be shown :");
 scanf("%s",breed);

while(fscanf(fp,"%s%s%s%s%s%d",a.type,a.breed,a.food,a.vaccine,a.cosmetics,&a.price)!=EOF)
 {if(strcmp(breed,a.breed)==0)
 {
 if(flag==0)
 {
 printf("\nFISHNAME\tBREED\tFOOD\tVACCINE\t\tEXTRAS\t\tPRICE\n");
 flag=1;
 }

printf("%s\t\t%s\t%s\t%s\t\t%s\t\t%d\n",a.type,a.breed,a.food,a.vaccine,a.cosmetics,a.price);
 }
 }
 if(flag==0)
 printf("\n no fish of that breed found");
 break;
 case 2:printf("\nenter range of the price :");
 scanf("%d%d",&r1,&r2);

while(fscanf(fp,"%s%s%s%s%s%d",a.type,a.breed,a.food,a.vaccine,a.cosmetics,&a.price)!=EOF)
 {if(a.price>r1&&a.price<r2)
 {
 if(flag==0)
 {
 printf("\nFISHNAME\tBREED\tFOOD\tVACCINE\t\tEXTRAS\t\tPRICE\n");
 flag=1;
 }

printf("%s\t\t%s\t%s\t%s\t\t%s\t\t%d\n",a.type,a.breed,a.food,a.vaccine,a.cosmetics,a.price);
 }
 }
 if(flag==0)
 printf("\n no fish of that range found");
 break;
 }
}
void billanimal(FILE *fp)
{struct animal a;
char str[20];
int flag=0,phno;
FILE *fp4;
char breed[20];
 printf("\n enter breed purchased: ");
 scanf("%s",breed);

while(fscanf(fp,"%s%s%s%s%s%d",a.type,a.breed,a.food,a.vaccine,a.cosmetics,&a.price)!=
EOF)
 {if(strcmp(breed,a.breed)==0)
 {
 if(flag==0)
 {
 flag=1;
 }
fp4=fopen("customer","a");
struct customer c;
printf("\n enter the details of the customer :\n");
printf("\n enter name :");
scanf("%s",c.name);
strcpy(str,c.name);
printf("\nenter phone number :");
scanf("%d",&c.pno);
phno=c.pno;
printf("\n enter the place belongs to:\n");
scanf("%s",c.place);
fprintf(fp4,"%s\t%d\t%s\n",c.name,c.pno,c.place);
 fclose(fp4);
 printf("\n BILLGENERATING.");Sleep(1000);printf(".");Sleep(1000);printf(".");Sleep(1000);printf(".");Sleep(1000);
 printf("\n\n\n");
 printf("customer name:%s",str);
 printf("\nmobile number:%d",phno);
 printf("\n details of animal %s purchased:\n",str);

printf("ANIMALNAME:%s\nBREED:%s\nFOOD:%s\nVACCINE:%s\nEXTRAS:%s\n",a.type,a.breed,a.food,a.vaccine,a.cosmetics);
 printf("fair price of pet is:\n %d",a.price);
 printf("\n price including GST:%f",a.price+a.price*0.18);
 exit(0);
 }
 }
 if(flag==0)
 {
 printf("\nsorry the breed of your choice is not in our shop");
 return;
 }
}
void billfish(FILE *fp)
{struct fish a;
FILE *fp4;
int flag=0,phno;
char breed[20],str[20];
 printf("\n enter breed purchased: ");
 scanf("%s",breed);

while(fscanf(fp,"%s%s%s%s%s%d",a.type,a.breed,a.food,a.vaccine,a.cosmetics,&a.price)!=
EOF)
 {if(strcmp(breed,a.breed)==0)
 {
 if(flag==0)
 {
 flag=1;
 }
 fp4=fopen("customer","a");
struct customer c;
printf("\n enter the details of the customer :\n");
printf("\n enter name :");
scanf("%s",c.name);
strcpy(str,c.name);
printf("\nenter phone number :");
scanf("%d",&c.pno);
phno=c.pno;
printf("\n enter the place belongs to:\n");
scanf("%s",c.place);
fprintf(fp4,"%s\t%d\t%s\n",c.name,c.pno,c.place);
 fclose(fp4);
 printf("\n BILLGENERATING.");Sleep(1000);printf(".");Sleep(1000);printf(".");Sleep(1000);printf(".");Sleep(1000);
 printf("\n\n\n");
 printf("customer name:%s",str);
 printf("\nmobile number:%d",phno);
 printf("\n details of animal %s purchased:\n",str);

printf("FISHNAME:%s\nBREED:%s\nFOOD:%s\nVACCINE:%s\nEXTRAS:%s\n",a.type,a
.breed,a.food,a.vaccine,a.cosmetics);
 printf("fair price of pet is:\n %d",a.price);
 printf("\n price including GST:%f",a.price+a.price*0.18);
 exit(0);
 }
 }
 if(flag==0)
 {
 printf("\nsorry the breed of your choice is not in our shop");
 return;
 }
}
void billbird(FILE *fp)
{struct bird a;
FILE *fp4;
int flag=0,phno;
char breed[20],str[20];
 printf("\n enter breed purchased: ");
 scanf("%s",breed);

while(fscanf(fp,"%s%s%s%s%s%d",a.type,a.breed,a.food,a.vaccine,a.cosmetics,&a.price)!=
EOF)
 {if(strcmp(breed,a.breed)==0)
 {
 if(flag==0)
 {
 flag=1;
 }
 fp4=fopen("customer","a");
struct customer c;
printf("\n enter the details of the customer :\n");
printf("\n enter name :");
scanf("%s",c.name);
strcpy(str,c.name);
printf("\nenter phone number :");
scanf("%d",&c.pno);
phno=c.pno;
printf("\n enter the place belongs to:\n");
scanf("%s",c.place);
fprintf(fp4,"%s\t%d\t%s\n",c.name,c.pno,c.place);
 fclose(fp4);
 printf("\n BILLGENERATING.");Sleep(1000);printf(".");Sleep(1000);printf(".");Sleep(1000);printf(".");Sleep(1000);
 printf("\n\n\n");
 printf("customer name:%s",str);
 printf("\nmobile number:%d",phno);
 printf("\n details of animal %s purchased:\n",str);

printf("BIRDNAME:%s\nBREED:%s\nFOOD:%s\nVACCINE:%s\nEXTRAS:%s\n",a.type,
a.breed,a.food,a.vaccine,a.cosmetics);
 printf("fair price of pet is:\n %d",a.price);
 printf("\n price including GST:%f",a.price+a.price*0.18);
  exit(0);
 }
 }
 if(flag==0)
 {
 printf("\nsorry the breed of your choice is not in our shop");
 return;
 }
}

int main()
{FILE *fp1,*fp2,*fp3;
int choice1,choice2,choice3,choice4,choice5;
while(1)
{
 printf("\n 1:customer mode\n2: entry of new pet\n");
 printf("\n enter choice :\n");
 scanf("%d",&choice1);
 switch(choice1)
 { default :printf("\n enter valid choice");
 break;
 case 2:
 printf("\n enter the stock arrived data based on the pet type like animal ,bird and fish\n");
 while(1)
 {
 printf("\n1:animal\n2:bird\n3:fish\n4:pet entry over (exit)");
 printf("\n enter choice :\n");
 scanf("%d",&choice2);
 switch(choice2)
 {
 case 1:fp1=fopen("animal","a");
 addanimal(fp1);
 fclose(fp1);
 break;
 case 2:fp2=fopen("bird","a");
 addbird(fp2);
 fclose(fp2);
 break;
 case 3:fp3=fopen("fish","a");
 addfish(fp3);
 fclose(fp3);
 break;
 case 4:exit(0);
 default:printf("\nenter valid choice");
 }
 }
 case 1:
 while(1)
 {
 printf("\nDISPLAY:\n1:animals\t2:birds\t3:fish\nDISPLAY BASED ONSORTING:\n4:animal\t5:birds\t6:fish\n7:buy the pet ");
 printf("\n enter the choice :\n");
 scanf("%d",&choice3);
 switch(choice3)
 { default :printf("\n enter valid choice");
 break;
 case 1:fp1=fopen("animal","r");
 displayanimal(fp1);
 fclose(fp1);
 break;
 case 2: fp2=fopen("bird","r");
 displaybird(fp2);
 fclose(fp2);
 break;
 case 3: fp3=fopen("fish","r");
 displayfish(fp3);
 fclose(fp3);
 break;
 case 4:fp1=fopen("animal","r");
 sortdisplayanimal(fp1);
 fclose(fp1);
 break;
 case 5:fp2=fopen("bird","r");
 sortdisplaybird(fp2);
 fclose(fp2);
 break;
 case 6:fp3=fopen("fish","r");
 sortdisplayfish(fp3);
 fclose(fp3);
 break;
 case 7:printf("\nwould you like to buy pet from our shop");
 printf("\n1:yes\n2:no\n");
 scanf("%d",&choice4);
 switch(choice4)
 {
 case 1:printf("\n pet you buy is of:\n");
 printf("1:animal\n2:bird\n3:fish");
 printf("\n enter the choice:\n");
 scanf("%d",&choice5);
 switch(choice5)
 {default :printf("\n enter valid choice");
 break;
 case 1:
 fp1=fopen("animal","r");
 billanimal(fp1);
 fclose(fp1);
 break;
 case 2:
 fp2=fopen("bird","r");
 billbird(fp2);
 fclose(fp2);
 break;
 case 3:
 fp3=fopen("fish","r");
 billfish(fp3);
 fclose(fp3);
 break;
 }
 break;
 case 2:printf("\nTHANK YOU HAVE A NICE DAY");
 exit(0);
 default:printf("\n enter valid choice");
 break;
 }
 break;
 }
 }
 break;
 }
}
 return 0;
}


