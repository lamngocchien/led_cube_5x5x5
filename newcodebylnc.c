#include<regx52.h>
#include<stdio.h>
#include<math.h>
 sbit    d1 = P2^3;// chan 24
 sbit    d2 = P2^1;// chan 22
 sbit   d3 = P2^0;// chan 21
 sbit   d4 = P3^7;// chan 17
 sbit   d5 = P3^6;// chan 16
 sbit   d6 = P2^4;// chan  25
 sbit   d7 = P2^6;// chan  27
 sbit   d8 = P3^4;// chan  14
 sbit   d9 = P3^3;// chan  13
 sbit   d10 = P3^5;// chan    15
 sbit   d11 = P0^7;// chan    32
 sbit   d12 = P0^5;// chan    34
 sbit   d13 = P1^4;// chan    5
 sbit   d14 = P1^5;// chan    6
 sbit   d15 = P3^2;// chan    12
 sbit   d16 = P0^4;// chan    35
 sbit   d17 = P0^1;// chan    38
 sbit   d18 = P1^0;// chan    1
 sbit   d19 = P1^2;// chan    3
 sbit   d20 = P3^1;// chan    11
 sbit   d21 = P0^3;// chan    36
 sbit   d22 = P0^2;// chan    37
 sbit   d23 = P1^1;// chan    2
 sbit   d24 = P1^3;// chan    4
 sbit   d25 = P3^0;// chan    10
//muc 0 cot sang
 sbit   c1  = P0^0;// chan    39
 sbit   c2  =P0^6;// chan    33
 sbit   c3  =P2^5;// chan    26
 sbit   c4  =P2^7;// chan    28
 sbit   c5  =P2^2;// chan    23
 //muc 0 lop sang
 //den chi sang khi lop =0 cot =0
 unsigned int i;
 int n,j,k,l;
 void delay0 (unsigned int t)
 {
    for(i=0;i<=t;i++);
 }
 void delay1()
 {
    unsigned int i;
   for(i=0;i<=10000;i++);
 }
 void delay2()
 {
    unsigned int i;
    for(i=0;i<=15000;i++);
 }
 void delay3()
 {
    unsigned int i;
    for(i=0;i<=30000;i++);
 }
void delay4()
 {
    unsigned int i;
   for (i=0;i<=200;i++);
 }
 void quet()
 {
    unsigned int i;
    for(i=0;i<=8000;i++);
}
void on(void)
{
   d1=d2=d3=d4=d5=d6=d7=d8=d9=d10=d11=d12=d13=d14=d15=d16=d17=d18=d19=d20=d21=d22=d23=d24=d25=0;
   c1=c2=c3=c4=c5=0;   
}
void cot(void)
{
   d1=d2=d3=d4=d5=d6=d7=d8=d9=d10=d11=d12=d13=d14=d15=d16=d17=d18=d19=d20=d21=d22=d23=d24=d25=0;   
}
void khung16 (void)
{
   d1=d2=d3=d4=d5=d6=d10=d11=d15=d16=d20=d21=d22=d23=d24=d25=0;
}
void hang1(void)
{
   d1=d2=d3=d4=d5=0;
}
void hang2(void)
{
   d10=d6=d7=d8=d9=0;
}
void hang3(void)
{
   d13=d11=d12=d14=d15=0;
}
void hang4(void)
{
   d16=d17=d18=d19=d20=0;
}
void hang5(void)
{
   d21=d22=d23=d24=d25=0;
}
void tru9(void)
{
   d7=d8=d9=d17=d18=d19=d12=d13=d14=0;
}
void off(void)
{
   d1=d2=d3=d4=d5=d6=d7=d8=d9=d10=d11=d12=d13=d14=d15=d16=d17=d18=d19=d20=d21=d22=d23=d24=d25=1;
   c1=c2=c3=c4=c5=1;   
}
void main ()
 {
while(1)
{
off();
//Bong benh
for(n=1;n<=15;n++)
   {
   off();
   for(j=1;j<=3;j++)
      {
      for(k=1;k<=5;k++)
         {
         hang1();
         c5=0;
         delay0(50);off();
         }
      for(k=1;k<=5;k++)
         {
         hang2();
         c4=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang3();
         c3=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang4();
         c2=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang5();
         c1=0;
         delay0(50);off();
         }
   }
   off();
   for(j=1;j<=3;j++)
      {
      for(k=1;k<=5;k++)
         {
         hang1();
         c4=0;
         delay0(50);off();
         }
      for(k=1;k<=5;k++)
         {
         hang2();
         c5=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang3();
         c4=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang4();
         c3=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang5();
         c2=0;
         delay0(50);off();
         }
      }
   off();
   for(j=1;j<=3;j++)
      {
      for(k=1;k<=5;k++)
         {
         hang1();
         c3=0;
         delay0(50);off();
         }
      for(k=1;k<=5;k++)
         {
         hang2();
         c4=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang3();
         c5=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang4();
         c4=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang5();
         c3=0;
         delay0(50);off();
         }
      }
   off();
   for(j=1;j<=3;j++)
      {
      for(k=1;k<=5;k++)
         {
         hang1();
         c2=0;
         delay0(50);off();
         }
      for(k=1;k<=5;k++)
         {
         hang2();
         c3=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang3();
         c4=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang4();
         c5=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang5();
         c4=0;
         delay0(50);off();
         }
      }
   off();
   for(j=1;j<=3;j++)
      {
      for(k=1;k<=5;k++)
         {
         hang1();
         c1=0;
         delay0(50);off();
         }
      for(k=1;k<=5;k++)
         {
         hang2();
         c2=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang3();
         c3=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang4();
         c4=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang5();
         c5=0;
         delay0(50);off();
         }
      }
   off();
   for(j=1;j<=3;j++)
      {
      for(k=1;k<=5;k++)
         {
         hang1();
         c2=0;
         delay0(50);off();
         }
      for(k=1;k<=5;k++)
         {
         hang2();
         c1=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang3();
         c2=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang4();
         c3=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang5();
         c4=0;
         delay0(50);off();
         }
      }
   off();
   for(j=1;j<=3;j++)
      {
      for(k=1;k<=5;k++)
         {
         hang1();
         c3=0;
         delay0(50);off();
         }
      for(k=1;k<=5;k++)
         {
         hang2();
         c2=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang3();
         c1=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang4();
         c2=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang5();
         c3=0;
         delay0(50);off();
         }
      }
   off();
   for(j=1;j<=3;j++)
      {
      for(k=1;k<=5;k++)
         {
         hang1();
         c4=0;
         delay0(50);off();
         }
      for(k=1;k<=5;k++)
         {
         hang2();
         c3=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang3();
         c2=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang4();
         c1=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang5();
         c2=0;
         delay0(50);off();
         }
      }
   for(j=1;j<=3;j++)
      {
      for(k=1;k<=5;k++)
         {
         hang1();
         c5=0;
         delay0(50);off();
         }
      for(k=1;k<=5;k++)
         {
         hang2();
         c4=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang3();
         c3=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang4();
         c2=0;
         delay0(50);off();
         }
      for(k=1;k<5;k++)
         {
         hang5();
         c1=0;
         delay0(50);off();
         }
      }
   }
//Xoay cheo
for(n=1;n<=10;n++)
   {
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d5=d21=c1=c2=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d10=d16=c2=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d11=d15=c4=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d6=d20=c5=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d1=d25=c5=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d10=d16=c1=c2=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d15=d11=c2=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d6=d20=c4=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d1=d25=c5=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d2=d24=c5=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d15=d11=c1=c2=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d20=d6=c2=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d1=d25=c4=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d2=d24=c5=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d3=d23=c5=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d20=d6=c1=c2=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d25=d1=c2=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d2=d24=c4=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d3=d23=c5=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d4=d22=c5=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d25=d1=c1=c2=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d24=d2=c2=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d3=d23=c4=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d4=d22=c5=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d5=d21=c5=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d24=d2=c1=c2=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d23=d3=c2=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d4=d22=c4=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d5=d21=c5=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d10=d16=c5=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d23=d3=c1=c2=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d22=d4=c2=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d5=d21=c4=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d10=d16=c5=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d15=d11=c5=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d22=d4=c1=c2=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d21=d5=c2=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d10=d16=c4=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d15=d11=c5=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d20=d6=c5=0;
               delay0(50);off();
               }
         }
   }
//Hieu uong mui ten xoay quanh
for(n=1;n<=10;n++)
   {
        off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d1=d5=d25=d21=c1=c5=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d2=d10=d24=d16=c2=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d3=d15=d23=d11=c3=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d2=d10=d24=d16=c1=c5=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d3=d15=d23=d11=c2=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d4=d20=d22=d6=c3=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d3=d15=d23=d11=c1=c5=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d4=d20=d22=d6=c2=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d5=d25=d21=d1=c3=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d4=d20=d22=d6=c1=c5=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d5=d25=d21=d6=c2=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d10=d24=d16=d1=c3=0;
               delay0(50);off();
               }
         }
   }
//Hieu ung mai uon luon cheo
for(n=1;n<=10;n++)
   {
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d1=d25=c1=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d2=d6=d24=d20=c2=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d3=d7=d11=d15=d19=d23=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d4=d8=d12=d16=d10=d14=d18=d22=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d5=d9=d13=d17=d21=c5=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d1=d25=c2=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d2=d6=d24=d20=d3=d7=d11=d15=d19=d23=d4=d8=d12=d16=d10=d14=d18=d22=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d5=d9=d13=d17=d21=c4=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
            hang1();    hang2();  hang3();  hang4();  hang5();
               c3=0;
               delay0(250);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d1=d25=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d2=d6=d24=d20=d3=d7=d11=d15=d19=d23=d4=d8=d12=d16=d10=d14=d18=d22=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d3=d7=d11=d15=d19=d23=c2=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d1=d25=c5=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d2=d6=d24=d20=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d3=d7=d11=d15=d19=d23=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d4=d8=d12=d16=d10=d14=d18=d22=c2=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d5=d9=d13=d17=d21=c1=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d1=d25=c4=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d2=d6=d24=d20=d3=d7=d11=d15=d19=d23=d4=d8=d12=d16=d10=d14=d18=d22=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d3=d7=d11=d15=d19=d23=c2=0;
               delay0(50);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
            hang1();    hang2();  hang3();  hang4();  hang5();
               c3=0;
               delay0(250);off();
               }
         }
      off();
      for(j=1;j<=5;j++)
         {
            for(k=1;k<=5;k++)
               {
               d1=d25=c2=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d2=d6=d24=d20=d3=d7=d11=d15=d19=d23=d4=d8=d12=d16=d10=d14=d18=d22=c3=0;
               delay0(50);off();
               }
            for(k=1;k<=5;k++)
               {
               d5=d9=d13=d17=d21=c4=0;
               delay0(50);off();
               }
         }
   }
//Hieu ung sang 1 den roi chay xuong sang 1 lop (tren xuong)
for(j=1;j<=2;j++)
   {
   d8=c5=0; delay2();
   d8=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
      for(k=1;k<=5;k++)
         {
         d8=c1=0; delay0(50); off();
         }
      for(k=1;k<=5;k++)
         {
         d19=c5=0; delay0(50); off();
         }
      }
   for(i=1;i<=5;i++)
      {
      for(k=1;k<=5;k++)
         {
         c1=d8=0; delay0(50); off();
         }
      for(k=1;k<=5;k++)
         {
         d19=c4=0; delay0(50); off();
         }
      }
   for(i=1;i<=5;i++)
      {
      for(k=1;k<=5;k++)
         {
         c1=d8=0; delay0(50); off();
         }
      for(k=1;k<=5;k++)
         {
         d19=c3=0; delay0(50); off();
         }
      }
   for(i=1;i<=5;i++)
      {
      for(k=1;k<=5;k++)
         {
         c1=d8=0; delay0(50); off();
         }
      for(k=1;k<=5;k++)
         {
         d19=c2=0; delay0(50); off();
         }
      }
   d8=d19=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d11=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d11=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d11=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d11=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d5=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d5=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d5=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d5=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d22=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d22=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d22=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d22=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d7=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d7=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d7=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d7=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d13=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d13=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d13=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d13=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d10=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d10=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d10=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d10=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d1=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d1=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d1=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d1=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d25=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d25=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d25=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d25=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d4=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d4=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d4=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d4=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d21=c5=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d20=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d20=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d20=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d20=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d9=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d9=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d9=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d9=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d17=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d17=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d17=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d17=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d3=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d3=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d3=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d3=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d6=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d6=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d6=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d6=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d15=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d15=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d15=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d15=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d23=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d23=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d23=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d23=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d2=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d2=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d2=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d2=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d14=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d14=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d14=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d14=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d16=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d16=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d16=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d16=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d18=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d18=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d18=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d18=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=d18=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=d18=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d12=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=d18=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d12=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=d18=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d12=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=d18=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d12=c2=0; delay0(50); off();
            }
      }
   d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=d18=d12=c1=0; delay2();
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=d18=d12=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d24=c5=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=d18=d12=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d24=c4=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=d18=d12=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d24=c3=0; delay0(50); off();
            }
      }
   for(i=1;i<=5;i++)
      {
         for(k=1;k<=5;k++)
            {
            d8=d19=d11=d5=d22=d7=d13=d10=d1=d25=d4=d21=d20=d9=d17=d3=d6=d15=d23=d2=d14=d16=d18=d12=c1=0; delay0(50); off();
            }
         for(k=1;k<=5;k++)
            {
            d24=c2=0; delay0(50); off();
            }
      }
   cot(); 
   c1=0; 
   delay2();
   }
//Phan ngc
cot(); c1=0; delay2();
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d2=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d18=d19=d20=d21=d22=d23=d24=d25=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d2=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d18=d19=d20=d21=d22=d23=d24=d25=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=c3=0; delay0(50); off();
		}
}			
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d2=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d18=d19=d20=d21=d22=d23=d24=d25=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d2=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d18=d19=d20=d21=d22=d23=d24=d25=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=c5=0; delay0(50); off();
		}
}//------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d2=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=d25=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d18=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d2=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=d25=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d18=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d2=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=d25=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d18=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d2=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=d25=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=c5=0; delay0(50); off();
		}
}//-------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=d25=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d2=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=d25=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d2=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=d25=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d2=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=d25=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=c5=0; delay0(50); off();
		}
}//---------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d25=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d25=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d25=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d11=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=c5=0; delay0(50); off();
		}
}//------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d11=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d11=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d11=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d15=d16=d17=d19=d20=d21=d22=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=c5=0; delay0(50); off();
		}
}//--------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d15=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d22=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d15=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d22=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d15=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d22=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d15=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=c5=0; delay0(50); off();
		}
}//----------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d15=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d15=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d15=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=c5=0; delay0(50); off();
		}
}//-------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d1=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d1=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d1=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d4=d5=d6=d7=d8=d10=d12=d13=d14=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=c5=0; delay0(50); off();
		}
}//------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d4=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d8=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d4=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d8=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d4=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d8=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d4=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d20=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=c5=0; delay0(50); off();
		}
}//-----------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d4=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d20=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d4=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d20=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d4=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d20=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d4=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=c5=0; delay0(50); off();
		}
}//-----------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d4=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d4=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d4=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d21=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=c5=0; delay0(50); off();
		}
}//--------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d21=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d21=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d21=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d7=d10=d12=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=c5=0; delay0(50); off();
		}
}//------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d10=d12=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d7=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d10=d12=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d7=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d10=d12=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d7=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d10=d12=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=c5=0; delay0(50); off();
		}
}//-----------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d10=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d12=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d10=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d12=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d10=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d12=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d5=d6=d10=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=c5=0; delay0(50); off();
		}
}//--------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d6=d10=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d5=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d6=d10=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d5=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d6=d10=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d5=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d6=d10=d13=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=c5=0; delay0(50); off();
		}
}//------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d6=d10=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d13=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d6=d10=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d13=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d6=d10=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d13=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d6=d10=d14=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=c5=0; delay0(50); off();
		}
}//------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d6=d10=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d14=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d6=d10=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d14=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d6=d10=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d14=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d6=d10=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=c5=0; delay0(50); off();
		}
}//-----------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d10=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d6=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d10=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d6=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d10=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d6=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d10=d16=d17=d19=d23=d24=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=c5=0; delay0(50); off();
		}
}//------------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d10=d16=d17=d19=d23=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d24=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d10=d16=d17=d19=d23=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d24=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d10=d16=d17=d19=d23=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d24=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d3=d10=d16=d17=d19=d23=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=c5=0; delay0(50); off();
		}
}//--------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d10=d16=d17=d19=d23=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d3=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d10=d16=d17=d19=d23=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d3=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d10=d16=d17=d19=d23=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d3=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d10=d16=d17=d19=d23=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=c5=0; delay0(50); off();
		}
}//-------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d10=d16=d17=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d23=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d10=d16=d17=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d23=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d10=d16=d17=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d23=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d10=d16=d17=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=c5=0; delay0(50); off();
		}
}//--------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d16=d17=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d10=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d16=d17=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d10=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d16=d17=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d10=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d16=d17=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=d10=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d10=c2=0; delay0(50); off();
		}
}//--------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d17=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=d10=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d16=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d17=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=d10=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d16=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d17=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=d10=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d16=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d17=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=d10=d16=c5=0; delay0(50); off();
		}
}//---------------------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=d10=d16=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d17=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=d10=d16=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d17=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=d10=d16=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d17=c4=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		c1=d19=0; delay0(50); off();	
		}
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=d10=d16=d17=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d17=c4=0; delay0(50); off();
		}
}//----------------------------------------
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=d10=d16=d17=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d19=c2=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=d10=d16=d17=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d19=c3=0; delay0(50); off();
		}
}
for(i=1;i<=5;i++)
{
	for(k=1;k<=5;k++)
		{
		d9=d18=d2=d25=d11=d22=d15=d1=d8=d20=d4=d21=d7=d12=d5=d13=d14=d6=d24=d3=d23=d10=d16=d17=c5=0; delay0(50); off();
		}
	for(k=1;k<=5;k++)
		{
		d19=c4=0; delay0(50); off();
		}
}
cot(); c5=0; delay2();
//Hieu ung 4 led o vuong nhay ngau nhien
for(i=0;i<=2;i++)
	{
	off();
	d1=d2=d6=d7=c1=c2=0; delay2(); off();
	d2=d3=d7=d8=c2=c3=0; delay2(); off();
	d8=d9=d13=d14=c3=c4=0; delay2(); off();
	d13=d14=d18=d19=c4=c5=0; delay2(); off();
	d12=d13=d17=d18=c4=c5=0; delay2(); off();
	d16=d17=d21=d22=c3=c4=0; delay2(); off();
	d16=d17=d21=d22=c2=c3=0; delay2(); off();
	d17=d18=d22=d23=c1=c2=0; delay2(); off();
	d13=d14=d18=d19=c1=c2=0; delay2(); off();
	d14=d15=d19=d20=c2=c3=0; delay2(); off();
	d9=d10=d14=d15=c3=c4=0; delay2(); off();
	d4=d5=d9=d10=c4=c5=0; delay2(); off();
	d3=d4=d8=d9=c4=c5=0; delay2(); off();
	d2=d3=d7=d8=c3=c4=0; delay2(); off();
	d2=d3=d7=d8=c2=c3=0; delay2(); off();
	d2=d3=d7=d8=c1=c2=0; delay2(); off();
	d6=d7=d11=d12=c1=c2=0; delay2(); off();
	d12=d13=d17=d18=c2=c3=0; delay2(); off();
	d18=d19=d23=d24=c1=c2=0; delay2(); off();
	d19=d20=d24=d25=c1=c2=0; delay2(); off();
	d19=d20=d24=d25=c2=c3=0; delay2(); off();
	d19=d20=d24=d25=c3=c4=0; delay2(); off();
	d14=d15=d19=d20=c3=c4=0; delay2(); off();
	d9=d10=d14=d15=c2=c3=0; delay2(); off();
	d4=d5=d9=d10=c1=c2=0; delay2(); off();
	d3=d4=d8=d9=c1=c2=0; delay2(); off();
	d8=d9=d13=d14=c1=c2=0; delay2(); off();
	d13=d14=d18=d19=c1=c2=0; delay2(); off();
	d17=d18=d22=d23=c1=c2=0; delay2(); off();
	d16=d17=d21=d22=c2=c3=0; delay2(); off();
	d16=d17=d21=d22=c3=c4=0; delay2(); off();
	d11=d12=d16=d17=c3=c4=0; delay2(); off();
	d7=d8=d12=d13=c3=c2=0; delay2(); off();
	d1=d2=d6=d7=c1=c2=0; delay2(); off();
	}
//Hieu ung 1 duong sang 3 led chay ngau tren khoi led
//Hieu ung 1 duong sang 3 led lat vi tri tren khoi led
//Hieu ung 1 duong sang 1 led chay ngau tren khoi led
//Hieu ung cac duong sang 3led chay len tren
}
}
