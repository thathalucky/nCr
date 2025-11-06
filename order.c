/*

**WRITE A PROGRAM OF LIST OF 10 ORDERS IN STRUCTURE TYPE WITH DETAILS (ELECTRONICS): 
1.CHAR  ITEM NAME : 
2.INT PRICE:
3.CHAR PROCESSOR:
4.FLOAT PHONE VERSION:
5.CHAR PHONE TYPE:
6.INT FRONT CAMERA MP:
7.INT BACK CAMERA MP:
8.INT LENGTH:
9.INT BREDTH:
10.CHAR OS:
11.CHAR BRAND NAME:
12.INT WARRANTY:
13. INT MAXIMUM QUALITY (RESOLUTION):
14. INT TYPE OF NERWORK(3G/4G/5G):
15.CHAR WIRELESS CHARGING AVAILABILTY:(YES/NO)
16. CHAR TYPE OF CHARGER REQUIRED:(TYPEE -C / NORMAL)
17.INT TOTAL CAMERA AT BACK:
18.INT PATCH UPDATES AVAILABLE FOR :(3YEARS/4YEARS/5YEARS)
19.INT OS UPDATES AVAILABLE FOR:(2YEARS/3YEARS/4YEARS)


*/

#include<stdio.h>
#include<string.h>
typedef struct MobileCompleteDetails{
char itemname[100];
char chargertype[100];
char wirelesscharger[4];
char networktype[90];
int maxresolution;
int warranty;
char os[100];
int bredth;
int length;
int price ;
char processor[50];
float processorversion;
float phoneversion;
int frontcameramp;
int backcameramp;
int totalcamerasback;
int patchupdates;
int osupdates;
char phonetype[9];
char brandname[100];
}Mob;


void EnterMobileDetails(Mob *a){
printf("Enter the Item name : ");
scanf("%s",(*a).itemname);
printf("\n");
printf("Enter the charger type : ");
scanf("%s",(*a).chargertype);
printf("\n");
printf("Is there any availability of Wireless Charging (Yes/No) : ");
scanf("%s",(*a).wirelesscharger);
printf("\n");
printf("Patch updates are available for how many years : ");
scanf("%d",&a->patchupdates);
printf("\n");
printf("Os Updates are available for how many years : ");
scanf("%d",&a->osupdates);
printf("\n");
printf("What is OS used in this mobile : ");
scanf("%s",a->os);
printf("\n");
printf("Total camera in the back of the mobile : ");
scanf("%d",&a->totalcamerasback);
printf("\n");
printf("Enter the Front Camera Mega Pixels :");
scanf("%d",&a->frontcameramp);
printf("\n");
printf("Enter the Back Camera Mega Pixels : ");
scanf("%d",&a->backcameramp);
printf("\n");
printf("Enter the Phone Version : ");
scanf("%f",&a->phoneversion);
printf("\n");
printf("Ente the Processor Name : ");
scanf("%s",a->processor);
printf("\n");
printf("Enter the processor Version : ");
scanf("%f",&a->processorversion);
printf("\n");
printf("Enter the length and Breadth of the Mobile : ");
scanf("%d%d",&a->length,&a->bredth);
printf("\n");
printf("Enter the price of the Mobile  : ");
scanf("%d",&a->price);
printf("\n");
printf("Enter the Warranty for the Mobile : ");
scanf("%d",&a->warranty);
printf("\n");
printf("Enter the Maximum Resolution(Quality) on the Screen : ");
scanf("%d",&a->maxresolution);
printf("\n");
printf("Enter the Network Type Available (3G/4G/5G) : ");
scanf("%s",a->networktype);
printf("\n");
printf("Is it foldable or not (Yes/No) : ");
scanf("%s",a->phonetype);
printf("\n");
printf("What is the Brand Name : ");
scanf("%s",a->brandname);

}

void PrintInfo(Mob *A);

int main(){
Mob m1,m2;
printf("Enter the details of M1 mobile here  :\n");
EnterMobileDetails(&m1);
printf("Enter the details of M1 mobile here  :\n");
EnterMobileDetails(&m2);
printf("The details of M1 mobile is :\n");
PrintInfo(&m1);
printf("The details of M2 mobile is :\n");
PrintInfo(&m2);

    return 0 ;
}
void PrintInfo(Mob *A){

printf("Item name is : %s \n",A->itemname);
printf("Chartype is : %s\n",A->chargertype);
printf("Availability of Wireless Charging : %s\n",A->wirelesscharger);
printf("Brand Name of the Mobile is : %s\n",A->brandname);
printf("Is it Foldable : %s\n",A->phonetype);
printf("Network Type : %s\n",A->networktype);
printf("Maximum Resolution on the screen : %d",A->maxresolution);
printf("Warranty : %d",A->warranty);
printf("Pice of the Mobile : %d",A->price);
printf("The Deimenstions of the Mobile : %d x %d",A->length,A->bredth);
printf("Processor : %s and Processor Version :%f",A->processor,A->processorversion);
printf("Phone Version is : %f",A->phoneversion);
printf("The mega Pixels of Front and Back Camera are %d , %d ",A->frontcameramp,A->backcameramp);
printf("Total at the Back of the Camera : %d",A->totalcamerasback);
printf("OS : %s",A->os);
printf("OS Updates availablity : %d",A->osupdates);
printf("Patch Updates availablity : %d",A->patchupdates);



}
