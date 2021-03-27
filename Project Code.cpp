#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

char cities[50][50]={{"guntur"},{"vijayawada"},{"tenali"},{"mangalagiri"},{"amaravathi"},{"kollur"},{"chilakaluripet"},{"bapatla"},{"ponnur"},{"kollur"}};

char qwe[100],asd[100];

void kollipara(int i);
void vijayawada(int i);
void chkpet(int i);
void guntur(int i);
void tenali(int i);
void mangalagiri(int i);
void amaravathi(int i);
void kollur(int i);
void bapatla(int i);
void ponnur(int i);

void student(int);
void hospital();
void transport();
void details();
void foods();
void navic();
int power(int,int);
void design();

typedef struct
{
	char ln[20];
	char rn[15];
	char loc[100];
}NAVI;


NAVI alabs[10]={{{"matlab"},{"vbfftf3"},{"A block 5th Floor"}},{{"teclab"},{"vbftf2"},{"A block 4th Floor"}},{{"cplab"},{"vbt5"},{"A block 3rd Floor"}},{{"eglab"},{"vbs10"},{"A block 2nd Floor"}},{{"beeelab"},{"vbg1"},{"A blcok Groud floor"}}};
NAVI hlabs[30]={{{"bcilab"},{"vsf16"},{"H block 2nd Floor"}},{{"beeelab"},{"vgf1"},{"H block Ground Floor"}},{{"cplab"},{"vsf18"},{"H block 2nd floor"}},{{"chemistrylab"},{"vgf9"},{"H block Ground Floor"}}};
NAVI ulabs[10]={{{"eplab1"},{""},{"U block 2nd Floor"}},{{"eplab2"},{"chemistrylab"},{"U block 2nd Floor"}}};




int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,n,m=0,o,p,q,r,s,t,u,v,w,x,y; char z;
    
    for(i=0;i<720;i++)
        printf("*");
    for(i=0;i<7;i++)
        printf("\n");
    printf("\t\t\t\t\tWELCOME TO VIGNAN'S STUDENT GUIDE\n\n");
    for(i=0;i<9;i++)
        printf("\n");
    for(i=0;i<720;i++)
        printf("*");


	getche();
	system("cls");
	{
		m++;
		printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<          >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
		printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Welcome User,Please Select an option to Continue... >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
		printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<          >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
		student(0);
	}
	
//    total 86 chras per line
   
    while(1)
    {

		system("cls");
		design();
		
		if(qwe[0]==0)
			printf("\nHello User.....!\n");
		else
			printf("\n\nHey...%s,\n");
		printf("\n\n                 SELECT AN OPTION TO GET REQUIRED INFORMATION                   \n\n");
		
        printf("\\n\n-->PRESS 1 TO GET YOUR DETAILS<--\n\n\n-->PRESS 2 TO GET INFORMATION ABOUT YOUR SECTION AND COUNCELLOR<--\n\n\n-->PRESS 3 TO GET INFORMATION ABOUT COLLEGE TRANSPORT<--\n\n\n-->PRESS 4 TO GET INFORMATION ABOUT FOOD AROUND THE CAMPUS<--\n\n\n-->Press 5 For Campus Navigation<--\n\n\n-->PRESS 6 TO GET INFORMATION ABOUT HOSPITAL NUMBER\n\n\n ");
		n=getchar();
		if(n =='1')
			student(2);
        if(n=='2')
                details();
        if(n=='3')
                transport();
        if(n=='4')
            foods();
        if(n=='5')
        	navic();
        if(n=='6')
        	hospital();
        printf("\n\n");
        printf("Please Press $ to quit From The Program Or Any Key to go Back to Display Menu");
        z=getch();
        if(z == '$')
        	break;
        else
        	continue;
    }
    
}

void design()
{
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<          >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
	printf("*****************************<                    VIGNAN'S STUDENT GUIDE                    >***************************");
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<          >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	

}
void student(int u)
{
	
	int n,passcode,k,pass1;
	FILE *fptr;
	char username[100],name[100],branch[100],usname1[100],rollnumb[10];
	if(u != 1)
	{
	
	printf("1.Already Existing User\n\n2.New User\n\n3.Guest user\n");
	scanf("%d",&n);
	
	}
	if(n==1)
	{
		fptr=fopen("text4.txt","r");int z=0;
		printf("\nEnter Username\n");
		scanf("%s",usname1);
		printf("\nPlease Enter 4 Digit passcode\n");

		scanf("%d",&pass1);
		while(fscanf(fptr,"%s\t%d\t%s\t%s\t%s\n",username,&passcode,name,branch,rollnumb)==5)
		{
			k=strcmp(usname1,username);
			if(k==0)
			{
				if(pass1==passcode)
				{
					system("cls");
					strcpy(qwe,name);
					strcpy(asd,rollnumb);
					printf("Helloo!!!\n\n\nWelcome Mr./Mrs.%s........These are your details\n\n\n",name);
					printf("Student Name : %s\n\nStudent Branch : %s\n\nRegister Number : %s",name,branch,rollnumb);
					printf("\n\n%s\n\n%s\n",qwe,asd);
					getche();
					
					z++;
				}
			}
		}
		if(z==0)
			printf("Username and Password didnot match or not found in directory please search again.\nU will ENter into Guest mode.\n\n");
			getche();
	}
	else if(n==2)
	{
		fptr=fopen("text4.txt","a");
		printf("Please choose a username without any spaces and 4 digit number passcode");
		printf("\nPlease enter username:\n");
		scanf("%s",username);
		printf("\nEnter Passcode\n");
		scanf("%d",&passcode);
		printf("Please Enter Your Name by using underscores\n");
		scanf("%s",name);
		printf("Please Enter your Branch\n");
		scanf("%s",branch);
		printf("Please enter roll number\n");
		scanf("%s",rollnumb);
		fprintf(fptr,"%s\t%d\t%s\t%s\t%s\n",username,passcode,name,branch,rollnumb);
		fclose(fptr);
		printf("\n\n\n*********Thanks For saving your details..Press Enter To go to Main Menu********\n\n");
		getche();
	}
	else if(n==3)
		printf("\n\nYou are in Guest Mode,Please Goback to menu to view other features..\n");
}
void details()
{

	
	sidd :
		system("cls");design();
	char init[15]; int sum=0,b,k,z,o;
	b=5;k=4;
	
	if(asd[0]  != 0)
			printf("Hello.. %s\n",qwe);
	else
		printf("Hello...Guest\n");
		
	if(asd[0] == 0)
		printf("\nPLEASE INPUT YOUR ROLL NUMBER\n\n");
	else
		printf("Press 1 to Show Your Section Details or 2 to view other Students Details");
	o=getche();
	if(o=='1')
//	if(asd[0] != 0)
		strcpy(init,asd);
	else
		scanf("%s",init);
	while(init[b] != '\0')
	{
		sum+=(init[b]-48)*pow(10,k--);
		b++;
	}
	FILE *fptr;
	fptr = fopen("text2.txt","r");
	int r1,r2,r3,r;
	char s[100],s1[100];
	char ph[20];
	while((fscanf(fptr,"%d\t%d\t%d\t%s\t%[^\n]\n",&r1,&r2,&r3,s1,s)==5))
	{
	
		if(r1<=sum && r2 >= sum)
		{
			printf("You Belong to Section-%d\nYour Class is %s\nYour Councellor is Dr.%s\n",r3,s1,s);
	}
	
}
	fclose(fptr);
	printf("\n\n");
	printf("PRESS E TO SEARCH AGAIN OR ANY KEY TO EXIT");
	z=getche();
	if(z == 'e' || z == 'E')
		goto sidd;
	

}

void transport()
{
	siidhu:
		char city[20];int o,l,k,z;
	system("cls");design();
	printf("-->Please input the city you want to go\n");
	scanf("%s",city);
	int a=0;
	for(int i=0;i<20;i++)
	{
		k=strcmpi(city,cities[i]);
		if(k==0)
		{
			o=i+1;
			a++;
		}
	}
		
    
    if(a==0)
    {
        printf("Input Area not found in the directory\nplease select your destination from following cities\n1.Guntur\n2.Vijayawada\n3.Tenali\n4.Managalagiri\n5.Amaravati\n6.Kullur\n7.Kollipara\n8.Chilakaluripeta\n");
        scanf("%d",&o);
	}
    
        switch(o)
        {
        	case 1 :	
			{
        		printf("\n\nYou can get into one of these buses\n\n");
				guntur(1);
				printf("\n");
				guntur(2);printf("\n");guntur(3);printf("\n");guntur(4);	
			}	
				break;
        	case 2 :
			{
				printf("\n\nYou can get into one of these buses\n\n");

				 vijayawada(1);printf("\n");vijayawada(2);printf("\n");vijayawada(3);printf("\n");
			}		break;
				        			break;
        	case 3 :{	printf("\n\nYou can get into one of these buses\n\n");
				tenali(1);printf("\n");tenali(2);printf("\n");tenali(3);printf("\n");tenali(4);
			}	break;

        	case 4 :mangalagiri(1);
        			break;
        	
        	case 5 : amaravathi(1);
        			break;
        	case 6 :	kollur(1);
        			break;
        	case 7 :	chkpet(1);
        			break;
        			
        		default :
        				printf("please check the input number and try again");
        	}
        	printf("\nPresss Y to search again");
        	z=getche();
        	if(z=='y'||z=='Y')
        		goto siidhu;


   			
	
	}

void guntur(int i)
{
    if(i == 1)
        printf("\nYou can get into 'Lakshmipuram' Bus\nThe Bus number is APO07 TH 7873\nDriver Contact number is ''Sk. Rafi(ph)-9704957677''");
    if(i==2)
        printf("\nYou can get into 'SVN Colony' Bus\nThe Bus number is APO07 TC 9984 \nDriver Contact number is ''T.Nageswara Rao - 9966809719''");
    if(i == 3)
        printf("\nYou can get into 'Gate Route' Bus\nThe Bus number is APO07 TE 1944\nDriver Contact number is ''M.Srinivasa Rao''");
    if(i == 4)
        printf("\nYou can get into 'Chuttugunta' Bus\nThe Bus number is APO07 TE 9983\nDriver Contact number is ''M.Srinivasa Rao' - 8897539689'");
}
void vijayawada(int i)
{
        if(i == 1)
        printf("\nYou can get into 'Gollapudi Route' Bus\nThe Bus number is APO07 TW 7133\nDriver Contact number is ''K.Venkateswar Rao -9704466461''");
    if(i==2)
        printf("\nYou can get into 'Eedupugallu Route' Bus\nThe Bus number is APO07 TW 7124 \nDriver Contact number is ''K.Koteswara Rao - 9182118921''");
    if(i == 3)
        printf("\nYou can get into 'Food Junction' Bus\nThe Bus number is APO07 TW 7128\nDriver Contact number is ''K . Nagi reddy - 9515306182''");

}
void tenali(int i)
{
        if(i == 1)
        printf("\nYou can get into 'Montessori Route' Bus\nThe Bus number is APO07 TH 4045\nDriver Contact number is ''N.Nagaraju - 9010484659''");
    if(i==2)
        printf("\nYou can get into 'Ithanagar Route' Bus\nThe Bus number is APO07 TH 4046 \nDriver Contact number is ''B.Venkateswara Rao- 9989366522''");
    if(i == 3)
        printf("\nYou can get into 'Chinnaravuri Park' Bus\nThe Bus number is APO07 TG 364\nDriver Contact number is ''K.Sambasiva Rao - 9951962514''");
    if(i == 4)
        printf("\nYou can get into 'Sivaji Bomma' Bus\nThe Bus number is APO07 TG 365\nDriver Contact number is ''Ch.Venu Gopal - 9441535443''");

}
void mangalagiri(int i)
{
        if(i == 1)
        printf("\nYou can get into 'Mangalagiri' Bus\nThe Bus number is APO07 TM 6192\nDriver Contact number is ''Koteswara Rao - 9666643699''");
}
void amaravathi(int i)
{
        if(i == 1)
        printf("\nYou can get into 'Amaravathi' Bus\nThe Bus number is APO07 TM 6192\nDriver Contact number is ''Sk.saida - 949459411''");
}
void kullur(int i)
{
        if(i == 1)
        printf("\nYou can get into 'Kullur' Bus\nThe Bus number is APO07 TC 9551\nDriver Contact number is ''D.SatyaNaryana - 9968386466''");
}
void kollipara(int i)
{
        if(i == 1)
        printf("\nYou can get into 'kollipara' Bus\nThe Bus number is APO07 TH 4043\nDriver Contact number is ''K.Srinivsa Reddy - 9959905607''");
}
void chkpet(int i)
{
        if(i == 1)
        printf("\nYou can get into 'Chilakaluripet' Bus\nThe Bus number is APO07 TW 7182\nDriver Contact number is ''Ch.Yacob - 8121450463''");
}
void kollur(int i)
{
	if(i == 1)
        printf("\nYou can get into 'Kollur' Bus\nThe Bus number is APO07 TW 9551\nDriver Contact number is ''Satyanarayana - 9963386466''");

}
void bapatla(int i)
{
	if(i == 1)
        printf("\nYou can get into 'bapatla' Bus\nThe Bus number is APO07 TW 7182\nDriver Contact number is ''Ch.Yacob - 8121450463''");

}
void ponnur(int i)
{
	if(i == 1)
        printf("\nYou can get into 'Ponnur' Bus\nThe Bus number is APO07 TW 7182\nDriver Contact number is ''Ch.Yacob - 8121450463''");

}

void foods()
{
    int res;
    char e;
    system("cls");design();
printf("-->Please Select One Option from Below For respective type of restaurant:\n");
siddhu :
	
printf("*Press 1 for Luxury and Comfort*\n\n");
printf("*press 2 for Cheap*\n\n");
printf("*press 3 for Andhra Meals*\n\n");
printf("*Press 4 for Snacks and Fast Foods*\n\n");
printf("*Press 5 for Tiffins*\n\n");
printf("*Press 9 to Return to Main Menu*\n");
scanf("%d",&res);
if(res == 9)
	return;
if(res==1)
{
vamsee :
int nv[100],i=0;
nv[0]=10;
system("cls");
printf("\n*These are the Available Restaurants With Comfortable and Aesthetic Atmosphere*\n");
printf("\n\n1.FTW\n\n2.MINI HUNGER\n\n3.MEAT AND EAT\n\n4.FOOD AFFAIR\n\n5.SITHARA GRAND\n\n6.TASTY BUDS\n\n");

while(nv[i]!='\0')
{
    scanf("%d",&nv[i]);
if(nv[i]==1)
{
	system("cls");printf("\n\n\n\nFTW is a mini restaurant Located around 100 to 200m from campus.You can reach there by walking for a minute or two From Mai Gate towards Left\n\nrating:4.2\n\ntimings:12:00-22:00\n\nopens everyday\n\ncontact no:0810688990\n\npopular dishes:\nSINGLE CHICK DUM BIRYANI\n2CHICKEN FRIED RICE\nBUTTER NAAN WITH PANEER BUTTER MASALA\nFRY PIECE BRIYANI\n\navg of 150/- per person\n\nplus codes:6GMW+4F Vadlamudi,Andhra Pradesh\n");
}
else if(nv[i]==2)
{
	system("cls");
printf("\n\nMINI HUNGER is a mini restaurant Located around 300 to 400m from gate,You can Reach there by walk\n\nrating:4.3\n\ntimings:12:00-22:30\n\nopens everyday\n\ncontact no:094941457\n\npopular dishes:\n1.SINGLE CHICK DUM BIRYANI\nBONE LESS BIRYANI\nFRY PEICE BRIYANI\n\navg of 180/- per person\n\nplus codes:6GMW+8H Vadlamudi,Andhra Pradesh\n");
}
else if(nv[i]==3)
{
system("cls");//design();
printf("\n\nMEAT AND EAT is a good place to spend time with friends and there are two M&E's around the Campus.\n\n1 Infront of Vignan Lara Gate.\2.In MHP of Our University.\n\nrating:4.4\n\ntimings:12:00-22:00\n\nopens everyday\n\npopular dishes:\n1.BUCKET CHICKEN\n2.CHICKEN NUGGETS\n3.CHICKEN BURGER\n\navg of 200/- per person\n\nplus codes:6HP3+62 Vadlamudi,Andhra Pradesh\n");
}
else if(nv[i]==4)
{
system("cls");//design();
printf("\n\nFOOD AFFAIR is a mini family restaurant located at the Cross road.It is about 5 to 10 km's From the campus.\n\nYou Can Go There in an Auto Which costs 5rs.\n\nrating:3.5\n\ntimings:12:00-23:30\n\nopens everyday\n\ncontact no:09160526270\n\npopular dishes:\n1.CHIC FAMILY PACK\n2.SINGLE CHICK DUM BIRYANI\n3.MUTTON BIRYANI\n\navg of 150/- per person\n\nplus codes:6HQ6+CR Vadlamudi,Andhra Pradesh\n");
}
else if(nv[i]==5)
{
system("cls");//design();
printf("\n\nSITHARA GRAND is a Costly family restaurant located at the cross roads.It is about 5 to 10 km's From the campus.\n\nYou Can Go There in an Auto Which costs 5-10rs.\n\nrating:4.1\n\ntimings:12:00-23:30\n\nopens everyday\n\npopular dishes:\n1.CHIC FAMILY PACK\n2.BUTTER NAAN WITH PANEER BUTTER MASALA\n3.MUTTON BIRYANI\n\navg of 180/- per person\n");
}
else if(nv[i]==6)
{
system("cls");//design();
printf("\n\nTASTY BUDS is a Costly family restaurant located at opposite to the campus.It is about 50 to 100 m's From the campus.\nYou Can Go There  by walk,it just takes 2 to 3 min\n\nrating:3.1\ntimings:12:00-23:30\nopens everyday\npopular dishes:\n1.CHIC FAMILY PACK\n2.SINGLE BIRYANI\n3.MUTTON BIRYANI\n\navg of 180/- per person\n\nPLUS CODES:6GMX+Q7 Vadlamudi,Andhra Pradesh\n");
	
}
i++;
printf("\n\n***Press 1 To view Other Restaurants or any key to go back to restaurants types\n");
e=getche();
if(e=='1')
{
	system("cls");design();
	goto vamsee;
}
else
{
	system("cls");design();
    goto siddhu;
}
}
}
else if(res==2)
{
	system("cls");design();
    int ch[100],c=0;
    ch[0]=10;
    printf("\n\n-->These are Available Hotels For Cheap and Healthy type:\n\n");
vamc:
printf("\n\n1.RAJESH FAST  FOODS\n\n2.AUNTY KICHIDI\n\n3.LAKSHMI FAST FOODS\n");
while(ch[c]!='\0')
{
    scanf("%d",&ch[c]);
if(ch[c]==1)
{
	system("cls");design();
printf("\n\nRajesh fast foods is beside to the campus.You Can Reach There By walk.It is around 50meters from Main Gate.\n\nrating:3.2\n\ntimings:12:00-20:00\n\nopens everyday\n\npopular dishes:\nMIXED FRIED RICE\nCHICKEN FRIED RICE AND NOODLES\nVEG MANCHURIA\nKICHIDI AVAILABE ON WED,SAT\n\navg of 60/- per person\n\nLOCATION:beside to FTW restaurant\n");
}
else if(ch[c]==2)
{system("cls");design();
printf("\n\nAUNTY KICHIDI is a mini fast food centre Infront of the campus.You can Find it Rght Infront of Main Gate\n\nrating:4.0\n\ntimings:12:00-21:30\n\nopens everyday\n\npopular dishes:\nFRY PIECE KICHIDI\nFRY PEICE BRIYANI\n\navg of 100/- per person\n\nLOCATION:back to tasty buds restaurant\n");
}
else if(ch[c]==3)
{system("cls");design();
printf("\n\nLAKSHMI FAST FOODS is a mini fast food centre opp to the campus\n\nrating:3.0\n\ntimings:12:00-19:00\n\nopens everyday\n\npopular dishes:\nSINGLE CHIC DHUM BIRYANI\nCHIC FRIED RICE AND NOODLES\n\navg of 80/- per person\n\nLOCATION:Straight opposite to the campus and beside to the sri sai boys hostel\n");
}

c++;
printf("\n\n***Press 1 To view Other Restaurants or any key to go back to restauarants types\n");
e=getche();
if(e=='1'){
system("cls");
	goto vamc;
}else
 {
system("cls");design();;	   goto siddhu;
}
}
}
else if(res==3)
{
	system("cls");design();
    int an[100],a=0;
    an[0]=10;
    printf("*These Places Serve Tasty Andhra Meals and At cheap Cost*\n");
repui:
printf("\n\n1.FEEL HOME BOYS HOSTEL\n\n2.SRI SAI BOYS HOSTEL\n");
while(an[a]!='\0')
{	
    scanf("%d",&an[a]);
if(an[a]==1)
{
system("cls");design();
printf("\n\nFEEL HOME BOYS HOSTEL is opp to the rajesh fast foods\n\nrating:4.3\n\ntimings:12:00-15:00\n\nopens everyday\n\npopular dishes:\nANDHRA MEALS\nCHICKEN AVAILABE ON SUNDAYS\navg of 60/- per person\n\nplus codes:6GMW+7F Vadlamudi,Andhra pradesh\n");
}
else if(an[a]==2)
{
system("cls");design();
printf("\n\n\n\nSRI SAI BOYS HOSTEL is opp to the vignan university\n\nrating:3.9\n\ntimings:12:00-15:00\n\nopens everyday\n\npopular dishes:\nANDHRA MEALS\nCHICKEN AVAILABE ON SUNDAYS\n\navg of 50/- per person\n\nplus codes:6GMX+Q7 Vadlamudi,Andhra pradesh\n");
}
a++;
printf("\n\n***Press 1 To view Other Restaurants or any key to go back to restauarants types\n");
e=getche();
if(e=='1')
{
system("cls");
	goto repui;
}
else
{
  system("cls"); design();
   goto siddhu;
  }
}
}
if(res==4)
{
backside:
int sn[100],p=0;
system("cls");
sn[0]=10;
printf("*These Places Serve Tasty Fast Foods*\n");
printf("\n\n1.punugula shops\n\n2.pani puri\n\n3.juice shops\n\n4.kebabs\n");
while(sn[p]!='\0')
{
    scanf("%d",&sn[p]);
if(sn[p]==1)
{
	system("cls");
printf("\n\nThere are two shops infront of the campus\n\nrating:3.5\n\ntimings:11:00-20:00\n\nopens everyday\n\npopular dishes:\nEGG BURJI\nBURJI MASALA\nPANIPURI\n\navg of 30/- per person\n");
}
else if(sn[p]==2)
{
	system("cls");design();
printf("\n\nThere is a panipuri shop beside to the campus\n\nrating:4.0\n\ntimings:15:00-20:00\n\nopens everyday\n\npopular dishes:\nDAHI PURI\nMASALA PURI\nBHEL PURI\nSAMOSA CHAT\n\navg of 40/- per person\n\nLOCATION:beside to the sugarcane juice shop\n");
}
else if(sn[p]==3)
{
system("cls");design();
printf("\n\nThere is a sugar cane juice shop at starting of campus and\\nnA FRUIT JUICE SHOP\n\nrating:4.8\n\ntimings:09:00-21:00\n\nopens everyday\n\nFor fruit juice popular dishes are:\nBANANA JUICE\nPINE-APPLE JUICE\nPOMEGRANATE JUICE\nSAPOTA JUICE\n\nAND above all are available with ICE CREAMS\n\navg of 50/- per person\n\nLOCATION:inside the campus in MHP\n");
}
else if(sn[p]==4)
{
system("cls");design();
printf("\n\nThere is a small kebab shop beside to the busstop\nrating:4.0\ntimings:15:00-19:00\nopens MON-SAT\npopular dishes:\nSPL KEBAB\nLEG PIECES\nWINGS\nTANDOORI\navg of 60/- per person\n");
}
p++;
printf("\n\n***Press 1 To view Other Restaurants or any key to go back to restaurants types\n");
e=getche();
if(e=='1')
{
	system("cls");design();
	goto backside;
}
else
{
	system("cls");design();
    goto siddhu;
}
}
}

else if(res==5)
{
	system("cls");design();
	printf("*select hotels for more details*\n");
    int rn[100],l=0;
    rn[0]=10;
    printf("1.BLUNCH\n\n2.HARSHA HOTELS\n");
pora:

while(rn[l]!='\0')
{
    scanf("%d",&rn[l]);
if(rn[l]==1)
{
	system("cls");design();
printf("\n\n\nBLUNCH is located in the campus\n\nrating:4.0\n\ntimings:08:00-18:00\n\nopens MON-SAT\n\npopular dishes:\nALL VARITIES OF DOSA\nIDLY SAMBAR\nPAROTA AND CHAPATHI\n\navg of 40/- per person\n\nLocation: Located in MHP in UNIVERSITY\n\n");
}
else if(rn[l]==2)
{system("cls");design();
printf("\n\nHARSHA TIFFIN CENTRE beside to the campus\n\nrating:3.5\n\ntimings:09:00-16:00\n\nopens everyday\npopular dishes:\nEGG DOSA\navg of 30/- per person\n\nLOCATION:beside to the sugarcane juice shop\n\n\n");
}
l++;
printf("\n\n***Press 1 To view Other Restaurants or any key to go back to restauarants types\n");
e=getche();
if(e=='1'){
system("cls");design();
	goto pora;
}else
 {
system("cls");design();
	   goto siddhu;
}
}
}

}



void navic()
{
	int d,c,n,a,k=0;
	char b[20],t;
	system("cls");
	printf("\n\nPress 1 for Labs Info\n\n");
	printf("\n\nPress 2 for Department Staff Info\n\n");
	printf("\n\nPress 3 for College Buildings && Offices Info\n\n");
	printf("\n\nPress 4 for Physical & sport Grounds  Info\n\n");
	printf("\n\nPress 5 for canteens && Xerox Shop Info\n\n");
	scanf("%d",&a);
	system("cls");design();
	if(a==1)
		{
			system("cls");design();
			printf("\n\nPress 1 For searching by Room Number\n\n");
			printf("\n\nPress 2 for searching by Lab Name\n\n");
			scanf("%d",&c);
			if(c==1)
			{
				while(1)
				{
				printf("\nPlease enter the room number:");
				scanf("%s",b);
				
				
				
					for(int j =0;j<10;j++)
					{
					
						d=strcmpi(b,alabs[j].rn);
							if(d==0)
							{
								printf("\n\n%s is %s which is loacated at %s\n\n",alabs[j].rn,alabs[j].ln,alabs[j].loc);
								k++;
							}
					}
					for(int j=0;j<10;j++)
					{
					
						d=strcmpi(b,hlabs[j].rn);
							if(d==0)
							{
								printf("\n\n%s is %s which is loacated at %s\n\n",hlabs[j].rn,hlabs[j].ln,hlabs[j].loc);
								k++;
							}
					}
					for(int j=0;j<10;j++)
					{
					
						d=strcmpi(b,ulabs[j].rn);
							if(d==0)
							{
								printf("\n\n%s is %s which is loacated at %s\n\n",ulabs[j].rn,ulabs[j].ln,ulabs[j].loc);
								k++;
							}
					}
				
				
				if(k==0)
					printf("\n\nPlease Check the Input Data and Try Again\n\n");
			}
			
		}
		 else if(c==2)
		{
		while(1)
				{
				printf("\nPlease enter the room name without any symbols and spaces:");
				scanf("%s",b);
				
				
					for(int j =0;j<10;j++)
					{
					
						d=strcmpi(b,alabs[j].ln);
							if(d==0)
							{
								printf("%s is %s which is loacated at %s",alabs[j].rn,alabs[j].ln,alabs[j].loc);
								k++;
							}
					}
					for(int j=0;j<10;j++)
					{
					
						d=strcmpi(b,hlabs[j].ln);
							if(d==0)
							{
								printf("%s is %s which is loacated at %s",hlabs[j].rn,hlabs[j].ln,hlabs[j].loc);
								k++;
							}
					}
					for(int j=0;j<10;j++)
					{
					
						d=strcmpi(b,ulabs[j].ln);
							if(d==0)
							{
								printf("%s is %s which is loacated at %s",ulabs[j].rn,ulabs[j].ln,ulabs[j].loc);
								k++;
							}
					}
				
				
				if(k==0)
					printf("\n\nPlease Check the Input Data and Try Again or Q to quit\n\n");
					char z = getche();
					if(z=='q' || z== 'Q')
						break;
			}
			
		}
	}
	else	if(a==2)
	{
		printf("Select the Department for the respective faculty:\n\n");
		printf("1.S&H\n\n");
		printf("2.CSE\n\n");
		printf("3.Mechanical\n\n");
		printf("4.Chemical\n\n");
		printf("5.IT\n\n");
		printf("6.EEE\n\n");
		printf("7.ECE\n\n");
		printf("8.Civil\n\n");
		printf("9.Agriculture\n\n");
		printf("10.Foodtech\n\n");
		printf("11.Biotech\n\n");
		//printf("12.\n\n");
		scanf("%d",&n);
		system("cls");design();
		if(n==1)
			printf("S&H department Faculty is available in A block\n");
		if(n==2)
			printf("CSE department Faculty is available in the Pharmacy block\n");
		if(n==3)
			printf("Mechanical department Faculty is available in U block Ground floor\n");
		if(n==4)
		printf("Chemical department Faculty is available in H block Ground floor\n");
		if(n==5)
		printf("IT department is available in H block Ground floor\n");
		if(n==6)
		printf("EEE department is available in H block 1st floor\n");
		if(n==7)
		printf("ECE department is available in H block 2nd floor\n");
		if(n==8)
		printf("Civil department is available in U block 1st floor\n");
		if(n==9)
		printf("Agriculture department is available in \n");
		if(n==10)
		printf("Foodtech department staff is available in H block Ground floor\n");
		if(n==11)
		printf("Biotech department is available in \n");
		if(n==12)
		printf("\n");
		getche();
		system("cls");design();
	}
	else if(a==3)
	{
		printf("The Following are the Main blocks in our College\npress the respective keys to get their info\n\n");
		printf("\n\n-->1.A BLOCK\n\n-->2.H-BLOCK\n\n-->3.U BLOCK\n\n-->4.Adminstartive Offices\n\n-->5.Pharmacy Block\n\n-->6.Boys & Girls Hostels\n\n-->7.Convocation Hall\n\n-->8.Seminar Halls\n\n --> 9.COLLEGE LIBRARY\n\n--> 10.GUEST HOUSE\n");
		int t;
		scanf("%d",&t);
		if(t ==1)
		{
			system("cls");	design();
			printf("\n\nA block is the main block for S&H Department.\nMost of the Administrative works go on in this block.\nIt is located to the Right side of the Main Gate Right After Entering Into The College\n\n");
		}	
		if(t==2)
		{
			system("cls");	design();
			printf("\n\nH block is the Main Department for ECE & EEE Branches.\n\nIt is located opposite to the A block,You can Recognise it with our college's Motto TECHNOLOGY WITH HUMAN FACE engraved on it\n\n");
		}if(t==3)
		{
			system("cls");	design();
			printf("\n\nU block is the Main Department for Branches.\n\nYou can reach there by Going Straight to the end from Main Gate and Taking Left turn and walk A few meters from There.\n\nYou can recognise it with the Shape of U which resembles its Name.\n\n");
		}
		if(t==4)
			{
				system("cls");design();
				printf("Adminstartive block Consists of All the main Offices.They include\n1.Finance Office which is at A block Ground Floor\n2.DEO Office in A block 2nd Flooe\n3.V.Chairman Office in A block 4th Floor\n5.Chairman Office in A block 5th Floor");
			}
		if(t ==5)
			{
				system("cls");	design();
			printf("\n\nPharmacy block is the Main Department for CSE & Pharmacy Branches.\nYou can reach there by Going Straight to the end from Main Gate and Taking right turn and walk A few meters from There.\n\n");
			}
		if(t==6)
			{
				system("cls");design();
				printf("Select from following:\n\n1.BOYS HOSTEL\n\n2.GIRLS HOSTEL\n\n");
				int ht;
				scanf("%d",&ht);
				if(ht==1)	
				printf("Boys Hostel Has Two blocks:(AC and NON-AC) present in between H block and Pharmacy block\n\nYou can reach there by Going straight to end from main gate\n\n");
				if(ht==2)
				printf("girls Hostel Has Two blocks:(AC and NON-AC) present beside to the lara campus\n\nYou can reach there by Going to the Lara campus and from there turn left to reach the girls Hostel\n\nNOTE:ONLY GIRLS ARE ALLOWED INTO THE HOSTEL\n\n");
			}
		if(t==7)
		{
			system("cls");design();
			printf("\nConvocation Hall is the main platform for all types of events\n\nIt is present Beside to the U block\n\nYou can go there by Gong straight from the lara gate opposite to  the Basket Ball Court\n\n");
		}
		if(t==8)
		{
			system("cls");design();
			int sm;
			
			printf("\nSELECT FROM THE FOLLOWING SEMINAR HALLS:\n\n1.SPOORTHY SEMINAR HALL\n\n2.SANGAMAM SEMINAR HALL\n\n3.SRAVANTHI SEMINAR HALL\n\n4.SRUJANA SEMINAR HAL\n\n");
			scanf("%d",&sm);
			if(sm==1)
			printf("\nSpoorthy Seminar Hall is located in A block 4th floor\nroomno:vbftf1\n\n");
			if(sm==2)
			printf("\nSravanthi Seminar Hall is located in A block 5th floor\nroomno:vbfftf1\n\n");
			if(sm==3)
			printf("\nSravanthi Seminar Hall is located in A block 4th floor\nroomno:vgtf18\n\n");
			if(sm==4)
			printf("\nSpoorthy Seminar Hall is located in A block 4th floor\nroomno:vgf11\n\n");
		}
		if(t==9)
		{
			system("cls");design();
			printf("\nCollege library is located left to the A block from the entrance:");
		}	
		if(t==10)
		{
			system("cls");design();
			printf("Guest House is located beside to the Convocation hall\n\nYou can go there from lara gate beside to the Volley Ball court\n\n");
		}
		
	}
	else if(a==4)
	{
		printf("\nSELECT FROM THE FOLLOWING\n\n");
		printf("1.Basket Ball\n\n");
		printf("2.Foot ball\n\n");
		printf("3.Cricket\n\n");
		printf("4.Kho-Kho\n\n");
		printf("5.Table Tennis\n\n");
		printf("6.Athletics\n\n");
		printf("7.Volley Ball\n\n");
		printf("8.Throw Ball\n\n");
		printf("9.Badminton\n\n");
		printf("10.Kabaddi\n\n");
		printf("11.GYM\n\n");
		printf("12.JUDO\n\n");
		printf("13.NCC\n");
		int sp;
		scanf("%d",&sp);
		if(sp==1)
		{
			system("cls");design();
			printf("There are two Basket Ball courts located opposite to the Convocation Hall\n\nCoach is ISMAIL\n\nMobile:9885451097\n\n");
		}
		if(sp==2)
		{
			system("cls");design();
			printf("Foot Ball Ground is Located opposite to the U block\n\nCoach is Venkareswarlu\n\nMobile:9542206438\n\n");
		}
		if(sp==3)
		{
			system("cls");design();
			printf("MAIN Cricket Ground is located opposite to the U block\n\nNet practises are located opposite to girls hostels\n\nCoach:\n\nMoile:\n\n");
		}
		if(sp=4)
		{
			system("cls");design();
			printf("Kho-Kho ground is located in the corner of main Ground beside to kabaddi ground\n\n");
		}
		if(sp==5)
		{
			system("cls");design();
			printf("Table Tennis is loacted in the U block beside to the Sports room\n\nCoach:Prasad\n\nMobile:9849556230\n");
		}
		if(sp==6)
		{
			system("cls");design();
			printf("Athletics is located in Main ground of VU\n\nCoach:Dasaradh sir\n\n");
		}
		if(sp==7)
		{
			system("cls");design();
			printf("Volley Ball court is located beside to the Convocation Hall and Guest House\n\nCoach:Khan sir\n\nMobile:9966536923\n\n");	
		}
		if(sp==8)
		{
			system("cls");design();
			printf("Throw Ball courts are located back to the boys hostel and beside volley ball courts\n\nCoach:M.Navya\n\nMobile:8639400358\n\n");
		}
		if(sp==9)
		{
			system("cls");design();
			printf("Badminton courts are located in the the boys hostel and in the Pharmacy block\n\n");
		}
		if(sp==10)
		{
			system("cls");design();
			printf("Kabaddi courts are located in corner to the main ground beside to Kho-Kho grounds\n\nCoach:M.Navya\n\nMobile:8639400358\n\n");
		}
		if(sp==11)
		{
			system("cls");design();
			printf("GYM for boys is located in th boys Hostel \n\nPublic GYM is located in the Main ground\n\n");
		}
		if(sp==12)
		{
			system("cls");design();
			printf("JUDO Training is located in the Convocation hall and U block\n\nYoucan contact Khan sir for more details\n\nmobile:9966536923\n");
		}
		if(sp==13)
		{
			system("cls");design();
			printf("NCC Training is located in U block and the Main ground\n\nHead:\n\nMobile:\n\n");
		}
	}
	else if(a==5)
	{
		system("cls");design();
		printf("-->SELECT FROM THE FOLLOWING<--\n\n");
		int x;
		printf("1.CANTEENS\n\n");
		printf("2.XEROX shops\n\n");
		scanf("%d",&x);
		if(x==1)
		{
			system("cls");design();
			printf("-->Select the canteens from required blocks<--\n\n");
			int cn;
			printf("1.A block\n\n");
			printf("2.H block\n\n");
			printf("3.U block\n\n");
			printf("4.Pharmacy block\n\n");
			printf("5.LARA\n\n");
			scanf("%d",&cn);
			if(cn==1)
			{
				system("cls");design();
				printf("Canteen is located in A block 3rd floor beside VBT03\n\n");
			}
			if(cn==2)
			{
				system("cls");design();
				printf("Canteen is located in H block Ground floor beside VGF13\n\nMain canteen is located in back to the boys hostel\n\n");
			}
			if(cn==3)
			{
				system("cls");design();
				printf("Canteen is located in U block Ground floor back to the OAT\n\nCoffee shop is located in U block 1st floor beside VSF10\n\n");
			}
			if(cn==4)
			{
				system("cls");design();
				printf("Canteen is located in Pharmacy 2nd floor steps\n\n");
			}
			if(cn==5)
			{
				system("cls");design();
				printf("Canteen is located in opposite to the LARA campus\n\n");
			}
		}
		else if(x==2)
		{
			system("cls");design();
			printf("\nXerox shops are available in\n\n");
			printf("1.Left side to the A block in corner ending\n\nIt is the mostly prefered for bulk zerox\n\n");
			printf("2.Small zerox point is located in the A block 1st floor beside VBF01\n\n");
			printf("3.Small zerox point is located in the H block 1st floor main entrance\n\n");
			printf("4.A zerox shop is present in the Sangam Diary parlour just outside the campus");
			
		}
	}
	
}
void hospital()
{
		system("cls");
	vamc:
	printf("SELECT THE CATEOGORY OF HOSPITALS:\n\n");
	printf("1.FIRST AID\n\n2.RMP\n\n3.MULTI-SPECIALTIY HOSPTAL\n\n4.DENTIST\n\nNOTE::\nUNIVERSITY AMBULANCE NUMBER-->9160448177\navailable-24/7\n:");
	int h;scanf("%d",&h);
	if(h==1)
	{	
		system("cls");
		printf("There is a hospital available in Guest house\n\n the doctors are\n1.Dr.K.Venkata Suresh MBBS\nmobile:8500828507\n\n2.Dr.Kalpana MBBS\nmobile:8019634719\n\nYou can reach there by college navigation functioned in our program\n");
	}
	else if(h==2)
	{
		system("cls");
		printf("Dr.Srinivasrao RMP is available on adda road\n\nYou can go and contact him for basic first aid\n\nMin. Charge=50/-\n\nplus codes:6HQ7+3 Vadlamudi,Andhra Pradesh\n\n");
	}
	else if(h==3)
	{
		system("cls");
		printf("Select from following:");
		int d;
		printf("\n\n1.DVC HOSPITALS\n\n2.Mohammed G O V T HOSPITAL\n\n");
		scanf("%d",&d);
		if(d==1)
		{
			system("cls");
			printf("DVC hospital and Reasearch is located beside to Sangam company near adda road\n\navailable-24/7\n\nmobile:08632387777\n\nplus codes:6HQ4+9X Vadlamudi,Andhra Pradesh\n");
		}
		else if(d==2)
		{
			system("cls");
			printf("mohammed G O V T hospital is located near Vadlamudi pedda gudi\n\navailable-24/7\n\nplus codes:6HG5+9C Vadlamudi,Andhra Pradesh");
		}
	}
	else if(h==4)
	{
		system("cls");
			printf("Dentistry is available in DVC HOSPITALS is located beside to Sangam company near adda road\n\navailable-24/7\n\nmobile:08632387777\n\nplus codes:6HQ4+9X Vadlamudi,Andhra Pradesh\n");
	}
	h++;
	printf("\n\n***Press 1 to go back or any other key to go back to menu:\n");
	int e=getche();
	if(e=='1')
	{
	system("cls");
	goto vamc;
	}
	
}

   int power(int a,int b)
{
    int k=1;
    while(b!=0)
    {
        k*=a;
        b--;
    }
    return k;
}
