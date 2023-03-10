#include <stdio.h>
#include <math.h>
#include <unistd.h>
void prob()
{
    float res=0,e1,e2;
    int n;
    float co1, co2,t,tk,res1,res2,emf,R,F,coo;
    printf("\n\t\t\t\t---NUMERICAL---");
    printf("\n\t\t\t==============================================");
    printf("\n\tTO FIND THE EMF OF A CELL");
    printf("\n\nQ: Calculate the emf of a cell when\n\tStandard EMF of Cu = 0.34V\n\tStandard EMF of Zn = -0.76V\n");
    printf("\tR(gas constant)=8.314J/Kmol\n\tF(Faraday's constant: 96500C/mol\n");
    printf("\nEnter the temperature at which the reaction takes place(in degree Celsius): ");
    scanf("%f",&t);
    tk=t+273; //in kelvin
    printf("\nThe value for concentration of anodic(Zn) cell: ");
    scanf("%f",&co1);
    printf("\nEnter the value for concentration of cathodic(Cu) cell: ");
    scanf("%f",&co2);
    printf("\nEnter the value of number of electrons transferred in the cell(n): ");
    scanf("%d",&n);
    e2=0.34;
    e1=-0.76;
    R=8.314;
    F=96500;
     emf=e2-e1;
    
    printf("\nThe standard emf of the cell is given by = (EMF at cathode) - (EMF at anode)");
    printf("\n                                         =  (%f)V  -  (%f)V",e2,e1);
    printf("\n                                         =  %.2f V",emf);
    printf("\nThe EMF of the cell is given by = (Standard emf of the cell)-{(2.303RT/nF)*log([anode]/[cathode])}");
   
    res1=(2.303*R*tk)/(n*F);
    coo=co1/co2;
    res2=log10(coo);
    res=emf-(res1*res2);
    printf("\nThe EMF of the cell is = %.4fV",res);
}
void info()
{
    int ch;
    printf("\t\t\t\t***GENERAL INFORMATION***\n");
    printf("-> EMF of a cell is defined as the maximum potential difference between two electrodes.\nIt can also be defined as the net voltage between oxidation and reduction half reactions.\n");
    
printf("\nThe Nearnst equation is used to calculate the EMF of a cell and provides a relation between cell potential of\n an electrochemical cell,the standard cell potential,temperature and the reaction quotient.");
printf("\nThe equation was introduced by a German Chemist named Walther Hermann Nernst.\n\n");
printf("To proceed to the problem based on Nearnst equation, press 1.\nTo exit, press 0: ");
scanf("%d",&ch);
switch(ch)
{
    case 0: printf("\nEXITING THE PROGRAM...!"); break;
    case 1: prob(); break;
    default: printf("\ninvalid input!");
}
    
}

void main()
{
  int c,n1; float d1,d2,e,f,c1,c2;
  
   printf("\t\t\t\t  **PSP PRESENTATION**\t\n");
   sleep(2);
   printf("\t\t\t    =========MAIN MENU=========\n");
   sleep(2);
   printf("\n1.Information about emf(E) of a cell.\n");
   printf("2.Problem based on emf of a cell.\n3.Exit");
   
   printf("\n\nEnter your choice: ");
   scanf("%d",&c);
   switch(c)
   {
       case 1: info(); break;
       
       case 2: prob(); break; 
       
       case 3: printf("\n\tEXITING THE PROGRAM..!!\n"); break;
       default: printf("\nPlease check input choice and try again.");
      
     
   }
}









