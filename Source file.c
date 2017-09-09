#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 30

//function initial declaration
void mainm(void);//main menu
void entry(void);
void alter(void);
void delet(void);
void view(void);
void checkout(void);
void passkey(void);
void exiting(void);
void error(void);
void guestlist(void);

//begining of structure hotelsystem
struct hotelsystem
{
       char name[size][35], visitor_bookinnumba[size][15],residential_adres[size][20],rphone[size][12],rdate[size][12];
       };

struct hotelsystem guest;

struct hotelsystem1
{
       char name[size][30], visitor_bookinnumba[size][20],residential_adres[size][20],rphone[size][12],rdate[size][12];
       };

struct hotelsystem1 guest1;

int li,single_room[size];
int dr[size];
int rno;
int i;
int e;
char rc,ch,selection,eselection,rselection,temp[80],vselection,mf,ar;
float days,hrate,hbill,amount,balance;
FILE *f;

int main(void)
{
    system("color 3");
    printf("\n\n\t\t\t\t\t\t\OOPS Project \n\t\t\t\t\t\t\Raj Rathod \n\n\n\n\n\t\t\t\t\tHOTEL RESERVATION PROJECT\n\n\n\n\t\t\t\n\n\n\n\n\t\t\t\t\t>>>HIT ANY KEY TO PROCEED<<<");    getch();
    passkey();//request passkey
    }

void mainm(void)
{
single_room[0]=1;
    dr[0]=1;//initial room declaration

     system("cls");
     system("color a");

         printf("\n\n\tT H E H O T E L R E S E R V A T I O N S Y S T E M\n\n");
         for(li=10;li<89;li++) printf("~");
         printf("\n\n\n\t\t\t S Y S T E M M E N U\n");
         printf("\n\n\t\t\t1.FOR ROOM BOOKING");
         printf("\n\t\t\t2.CHECK OUT");
         printf("\n\t\t\t3.ALTER ROOM STATUS");
         printf("\n\t\t\t4.CHECK ROOM STATUS");
         printf("\n\t\t\t5.PREVIEW VISITORS LIST");
         printf("\n\t\t\t6.VACATE ROOM");
         printf("\n\t\t\t7.SIGN OUT\n\n");
         for(li=10;li<89;li++) printf("_");
         printf("\n\n\t\t\t >>> SELECT CHOICE <<< \n");

     selection=getch();
     switch(selection)//case statemnt begins
     {
         case '1':entry();
         case '2':checkout();
         case '3':alter();
         case '4':view();
         case '5':guestlist();
         case '6':delet();
         case '7':exiting();
         default:{
                    error(); //call error function
                  }
         }
}
void entry(void)//call entry function
{
     system("cls");
     system("color 0f");
     for(li=10;li<89;li++) printf("_");
     printf("\n\n\t\t\tR E S E R V A T I O N S\n");
     for(li=10;li<89;li++) printf("_");
     printf("\n\n\n\n\n\n");
     printf("WE ONLY OFFER DOUBLE OR SINGLE ROOMS: DO YOU WANT TO CONTINUE RESERVING A ROOM? ( Y / N )\n");
     eselection=getch();
     eselection=toupper(eselection);
     switch(eselection) // Eselection Switch Begin
     {
                     case 'Y':{ // E-selection Case Y Begin
                                printf("\n\nENTER [S] FOR SINGLE ROOM OR [D] FOR DOUBLE ROOM\n\n");
                                rselection=getch();
                                rselection=toupper(rselection);
                                switch(rselection) // Rselection Switch Begin
                                {
                                                case 'S':{// R-selection Case S Begin
                                                             for(i=1;i<size;i++)
                                                             if(single_room[i]==0)
                                                             {// Single Room IF begin
                                                                 system("cls");

                                                                 for(li=10;li<89;li++) printf("_");
                                                                 printf("\n\n\t\tV I S I T O R C O N F I D E N T I A L I N F O R M A T I O N\n");
                                                                 for(li=10;li<89;li++) printf("_");

                                                                 single_room[i]=1;
                                                                 f=fopen("single.txt","a+");

                                                                 printf("\n\nROOM No : %d IS AVAILABLE FOR RESERVATION",i);
                                                                 printf("\n\nENTER GUEST NAME\n");
                                                                 gets(guest.name[i]);
                                                                 printf("\nENTER VISITOR BOOKING NUMBER\n");
                                                                 gets(guest.visitor_bookinnumba[i]);
                                                                 printf("\nENTER ADRESS\n");
                                                                 gets(guest.residential_adres[i]);
                                                                 printf("\nENTER PHONE NUMBER\n");
                                                                 gets(guest.rphone[i]);
                                                                 printf("\nENTER CHECK IN DATE\n");
                                                                 gets(guest.rdate[i]);
                                                                 fprintf(f,"\n%d\t%s\t\t%s\t%s\t%s\t%s",i,guest.name[i],guest.visitor_bookinnumba[i],guest.residential_adres[i],guest.rphone[i],guest.rdate[i]);
                                                                 fclose(f);

                                                                 system("cls");
                                                                 system("color A");
                                                                 for(li=0;li<15;li++) printf("\n");
                                                                 printf("\t\tR O O M S U C C E S S F U L L Y R E S E R V E D\n\n\t\t\t>>>HIT ANY KEY TO EXIT TO MAIN MENU<<<");

                                                               getch();
                                                               mainm();

                                                                      }// AR Switch End
                                                               }// Single Room IF End
                                                         }// Rselection Case S End
                                                case 'D':{ //Rselection Case D Begin
                                                           for(i=1;i<size;i++)
                                                           if(dr[i]==0)
                                                           {// Double Room IF begin
                                                               system("cls");

                                                               for(li=10;li<89;li++) printf("_");
                                                               printf("\n\n\t\tV I S I T O R C O N F I D E N T I A L I N F O R M A T I O N\n");
                                                               for(li=10;li<89;li++) printf("_");

                                                               dr[i]=1;
                                                               f=fopen("double.txt","a+");

                                                               printf("\n\nROOM No : %d IS AVAILABLE FOR RESERVATION",i);
                                                               printf("\n\nENTER GUEST NAME\n");
                                                               gets(guest1.name[i]);
                                                               printf("\nENTER VISITOR BOOKING NUMBER\n");
                                                               gets(guest1.visitor_bookinnumba[i]);
                                                               printf("\nENTER RESIDENTIAL ADRESS\n");
                                                               gets(guest1.residential_adres[i]);
                                                               printf("\nENTER MOBILE PHONE NUMBER\n");
                                                               gets(guest1.rphone[i]);
                                                               printf("\nENTER CHECK IN DATE\n");
                                                               gets(guest1.rdate[i]);
                                                               fprintf(f,"\n%d\t%s\t\t%s\t%s\t%s\t%s",i,guest1.name[i],guest1.visitor_bookinnumba[i],guest1.residential_adres[i],guest1.rphone[i],guest1.rdate[i]);

                                                               fclose(f);
                                                               for(li=0;li<15;li++) printf("\n");
                                                               printf("\t\tR O O M S U C C E S S F U L L Y R E S E R V E D\n\t\t\t>>>HIT ANY KEY TO PROCEED TO THE MAIN MENU<<<");

                                                              getch();
                                                              mainm();

                                                                    }// AR Switch End
                                                            }// Double Room IF End
                                                    }// Rselection Case D End
                                                default:{//Rselection Default Begin
                                                                   error();
                                                                   }//Rselection default end
                                                           }//Rselection End
                                }//Eselect
     //Data Entry Function End
//call Guest Data View Fucntion
void view(void)
{
     system("cls");
     system("color 0f");

     for(li=10;li<89;li++) printf("_");
     printf("\n\n\t\tV I E W R O O M S T A T U S\n");
     for(li=10;li<89;li++) printf("_");
     printf("\n\n\n\n\n\n");
     printf("PRESS [S] FOR SEQUENTIAL VIEWING OF ROOM STATUS\n\nPRESS [V] FOR SINGULAR VIEWING OF ROOM STATUS\n\n");
     vselection=getch();
     vselection=toupper(vselection);
     int k;
     for( k=0;k<4;k++)
     {
             system("cls");
             system("cls");
             system("cls");
             system("color 0a");
             for(li=0;li<15;li++) printf("\n");
             printf("\t\t\tS Y S T E M L O A D I N G...");
             }
     switch(vselection)
     {//Vselection Switch Begin
            case 'S':{//Vselection Case S Begin
                         //SINGLE ROOMS SEQUENCIAL LIST
                         system("cls");
                         system("color 0f");

                         for(li=10;li<89;li++) printf("_");
                         printf("\n\n\tS E Q U E N T I A L S I N G L E R O O M S S T A T U S\n");
                         for(li=10;li<89;li++) printf("_");

                         printf("\n\nR.No.\tNAME\t\tBOOKING No\tADRESS\tPHONE No\tCHECK IN DATE\n");
                         for(i=1;i<size;i++)
                         {//i Loop Begin
                              if(single_room[i]==1)
                              {//single room[i]==1 Conditional Printing Begin
                                     printf("\n%d\t%s\t\t%s\t%s\t%s\t%s\n",i,guest.name[i],guest.visitor_bookinnumba[i],guest.residential_adres[i],guest.rphone[i],guest.rdate[i]);
                                     }//single room[i]==1 Conditional Printing End
                              }//i Loop End
                              printf("\n\n\t\t>>>HIT ANY KEY TO CHECK DOUBLE ROOM STATUS<<<\n\n");
                              getch();
                              //DOUBLE ROOMS SEQUENCIAL LIST
                              system("cls");

                              for(li=10;li<89;li++) printf("_");
                              printf("\n\n\tS E Q U E N T I A L D O U B L E R O O M S S T A T U S\n");
                              for(li=10;li<89;li++) printf("_");

            printf("\n\nR.No.\tNAME\tBOOKING No:r\tADRESS\tPHONE No\tCHECK IN DATE\n");
                              for(i=1;i<size;i++)
                              {//i Loop Begin
                                   if(dr[i]==1)
                                   {//dr[i]==1 Conditional Printing Begin (doubleroom)
                                          printf("\n%d\t%s\t%s\t%s\t%s\t%s\n",i,guest1.name[i],guest1.visitor_bookinnumba[i],guest1.residential_adres[i],guest1.rphone[i],guest1.rdate[i]);
                                          }//dr[i]==1 Conditional Printing End
                                   }//i Loop End
                                   printf("\n\n\t\t>>>HIT ANY KEY TO EXIT TO MAIN THE MENU<<<\n\n");
                                   getch();
                                   mainm();
                                   }//Vselection Case S End
            case 'V':{// Vselection case R Start

                         system("cls");
                         system("color 0f");

                         for(li=10;li<89;li++) printf("_");
                         printf("\n\n\tS I N G U L A R R O O M S T A T U S I N F O R M A T I O N\n");
                         for(li=10;li<89;li++) printf("_");

                         printf("\n\nENTER ROOM NUMBER TO BE CHECKED FOR OCCUPANCY\n\n");
                         gets(temp);
                         rno=atoi(temp);// converts the string argument str to an integer
                         // Room Number Limit Check
                         if(rno<1 || rno >30)
                         {//IF Condition Begin
                               system("color 0c");
                               printf("\n\n\a\a\aINVALID ROOM NUMBER \a\a\a");
                               system("pause");
                               mainm();
                               } //IF Condition End
                               else
                               { // Limit Else Falsified Begin
                                 if(single_room[rno]==1)
                                 {//single room==1 if Begin
                                          system("cls");
                                          system("color 0f");

                                          for(li=10;li<89;li++) printf("_");
                                          printf("\n\n\tS I N G U L A R R O O M S T A T U S I N F O R M A T I O N\n");
                                          for(li=10;li<89;li++) printf("_");

                                          printf("\n\nSINGLE ROOM No %d IS RESERVED FOR",rno);
                                          printf("\n\n\nGUEST NAME : %s \n\nVISITOR BOOKING NUMBER : %s \n\nRESIDENTIAL ADRESS : %s\n\nMOBILE PHONE NUMBER: %s\n\nCHECK OUT DATE : %s \n\n",guest.name[rno],guest.visitor_bookinnumba[rno],guest.residential_adres[rno],guest.rphone[rno],guest.rdate[rno]);
                                          printf("\n\n\n\n\n");
                                          system("pause");
                                          }//single room==1 if End
                                          else
                                          {// single room else begin
                                              printf("\n\nSINGLE ROOM No %d IS VACANT ",rno);
                                              getch();
                                              }//single room else end
                                              if(dr[rno]==1)
                                              {//dr==1 if Begin
                                                       system("cls");
                                                       system("color 0f");

                                                       for(li=10;li<89;li++) printf("_");
                                                       printf("\n\n\tD O U B L E R O O M S T A T U S I N F O R M A T I O N\n");
                                                       for(li=10;li<89;li++) printf("_");

                                                       printf("\n\nDOUBLE ROOM No %d IS RESERVED",rno);
                                                       printf("\n\n\nGUEST NAME : %s \n\nVISITOR BOOKING NUMBER: %s \n\nRESDENTIAL ADRESS: %s\n\nMOBILE NUMBER: %s\n\nCHECK OUT DATE: %s \n\n",guest1.name[rno],guest1.visitor_bookinnumba[rno],guest1.residential_adres[rno],guest1.rphone[rno],guest1.rdate[rno]);
                                                       printf("\n\n\t\t>>>HIT ANY KEY TO EXIT TO THE MAIN MENU<<<");
                                                       getch();
                                                       mainm();
                                                       }//dr==1 if End
                                                       else
                                                       {// dr else begin
                                                           printf("\n\n\n\nDOUBLE ROOM No %d IS VACANT ",rno);
                                                           printf("\n\n\a\a\t\t>>>HIT ANY KEY TO EXIT TO THE MAIN MENU<<<...");
                                                           getch();
                                                           mainm();
                                                           }//dr else end
                         }//Vselection Case R End
               }// Falsified Limit End
            default:{//Vselection Default Begin
                     error();
                     } // Vselection Default End
            } // Vselection Switch End
} // Data View Function End

//alter Function
void alter(void)//call alter function
{
     system("cls");
     system("color 0f");

     for(li=10;li<89;li++) printf("_");
     printf("\n\n\t\tD A T A A L T E R A T I O N\n");
     for(li=10;li<89;li++) printf("_");
     printf("\n\n\n\n\n\n");
     printf("ENTER ROOM NUMBER TO BE ALTERED\n");
     gets(temp);
     rno=atoi(temp);
     // Room Number Limit Check
     if(rno<1 || rno >30)
     {//IF Condition Begin
           system("color 0c");
           printf("\n\n\a\a\aINVALID ROOM NUMBER \a\a\a");
           system("pause");
           mainm();
           } //IF Condition End
           else
           { // Limit Else Falsified Begin
             printf("\nENTER [S] FOR SINGLE ROOM/ [D] FOR DOUBLE ROOM \n");
             rc=getch();
             rc=toupper(rc);
             int k;
             for( k=0;k<5;k++)
             {
             system("cls");
             system("cls");
             system("cls");
             system("color 0a");
             for(li=0;li<16;li++) printf("\n");
             printf("\t\t\tL O A D I N G D A T A ...");
             system("cls");
             }

             switch(rc)
             {//rc Switch Begin
                   case 'S':{//rc Case S Begin
                                  if(single_room[rno]==1)
                                  {//single room==1 if Begin
                                           system("cls");
                                           system("color 0f");
                                           for(li=10;li<89;li++) printf("_");
                                           printf("\n\nSINGLE ROOM No %d IS RESERVED FOR:",rno);
                                           printf("\n\nGUEST NAME : %s \n\n VISITER BOOKING NUMBER : %s \n\nRESIDENTIAL ADRESS: %s\n\nMOBILE PHONE NUMBER: %s\n\nCheck In Date : %s \n\n",guest.name[rno],guest.visitor_bookinnumba[rno],guest.residential_adres[rno],guest.rphone[rno],guest.rdate[rno]);
                                           printf("\n\nPress \n1 : TO CHANGE NAME\n2 : TO CHANGE VISITOR BOOKING NUMBER\n3 : ADRESSS\n4 : MOBILE PHONE NUMBER\n5 : CHECK IN DATE\n\n");
                                           mf=getch();//modification get character
                                           mf=toupper(mf);
                                           switch(mf)
                                           {//mf switch Begin
                                                 case '1':{//mf Case N Begin
                                                                printf("\n\nENTER NEW NAME\n");
                                                                gets(guest.name[rno]);
                                                                getch();
                                                                mainm();
                                                                }//mf Case N End
                                                 case '2':{//mf Case I Begin
                                                                printf("\n\nENTER NEW VISITOR BOOKING NUMBER\n");
                                                                gets(guest.visitor_bookinnumba[rno]);
                                                                getch();
                                                                mainm();
                                                                }//mf Case I End
                                                 case '3':{//mf Case R Begin
                                                                printf("\n\nENTER NEW ADRESS\n");
                                                                gets(guest.residential_adres[rno]);
                                                                getch();
                                                                mainm();
                                                                }//mf Case R End

                                                 case '4':{//mf Case R Begin
                                                                printf("\n\nENTER NEW PHONE NUMBER\n");
                                                                gets(guest.rphone[rno]);
                                                                getch();
                                                                mainm();
                                                                }//mf Case R End
                                                 case '5':{//mf Case O Begin
                                                                printf("\n\nENTER NEW CHECK IN DATE\n");
                                                                gets(guest.rdate[rno]);
                                                                getch();
                                                                mainm();
                                                                }//mf Case O End
                                                 default:{//mf Default Begin
                                                               error();
                                                               }//mf Default End
                                           }//single room==1 if End
                                  } //rc Case S End
                                  else{// single room else begin
                                          printf("\n\nSINGLE ROOM No %d IS VACANT",rno);
                                          printf("\n\n\n>>>HIT ANY KEY TO EXIT TO THE MAIN MENU<<<");
                                          getch();
                                          mainm();
                                          }//single room else end
                          }//rc Case S End
                   case 'D':{// rc Case D Begin
                                if(dr[rno]==1)
                                {//dr==1 if Begin
                                         system("cls");
                                         system("color 0f");
                                         for(li=10;li<89;li++) printf("_");
                                         printf("\n\nDOUBLE ROOM NUMBER No %d IS RESERVED",rno);
                                         printf("\n\nGUEST NAME: %s \n\nGUEST BOOKING NUMBER : %s \n\nRESIDENTIAL ADRESS : %s\n\nMOBILE PHONE NUMBER: %s\n\nCHECK IN DATE: %s \n\n",guest1.name[rno],guest1.visitor_bookinnumba[rno],guest1.residential_adres[rno],guest1.rphone[rno],guest1.rdate[rno]);
                                         printf("\n\nPress\n1 : TO CHANGE NAME\n2 : TO CHANGE VISITOR BOOKING NUMBER\n3 :ADRESS\n4 : MOBILE PHONE NUMBER\n5 : CHECK IN DATE\n\n\n");
                                         mf=getch();
                                         mf=toupper(mf);
                                         switch(mf)
                                         {//mf switch Begin
                                               case '1':{//mf Case N Begin
                                                              printf("\n\nENTER NEW NAME\n");
                                                              gets(guest1.name[rno]);
                                                              getch();
                                                              mainm();
                                                              }//mf Case N End
                                               case '2':{//mf Case I Begin
                                                              printf("\n\nENTER NEW VISITOR'S BOOKING NUMBER\n");
                                                              gets(guest1.visitor_bookinnumba[rno]);
                                                              getch();
                                                              mainm();
                                                              }//mf Case I End
                                               case '3':{//mf Case R Begin
                                                              printf("\n\nENTER NEW RESIDENTIAL ADRESS\n");
                                                              gets(guest1.residential_adres[rno]);
                                                              getch();
                                                              mainm();
                                                              }//mf Case R End
                                               case '4':{//mf Case P Begin
                                                              printf("\n\nENTER NEW MOBILE PHONE NUMBER\n");
                                                              gets(guest1.rphone[rno]);
                                                              getch();
                                                              mainm();
                                                              }//mf Case R End
                                               case '5':{//mf Case O Begin
                                                              printf("\n\nENTER NEW CHECK IN DATE\n");
                                                              gets(guest1.rdate[rno]);
                                                              getch();
                                                              mainm();
                                                              }//mf Case O End
                                                default:{//mf Default Begin
                                                              error();
                                                              }//mf Default End
                                         }//dr==1 if End
                             }//rc Case D End
                             else
                             {// dr else begin
                                 printf("\n\nSINGLE ROOM No %d IS VACANT",rno);
                                 printf("\n\n\n\t\t>>>HIT ANY KEY TO EXIT TO THE MAIN MENU<<<");
                                 getch();
                                 mainm();
                                 }//dr else end
                          } // Case D End
                   default:{// rc Default Begin
                               error();
                               } // rc Default End
                   } //Switch rc End
          } // Limit Else Falsified End
} //alter Function End

//call Delete Function
void delet(void)
{
     system("cls");
     system("color 0f");

     for(li=10;li<89;li++) printf("_");
     printf("\n\n\t\tV A C A T E R O O M\n");
     for(li=10;li<89;li++) printf("_");
     printf("\n\n\n\n\n\n");
     printf("ENTER ROOM NUMBER TO VACATE\n");
     gets(temp);
     rno=atoi(temp);
     // Room Number Limit Check
     if(rno<1 || rno >30)
     {//IF Condition Begin
           system("color 0c");
           printf("\n\n\a\a\aINVALID ROOM NUMBER \a\a\a");
           system("pause");
           mainm();
           } //IF Condition End
           else
           {// Room Number Limit Falsified Else
               printf("\n\nSINGLE Or DOUBLE ROOM? [S / D]");
               rc=getch();
               rc=toupper(rc);
               switch(rc)
               {//rc Switch Begin
                     case 'S':{//rc Case S Begin
                                    single_room[rno]=0;
                                    printf("\n\nROOM VACATED");
                                    printf("\n\n\t\t>>>HIT ANY KEY TO EXIT TO THE MAIN MENU<<<");
                                    getch();
                                    mainm();
                                    }// rc Case S End
                     case 'D':{//rc Case D Begin
                                    dr[rno]=0;
                                    printf("\n\nROOM VACATED");
                                    printf("\n\n\t\t>>>HIT ANY KEY TO EXIT TO THE MAIN MENU<<<");
                                    getch();
                                    mainm();
                                    }//rc Case D End
                      default:{//rc Default Begin
                                    error();
                                    }// rc Default End
                     }// rc Switch End
               }// Room Number Falsified Else End
     }
void checkout(void)
{
     //rate initializations
     days=0;
     hrate=0;
     hbill=0;

     system("cls");
     system("color 0f");

     for(li=10;li<89;li++) printf("_");
     printf("\n\n\t\tV I S I T O R C H E C K I N G O U T\n");
     for(li=10;li<89;li++) printf("_");
     printf("\n\n\n\n\n\n");
     printf("ENTER ROOM NUMBER CHECKING OUT\n");
     gets(temp);
     rno=atoi(temp);
     // Room Number Limit Check
     if(rno<1 || rno >30)
     {//IF Condition Begin
           system("color 0c");
           printf("\n\n\a\a\aINVALID ROOM NUMBER \a\a\a");
           system("pause");
           mainm();
           } //IF Condition End
           else
           { // Limit Else Falsified Begin
             printf("\nENTER [S] FOR SINGLE ROOM or [D] FOR DOUBLE ROOM\n");
             rc=getch();
             rc=toupper(rc);
             switch(rc)
             {//rc Switch Begin
                   case 'S':{//rc Case S Begin
                                  if(single_room[rno]==1)
                                  {//single room==1 if Begin
                                           system("cls");
                                           system("color 0f");
                                           printf("\n\nSINGLE ROOM NUMBER No %d IS NOW CHECKING OUT",rno);
                                           printf("\n\nGUEST NAME : %s \n\nGUEST BOOKING NUMBER : %s \n\nRESIDENTIAL ADRESS : %s\n\nMOBILE PHONE NUMBER : %s\n\nCHECK IN DATE : %s \n\n",guest.name[rno],guest.visitor_bookinnumba[rno],guest.residential_adres[rno],guest.rphone[rno],guest.rdate[rno]);
                                           printf("\nENTER NUMBER OF DAYS STAYED\n");
                                           scanf("%f",&days);
                                           printf("\nENTER THE BREAKFAST + LUNCH + SUPPER + BEDDING CHARGE\n");
                                           scanf("%f",&hrate);
                                           if((days<1 && days >90)&&(hrate<1 && hrate >32000))
                                           {//IF Condition Begin
                                                 system("color 0c");
                                                 printf("\n\a\a\aINVALID ENTRY OF DAYS || CHARGE\a\a\a");
                                                 printf("\n\n>>>HIT ANY KEY TO EXIT TO THE MAIN MENU<<< ");
                                                 getch();
                                                 mainm();
                                                 } //IF Condition End
                                                 else
                                                     {
                                                           hbill=days*hrate;
                                                           }
                                                      printf("\nTOTAL CHARGES ARE $%.2f",hbill);
                                                      printf("\n\n>>>HIT ANY KEY TO EXIT TO THE MAIN MENU<<< ");
                                                     single_room[rno]=0;
                                                  getch();
                                                mainm();
                                           }//single room==1 if End
                                 else{// single room else begin
                                          printf("\n\nSINGLE ROOM No %d IS VACANT CANNOT CHECK OUT",rno);
                                          printf("\n\n>>>HIT ANY KEY TO EXIT TO THE MAIN MENU<<< ");
                                          getch();
                                          mainm();
                                          }//single room else end
                          }//rc Case S End
                   case 'D':{// rc Case D Begin
                                if(dr[rno]==1)
                                {//dr==1 if Begin
                                         system("cls");
                                         system("color 0f");
                                         printf("\n\nDOUBLE ROOM No %d IS NOW CHECKING OUT",rno);
                                         printf("\n\nGUEST NAME : %s \n\nGUEST BOOKING NUMBER : %s \n\nRESIDENTIAL ADRESS: %s\n\nMOBILE PHONE NUMBER : %s\n\nCHECK IN DATE: %s \n\n",guest1.name[rno],guest1.visitor_bookinnumba[rno],guest1.residential_adres[rno],guest1.rphone[rno],guest1.rdate[rno]);
                                         printf("\n\nENTER NUMBER OF DAYS STAYED\n");
                                           scanf("%f",&days);
                                         printf("\nENTER THE BREAKFAST + LUNCH + SUPPER + BEDDING CHARGE\n");
                                           scanf("%f",&hrate);
                                           if((days<1 || days >60)&&(hrate<1 || hrate >30000))
                                           {//IF Condition Begin
                                                 system("color 0c");
                                                 printf("\n\n\a\a\aINVALID ENTRIES\a\a\a");
                                                 } //IF Condition End
                                                 else
                                                 {
                                                     hbill=days*hrate*1.2;
                                                     }
                                                     printf("TOTAL CHARGES ARE $%.2f",hbill);
                                                      printf("\n\n>>>HIT ANY KEY TO EXIT TO THE MAIN MENU<<< ");
                                                     dr[rno]=0;
                                                  getch();
                                                mainm();
                                           }//single room==1 if End
                                 else{// single room else begin
                                          printf("\n\nDOUBLE ROOM No %d IS VACANT CANNOT CHECK OUT",rno);
                                           printf("\n\n>>>HIT ANY KEY TO EXIT TO THE MAIN MENU<<< ");
                                          getch();
                                          mainm();
                                          }//single room else end
                          }//rc Case D End
                   default:{// rc Default Begin
                               error();
                               } // rc Default End
                   } //Switch rc End
          } // Limit Else Falsified End
} //alter Function End

void guestlist(void)
{
     system("cls");
     system("color 0f");

     for(li=10;li<89;li++) printf("_");
     printf("\n\n\t\tG U E S T S R E S E R V A T I O N L I S T\n");
     for(li=10;li<89;li++) printf("_");
     printf("\n\n\n");

     printf("\n\nENTER [S] FOR SINGLE ROOM GUEST LIST or [D] FOR DOUBLE ROOM GUEST LIST...\n\n");
     rselection=getch();
     rselection=toupper(rselection);
     int k;
     for( k=0;k<2;k++)
     {
             system("cls");
             system("cls");
             system("cls");
             system("color 0a");
             for(li=0;li<5;li++) printf("\n");
             printf("\t\t\tL O A D I N G D A T A....");
             }
     switch(rselection) // Rselection Switch Begin
     {
                     case 'S' : {
                                      system("cls");
                                      system("color 0f");

                                      for(li=10;li<89;li++) printf("_");
                                      printf("\n\n\t\tS I N G L E R O O M S G U E S T S\n");
                                      for(li=10;li<89;li++) printf("_");

                                      printf("\nR.No.\tNAME\t\tBOOKIN NUMBER\tADRESS\tPHONE No\tCHECK In\n");

                                      f=fopen("single.txt","r+");
                                      while(fgets(guest.name[i],10000,f)!=NULL)
                                      printf("%s",guest.name[i]);
                                      fclose(f);
                                       printf("\n\n\t\t>>>HIT ANY KEY TO EXIT TO THE MAIN MENU<<< ");
                                      getch();
                                      mainm();
                                      }//end of single guest list
                     case 'D' : {
                                      system("cls");
                                      system("color 0f");

                                      for(li=10;li<89;li++) printf("_");
                                      printf("\n\n\t\tD O U B L E R O O M S G U E S T S\n");
                                      for(li=10;li<89;li++) printf("_");
                                      printf("\nR.No.\tNAME\t\tBOOKING No\tADRESS\tPHONE No\tCHECK In\n");

                                      f=fopen("double.txt","r+");
                                      while(fgets(guest.name[i],10000,f)!=NULL)
                                      printf("%s",guest.name[i]);
                                      fclose(f);
                                       printf("\n\n\t\t>>>HIT ANY KEY TO EXIT TO THE MAIN MENU<<< ");
                                      getch();
                                      mainm();
                                      }//end of single guest list
                     default : error();
                     }}

void exiting(void)
{
     int k;
    for(k=0;k<5;k++)
    {
             system("cls");
             system("cls");
             system("cls");
             system("color 0c");
             for(li=0;li<5;li++) printf("\n");
             printf("\t\t\t\a\n\n\t\t P R O G R A M V O I D....");
             }

     exit(0);
     }

void passkey(void)
{
int k, p; // local declarations
char pass[5], *word = "king";

{
         system("cls");
         system("color 0f");
         printf("\n\n ENTER PASSKEY: ");
         for(k=0;k<=3;k++)//this loop stores each character entered in an array and
         {
                    pass[k]=getch();
                    printf("#");
                    }
                    if(strcmpi(pass,word)>0)//string compare is used to validate the code
                    {
                                  system("cls");
                                  system("color 0a");
                                  printf("\n\n\n\n\n\a\a\a\t\t\ ACCESS GRANTED...\a\a\a");

                                  mainm();
                                  }//end of strcmpi if
                                  else
                                      if(strcmpi(pass,word)<0)
                                      {system("cls");
                                      system("color 0c");
                                      printf("\n\n\a\a\a INVALID ACCESS CODE!!! \a\a\a");}
                                      }
                                      exiting();

          }//end of passkey function

void error(void)
{

int k;
             for( k=0;k<4;k++) //to clear screen for for times
             { //blinking an errror warning message
             system("cls");
             system("cls");
             system("cls");
             system("color 0c");
             for(li=0;li<5;li++) printf("\n");
             printf("\t\t\t\aI N V A L I D E N T R Y !!!");
             }
             mainm();
             }
