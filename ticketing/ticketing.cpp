#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>

int k=0,i,no=0,d=0,child,child2,child3,adult,adult2,adult3;

struct userinfo
{
char username[15];
char password[8];
int  a[15][36];
int  no;
int  cost;
}users[5];


struct movie
{
char lang;
char name[40];
int  date;
int  show;
int  mv;
int seat[15][36];
}
movies[15]={{'E',"DUNKIRK"},{'E',"DARK DAYS"},{'E',"ZOOTOPIA"},{'E',"FANTASTIC BEASTS & WTFT"},{'E',"BOSS BABY"}};//,{'E',"ABC"},{'E',"ABC"},{'E',"ABC"},{'E',"ABC"},{'E',"ABC"},{'E',"ABC"},{'E',"ABC"},{'E',"ABC"},{'E',"ABC"},{'E',"ABC"},{'E',"ABC"},{'E',"ABC"},{'E',"ABC"}};

void drawbar();
void mainscreen();
void logo();
void opening();
void loading();
void signin();
void login();
void menu();
void book();
void book2();
void book3();
void mainbook();
void menu2();
void cancel();
void confirm();
void success();
void bill();


void drawbar()
 {
       int i;
       setcolor(15);
       setfillstyle(9,7);
       bar(0,0,640,25);
       bar(640,455,0,480);
       setlinestyle(0,0,2);
       rectangle(-10,25,getmaxx()+2,getmaxy()-25);

}




void loading()
 {

 int a[]={275,285,275,315,290,300,275,385};
 cleardevice();
 drawbar();
 logo();

 setcolor(14);
 setlinestyle(0,0,3);
 delay(1000);
 circle(298,300,35);
 settextstyle(0,HORIZ_DIR,1);
 setcolor(15);
 delay(1000);
 outtextxy(287,320,"RAP");

 setcolor(8);
 setlinestyle(0,0,1);
 setfillstyle(1,8);
 bar(285,285,320,315);
 fillpoly(3,a);

 setcolor(15);
 settextstyle(3,HORIZ_DIR,1);
 delay(500);
 outtextxy(120,350,"Loading... ");

 setcolor(14);
  for(i=130;i<=485;i++)
    {
     delay(10);
     circle(i,400,10);
    }

 }





void logo()
{
setcolor(15);
setlinestyle(0,0,3);
settextstyle(4,HORIZ_DIR,5);

if(k==0)
{
delay(1000);
rectangle(125,95,490,235);
setcolor(14);
delay(1000);
rectangle(130,100,485,230);
setcolor(15);
delay(1000);
outtextxy(150,130,"RAP CINEMAS");
k++;
}

else
{
rectangle(125,95,490,235);
setcolor(14);
rectangle(130,100,485,230);
setcolor(15);
outtextxy(150,130,"RAP CINEMAS");
}
}







void opening()
{
 drawbar();
 settextstyle(4,0,4);
 outtextxy(getmaxx()/2-120,50,"RAP CINEMAS");
 setcolor(14);
 rectangle(getmaxx()/2-125,45,445,100);
 settextstyle(2,0,6);
 outtextxy(70,150,"PROJECT       :  RAP CINEMAS");
 setcolor(15);
 outtextxy(70,200,"PURPOSE       :  CINEMA TICKET BOOKING");
 setcolor(14);
 outtextxy(70,250,"GROUP MEMBERS :  1. ROHIT  2. ABHIJIT RAM  3. PARTHEBAN");
 setcolor(15);
 outtextxy(70,300,"SYNOPSIS      : ");
 settextstyle(2,0,5);
 outtextxy(235,306,"This is a project that enables the user(s) to book ");
 outtextxy(70,330,"cinema tickets in a fictional theatre called RAP CINEMAS. The user(s) can");
 outtextxy(70,350,"create an account can be used to book or cancel his");
 outtextxy(70,370,"tickets at any time.For booking or cancelling tickets he/she will be");
 outtextxy(70,390,"provided with a simulation of the cinema hall from which the user(s) can");
 outtextxy(70,410,"choose their seats.Then their bill is printed and the seat");
 outtextxy(70,430,"is occupied or cancelled respectively");

 getch();
 }



void book2()
{
  int mc=0;
  char ch=0;
  while(ch!='e')

  {
  cleardevice();
  drawbar();
  logo();
  settextstyle(7,0,1);
   outtextxy(239,260,"SELECT DATE:");
  settextstyle(7,0,1);

  outtextxy(115,325,"23-DEC");
  outtextxy(275,325,"24-DEC");
  outtextxy(435,325,"25-DEC");

  setcolor(14);
  rectangle(100+160*mc,305,200+160*mc,375);
  ch=getch();

if(ch=='a'&& mc>0)
 --mc;
else if(ch=='d'&& mc<2)
  ++mc;
else if(ch=='v')
 exit(0);
else if(ch=='e')
  {
  movies[i].date=mc;
  book3();
  break;}
else if(ch=='b')
  {book();
  break;
  }

}
}

void book3()
{
  int mc=0;
  char ch=0;
  while(1)

  {
  cleardevice();
  drawbar();
  logo();
  settextstyle(7,0,1);
   outtextxy(219,260,"SELECT SHOW TIMING:");
  settextstyle(7,0,1);

  outtextxy(105,325,"MORNING");
  outtextxy(265,325,"MATINEE");
  outtextxy(435,325,"NIGHT");

  setcolor(14);
  rectangle(100+160*mc,305,200+160*mc,375);
  ch=getch();

if(ch=='a'&& mc>0)
 {--mc;  }

else if(ch=='d'&& mc<2)
  {++mc;}
else if(ch=='v')
 exit(0);
else if(ch=='b')
 {book2();
 break;}
else if(ch=='e')
{movies[i].show=mc;
mainbook();
break;
}
}
}


void book()
{
 int mc=0;
char ch=0;
while(1)
{
cleardevice();
drawbar();

setlinestyle(0,0,1);
rectangle(35,100,255,160);
setcolor(14);
rectangle(40,105,250,155);

setcolor(15);
settextstyle(4,0,3);
outtextxy(55,113,"RAP CINEMAS");


settextstyle(2,0,5);
outtextxy(49,55,"ENGLISH");
outtextxy(128,55,"HINDI");
outtextxy(199,55,"TAMIL");

setlinestyle(0,0,1);
setcolor(15);
rectangle(35,45,255,80);

setcolor(14);
rectangle(40+70*mc,50,110+70*mc,75);

ch=getch();

if(ch=='a'&& mc>0)
 {--mc;  }
else if(ch=='d'&& mc<2)
  {++mc;}
else if(ch=='v')
 exit(0);
else if(ch=='e'||ch=='s')
 break;
}
if(mc==0&&ch=='e')
  {
   for(int h=0;h<7;h++)
   {
   setcolor(14);
   rectangle(345,45+h*60,545,75+h*60);
   circle(310,60+h*60,15);
   setcolor(15);
   rectangle(347,47+h*60,543,73+h*60);
   circle(310,60+h*60,13);}
   book2();
}
else if(mc==1&&ch=='e')
  {;}
else
  {;}
getch();
exit(0);

}


void mainbook()
{
 int i,j,k=0,x,y;
 char ch,ch2;

 cleardevice();
 drawbar();
 setcolor(14);
 setfillstyle(1,14);
 rectangle(245,45,400,85);
 setcolor(15);
 outtextxy(254,50,"BOOK YOUR SEAT");

 for(i=0;i<15;i++)
 for(j=0;j<36;j++)
    if(!movies[::i].seat[i][j])
    {
    setfillstyle(1,14);
    bar(50+15*j,190+15*i,60+15*j,200+15*i);
    }
    else if(movies[::i].seat[i][j]==1||movies[::i].seat[i][j]==2)
    {
    movies[::i].seat[i][j]=2;
    setfillstyle(1,15);
    rectangle(50+15*j,190+15*i,60+15*j,200+15*i);
    }
    setlinestyle(0,0,3);
    setcolor(BLUE);
    line(45,190,45,260);
    line(480,55,480,80);
    setcolor(RED);
    line(45,265,45,335);
    line(480,100,480,125);
    setcolor(BROWN);
    line(45,340,45,410);
    line(480,145,480,170);

    setlinestyle(0,0,1);
    setcolor(15);
    settextstyle(2,0,6);
    outtextxy(500,57,"BOX 1");
    outtextxy(500,102,"BOX 2");
    outtextxy(500,147,"BOX 3");

    setcolor(8);
    rectangle(470,50,555,175);
    setcolor(3);
    rectangle(220,120,425,180);
    settextstyle(8,0,3);
    setcolor(15);
    outtextxy(280,130,"SCREEN");


    i=0,j=0;                  ;
    setcolor(15);
    settextstyle(3,0,1);
    outtextxy(540,420,"BOOK");


 while(!k)
 {
 ch=getch();

 if(movies[::i].seat[i][j]==0)
{setfillstyle(1,14);
 bar(50+15*j,190+15*i,60+15*j,200+15*i);
}
 else if(movies[::i].seat[i][j]==1)
 {
  setfillstyle(1,9);
 bar(50+15*j,190+15*i,60+15*j,200+15*i);
 }
  else if(movies[::i].seat[i][j]==2)
  {
  setcolor(15);
  rectangle(50+15*j,190+15*i,60+15*j,200+15*i);
 }
  if(i==0 && j==0 && movies[::i].seat[i][j])
  { for(int p=0;p<15;p++)
   for(int q=0;q<36;q++)
      if(movies[::i].seat[p][q]==0)
	{i=p;
	 j=q;
	 q=36;
	 p=15;}
  }
  else if(ch=='d'&&j<35&&movies[::i].seat[i][j+1]!=2)
  j++;
  else if(ch=='a'&&j>0&&movies[::i].seat[i][j-1]!=2)
  j--;
  else if(ch=='w'&&i>0&&movies[::i].seat[i-1][j]!=2)
  i--;
  else if(ch=='s'&&i<14&&movies[::i].seat[i+1][j]!=2)
  i++;
  else if(ch=='s' &&movies[::i]. seat[i+1][j]!=2)
  {
  setcolor(11);
  rectangle(530,420,590,450);
  ch2=getch();
  if(ch2=='e')
   k++;
  else
   {
   setcolor(0);
   rectangle(530,420,590,450);
   }
  }
  else if(ch=='s')
   {for(x=i;x<15;x++)
   for(y=j+1;y<36;y++)
     if(movies[::i].seat[x][y]==0)
       {i=x;
       j=y;
       y=36;
       x=15;
       }
    }
   else if(ch=='e')
      {
       if(movies[::i].seat[i][j]==0)
       {
	if(i<=14&&j<35)
	{
	 movies[::i].seat[i][j]=1;
	 setfillstyle(1,9);
	 bar(50+15*j,190+15*i,60+15*j,200+15*i);
	 if(movies[::i].seat[i][j+1]!=2)
	 j++;
	 else
	 for(int x=i;x<15;x++)
	 for(int y=j;y<36;y++)
	 if(movies[::i].seat[x][y]!=2)
	   {i=x;
	    j=y;
	    break;}	}
	else if(j==35&&i<14)
	{
	 movies[::i].seat[i][j]=1;
	 setfillstyle(1,9);
	 bar(50+15*j,190+15*i,60+15*j,200+15*i);
	 if(movies[::i].seat[i+1][j]!=2)
	 i++;
	 else
	 for(int x=i;x<15;x++)
	 for(int y=j;y<36;y++)
	 if(movies[::i].seat[x][y]!=2)
	   {i=x;
	    j=y;
	    break;}
	}
	else if(i==14)
	{
	 movies[::i].seat[i][j]=1;
	 setfillstyle(1,9);
	 bar(50+15*j,190+15*i,60+15*j,200+15*i);
	 if(movies[::i].seat[i-1][j]!=2)
	 i--;
	 else
	 for(int x=i;x<15;x++)
	 for(int y=j;y<36;y++)
	 if(movies[::i].seat[x][y]!=2)
	   {i=x;
	    j=y;
	    break;}
	  }


       }
       }
  else if(ch=='c'&&movies[::i].seat[i][j]==1)
       {if(i<=14&&j<35)
	{
	 movies[::i].seat[i][j]=0;
	 setfillstyle(1,14);
	 bar(50+15*j,190+15*i,60+15*j,200+15*i);
	 if(movies[::i].seat[i][j+1]!=2)
	 j++;
	 else
	 for(int x=i;x<15;x++)
	 for(int y=j;y<36;y++)
	 if(movies[::i].seat[x][y]!=2)
	   {i=x;
	    j=y;
	    break;}	}

	else if(j==35&&i<14)
	{
	 movies[::i].seat[i][j]=0;
	 setfillstyle(1,14);
	 bar(50+15*j,190+15*i,60+15*j,200+15*i);
	 if(movies[::i].seat[i+1][j]!=2)
	 i++;
	 else
	 for(int x=i;x<15;x++)
	 for(int y=j;y<36;y++)
	 if(movies[::i].seat[x][y]!=2)
	   {i=x;
	    j=y;
	    break;}	}


	else if(i==14)
	{
	 movies[::i].seat[i][j]=0;
	 setfillstyle(1,14);
	 bar(50+15*j,190+15*i,60+15*j,200+15*i);
	 if(movies[::i].seat[i-1][j])
	 i--;
	 else
	 for(int x=i;x<15;x++)
	 for(int y=j;y<36;y++)
	 if(movies[::i].seat[x][y]!=2)
	   {i=x;
	    j=y;
	    break;}
	}
       }
  else if(ch=='v')
  exit(0);

  else if(ch=='b')
  {
  book3();
  break;
  }
  setfillstyle(1,15);
  bar(50+15*j,190+15*i,60+15*j,200+15*i);
  }
  for(i=0;i<15;i++)
  for(j=0;j<36;j++)
   if(movies[::i].seat[i][j]==1)
    users[::i].a[i][j]=1;

  confirm();

  }


void confirm()
{
  cleardevice();
  drawbar();
  int i,j,k,a1=0,a2=0,a3=0,price2=0;
  long int price=0;
  char ch;

  setcolor(14);
  rectangle(45,45,224,85);
  setcolor(15);
  settextstyle(4,0,2);
  outtextxy(57,50,"RAP CINEMAS");

  settextstyle(1,0,1);
  outtextxy(35,140,"BILL:");

  setcolor(GREEN);
  rectangle(400,50,550,170);
  rectangle(400,30,550,170);
  rectangle(400,30,465,170);
  rectangle(400,30,506,170);

  settextstyle(2,0,6);
  setcolor(3);
  outtextxy(410,57,"BOX 1");
  setcolor(10);
  outtextxy(410,102,"BOX 2");
  setcolor(8);
  outtextxy(410,145,"BOX 3");

  settextstyle(2,0,4);
  setcolor(3);
  outtextxy(470,60,"Rs.80");
  outtextxy(510,60,"Rs.90");
  setcolor(10);
  outtextxy(470,105,"Rs.90");
  outtextxy(510,105,"Rs.100");
  setcolor(8);
  outtextxy(470,148,"Rs.110");
  outtextxy(510,148,"Rs.130");

  setcolor(15);
  outtextxy(420,35,"BOX");
  outtextxy(470,35,"CHILD");
  outtextxy(512,35,"ADULT");

  setcolor(3);
  settextstyle(7,1,1);
  outtextxy(375,35,"RAP PRICES");

  settextstyle(3,1,1);
  setcolor(15);
  settextstyle(6,0,1);
  rectangle(130,180,550,410);
  rectangle(130,180,550,210);
  rectangle(130,180,200,410);
  rectangle(130,180,345,410);
  rectangle(130,180,425,410);
  rectangle(130,180,550,275);
  rectangle(130,180,550,343);
  setcolor(14);
  outtextxy(150,180,"BOX");
  outtextxy(210,180,"TICKETS BOOKED");
  outtextxy(369,180,"C/A");
  outtextxy(450,180,"AMOUNT");

  setcolor(15);
  settextstyle(2,0,5);
  if(movies[::i].mv==0)
    outtextxy(130,160,"MOVIE:DUNKIRK");
  else if(movies[::i].mv==1)
    outtextxy(130,160,"MOVIE:NEWTON");
  else
    outtextxy(130,160,"MOVIE:MERSAL");

  if(movies[::i].date==0)
   outtextxy(255,160,"DATE:23-DEC");
  else if(movies[::i].date==1)
   outtextxy(255,160,"DATE:24-DEC");
  else
   outtextxy(255,160,"DATE:25-DEC");

  if(movies[::i].show==0)
   outtextxy(345,160,"(Mo)");
  else if(movies[::i].show==1)
   outtextxy(355,160,"(Ma)");
  else
   outtextxy(355,160,"(N)");
  setcolor(BLUE);
  outtextxy(160,235,"1");
  setcolor(RED);
  outtextxy(160,295,"2");
  setcolor(BROWN);
  outtextxy(160,355,"3");

  settextstyle(2,0,4);
  setcolor(BLUE);
  outtextxy(350,225,"CHILD");
  outtextxy(350,257,"ADULT");

  setcolor(RED)   ;
  outtextxy(350,289,"CHILD");
  outtextxy(350,320,"ADULT");

  setcolor(BROWN);
  outtextxy(350,353,"CHILD");
  outtextxy(350,385,"ADULT");

  for(i=0;i<15;i++)
  for(j=0;j<36;j++)
    if(movies[::i].seat[i][j]==1)
    if(i<5)
     ++a1;
    else if(i<10)
     ++a2;
    else
     ++a3;

  gotoxy(34,16);
  cout<<a1;
  gotoxy(34,20);
  cout<<a2;
  gotoxy(34,24);
  cout<<a3;

  if(a1)
  {
 do{
  price2=0;
  gotoxy(50,15);
  cin>>child;
  gotoxy(50,17);
  cin>>adult;
  price2=child*80+adult*90;
  price+=price2;
  gotoxy(58,16);
  cout<<"RS. "<<price2;
  setcolor(14);
  settextstyle(6,0,1);
  if((child+adult)!=a1)
   {
   setcolor(14);
   settextstyle(6,0,1);
   outtextxy(50,415,"Please re-book adult & child tickets for your reservations");
   getch();
   setfillstyle(0,0);
   bar(50,415,500,440);
   bar(390,220,420,268);
   bar(440,220,540,270);
   price-=price2;
   }
   }while(child+adult!=a1);
   }

  if(a2)
  {
 do{
  price2=0;
  gotoxy(50,19);
  cin>>child2;
  gotoxy(50,21);
  cin>>adult2;
  price2=child2*90+adult2*100;
  price+=price2;
  gotoxy(58,20);
  cout<<"RS. "<<price2;
  setcolor(14);
  settextstyle(6,0,1);
  if((child2+adult2)!=a2)
   {
   setcolor(14);
   settextstyle(6,0,1);
   outtextxy(50,415,"Please re-book adult & child tickets for your reservations");
   getch();
   setfillstyle(0,0);
   bar(50,415,500,440);
   bar(390,278,420,336);
   bar(440,278,540,336);
   price-=price2;
   }
   }while(child2+adult2!=a2);
   }

  if(a3)
  {
 do{
  price2=0;
  gotoxy(50,23);
  cin>>child3;
  gotoxy(50,25);
  cin>>adult3;
  price2=child3*110+adult3*130;
  price+=price2;
  gotoxy(58,24);
  cout<<"RS. "<<price2;
  setcolor(14);
  settextstyle(6,0,1);
  if((child3+adult3)!=a3)
   {
   setcolor(14);
   settextstyle(6,0,1);
   outtextxy(50,415,"Please re-book adult & child tickets for your reservations");
   getch();
   setfillstyle(0,0);
   bar(50,415,500,440);
   bar(390,345,420,405);
   bar(440,345,540,405);
   price-=price2;
   }
   }while(child3+adult3!=a3);
   }

  price+=price/10+price/20;
  gotoxy(38,25);
  cout<<"\n\n                         GST:10%    OTHER:5%     BILL AMOUNT:RS "<<setprecision(2)<<price;
  drawbar();
  setcolor(15);
  settextstyle(6,0,1);
  outtextxy(400,428,"CONFIRM BOOKING");
  setcolor(14);
  rectangle(398,434,538,452);
  ch=getch();
  if(ch=='e')
  {
  users[::i].no=a1+a2+a3;
  users[::i].cost=price;
  success();
  }
  else if(ch=='b')
  {
  for(i=0;i<15;i++)
  for(j=0;j<36;j++)
   if(users[::i].a[i][j]==1)
    movies[::i].seat[i][j]=0;
  mainbook();
    }
}

void cancel()
{
 int i,j,k=0;
 char ch,ch2;

 cleardevice();
 drawbar();
 setcolor(14);
 setfillstyle(1,14);
 rectangle(245,45,420,85);
 setcolor(15);
 outtextxy(254,50,"CANCEL YOUR SEAT");

 for(i=0;i<15;i++)
 for(j=0;j<36;j++)
    if(movies[::i].seat[i][j]==0)
    {
    setfillstyle(1,14);
    bar(50+15*j,190+15*i,60+15*j,200+15*i);
    }
    else if(users[::i].a[i][j]==1)
    {
    setfillstyle(1,9);
    bar(50+15*j,190+15*i,60+15*j,200+15*i);
    }
    else if(movies[::i].seat[i][j]!=0 && users[::i].a[i][j]==0)
    rectangle(50+15*j,190+15*i,60+15*j,200+15*i);

    setlinestyle(0,0,3);
    setcolor(BLUE);
    line(45,190,45,260);
    line(480,55,480,80);
    setcolor(RED);
    line(45,265,45,335);
    line(480,100,480,125);
    setcolor(BROWN);
    line(45,340,45,410);
    line(480,145,480,170);


    setcolor(15);
    settextstyle(2,0,6);
    outtextxy(500,57,"BOX 1");
    outtextxy(500,102,"BOX 2");
    outtextxy(500,147,"BOX 3");

    setcolor(8);
    rectangle(470,50,555,175);
    setcolor(3);
    rectangle(220,120,425,180);
    settextstyle(8,0,3);
    setcolor(15);
    outtextxy(280,130,"SCREEN");


    i=0,j=0;                  ;
    setcolor(15);
    settextstyle(3,0,1);
    outtextxy(540,420,"DONE");

 ch=getch();
 while(!k)
 {
 ch=getch();

 if(movies[::i].seat[i][j]==0)
 {
  setfillstyle(1,14);
  bar(50+15*j,190+15*i,60+15*j,200+15*i);
 }
 else if(users[::i].a[i][j]==1)
 {
  setfillstyle(1,9);
 bar(50+15*j,190+15*i,60+15*j,200+15*i);
 }
 else
  {
  setlinestyle(0,0,1);
  rectangle(50+15*j,190+15*i,60+15*j,200+15*i);
 }

  if(i==0 && j==0 && movies[::i].seat[i][j])
  {
   for(int p=0;p<15;p++)
   for(int q=0;q<36;q++)
      if(movies[::i].seat[p][q]==0)
	{i=p;
	 j=q;
	 q=36;
	 p=15;}
  }
  else if(ch=='d'&& j<35 && movies[::i].seat[i][j+1]!=2)
  j++;
  else if(ch=='a'&&j>0&& movies[::i].seat[i][j-1]!=2)
  j--;
  else if(ch=='w'&&i>0&& movies[::i].seat[i-1][j]!=2)
  i--;
  else if(ch=='s'&&i<14&& movies[::i].seat[i+1][j]!=2)
  i++;
  else if(ch=='s')
  {
  setcolor(11);
  rectangle(530,420,590,450);
  ch2=getch();
  if(ch2=='e')
   k++;
  else
   {
   setcolor(0);
   rectangle(530,420,590,450);
   }
  }
  else if(ch=='c')
       {
       if(users[::i].a[i][j]==1)
       {setcolor(15);
       outtextxy(50,420,"ARE YOU SURE YOU WANT TO CANCEL YOUR TICKET?");
	ch2=getch();
	setfillstyle(0,0);
	bar(45,415,515,440);
	if(ch2=='e')
	{
	if(i<=14&&j<35)
	{
	 movies[::i].seat[i][j]=users[::i].a[i][j]=0;
	 setfillstyle(1,14);
	 bar(50+15*j,190+15*i,60+15*j,200+15*i);
	 if(movies[::i].seat[i][j+1]!=2)
	 j++;
	 else
	 for(int x=i;x<15;x++)
	 for(int y=j;y<36;y++)
	 if(movies[::i].seat[x][y]!=2)
	   {i=x;
	    j=y;
	    break;}	}
	else if(j==35&&i<14)
	{
	 movies[::i].seat[i][j]=users[::i].a[i][j]=0;
	 setfillstyle(1,14);
	 bar(50+15*j,190+15*i,60+15*j,200+15*i);
	 if(movies[::i].seat[i+1][j]!=2)
	 i++;
	 else
	 for(int x=i;x<15;x++)
	 for(int y=j;y<36;y++)
	 if(movies[::i].seat[x][y]!=2)
	   {i=x;
	    j=y;
	    break;}
	}
	else if(i==14)
	{
	 movies[::i].seat[i][j]=users[::i].a[i][j]=0;
	 setfillstyle(1,14);
	 bar(50+15*j,190+15*i,60+15*j,200+15*i);
	 if(movies[::i].seat[i-1][j]!=2)
	 i--;
	 else
	 for(int x=i;x<15;x++)
	 for(int y=j;y<36;y++)
	 if(movies[::i].seat[x][y]!=2)
	   {i=x;
	    j=y;
	    break;};
	}
	}
	else
	j++;
	}}
  else if(ch=='v')
  exit(0);

  else if(ch=='b')
  {
  mainscreen();
  break;
  }
  setfillstyle(1,15);
  bar(50+15*j,190+15*i,60+15*j,200+15*i);
  }
confirm();
cleardevice();
drawbar();
logo();
d=1;
settextstyle(3,0,1);
outtextxy(80,300,"CONGRATULATIONS! YOUR TICKETS HAVE BEEN CANCELLED");
settextstyle(7,0,1);
outtextxy(200,380,"BACK TO MAIN MENU");
getch();
setcolor(14);
rectangle(190,370,430,415);
do
{
ch=getch();
}while(ch!='e');
mainscreen();

}



void success()
{
cleardevice();
drawbar();
logo();
d=1;
settextstyle(3,0,1);
outtextxy(80,300,"CONGRATULATIONS! YOUR BOOKING HAS BEEN CONFIRMED");
settextstyle(7,0,1);
outtextxy(200,380,"BACK TO MAIN MENU");
getch();
setcolor(14);
rectangle(190,370,430,415);
char ch;
do
{
ch=getch();
}while(ch!='e');
mainscreen();
}

void bill()
{

cleardevice();
  drawbar();
  int i,j,k,a1=0,a2=0,a3=0,price2=0;
  long int price=0;

  setcolor(14);
  rectangle(45,45,224,85);
  setcolor(15);
  settextstyle(4,0,2);
  outtextxy(57,50,"RAP CINEMAS");

  settextstyle(1,0,1);
  outtextxy(35,140,"BILL:");

  setcolor(GREEN);
  rectangle(400,50,550,170);
  rectangle(400,30,550,170);
  rectangle(400,30,465,170);
  rectangle(400,30,506,170);

  settextstyle(2,0,6);
  setcolor(3);
  outtextxy(410,57,"BOX 1");
  setcolor(10);
  outtextxy(410,102,"BOX 2");
  setcolor(8);
  outtextxy(410,145,"BOX 3");

  settextstyle(2,0,4);
  setcolor(3);
  outtextxy(470,60,"Rs.80");
  outtextxy(510,60,"Rs.90");
  setcolor(10);
  outtextxy(470,105,"Rs.90");
  outtextxy(510,105,"Rs.100");
  setcolor(8);
  outtextxy(470,148,"Rs.110");
  outtextxy(510,148,"Rs.130");

  setcolor(15);
  outtextxy(420,35,"BOX");
  outtextxy(470,35,"CHILD");
  outtextxy(512,35,"ADULT");

  setcolor(3);
  settextstyle(7,1,1);
  outtextxy(375,35,"RAP PRICES");

  settextstyle(3,1,1);
  setcolor(15);
  settextstyle(6,0,1);
  rectangle(130,180,550,410);
  rectangle(130,180,550,210);
  rectangle(130,180,200,410);
  rectangle(130,180,345,410);
  rectangle(130,180,425,410);
  rectangle(130,180,550,275);
  rectangle(130,180,550,343);
  setcolor(14);
  outtextxy(150,180,"BOX");
  outtextxy(210,180,"TICKETS BOOKED");
  outtextxy(369,180,"C/A");
  outtextxy(450,180,"AMOUNT");

  setcolor(15);
  settextstyle(2,0,5);
  if(movies[::i].mv==0)
    outtextxy(130,160,"MOVIE:DUNKIRK");
  else if(movies[::i].mv==1)
    outtextxy(130,160,"MOVIE:NEWTON");
  else
    outtextxy(130,160,"MOVIE:MERSAL");

  if(movies[::i].date==0)
   outtextxy(255,160,"DATE:23-DEC");
  else if(movies[::i].date==1)
   outtextxy(255,160,"DATE:24-DEC");
  else
   outtextxy(255,160,"DATE:25-DEC");

  if(movies[::i].show==0)
   outtextxy(345,160,"(Mo)");
  else if(movies[::i].show==1)
   outtextxy(355,160,"(Ma)");
  else
   outtextxy(355,160,"(N)");
  setcolor(BLUE);
  outtextxy(160,235,"1");
  setcolor(RED);
  outtextxy(160,295,"2");
  setcolor(BROWN);
  outtextxy(160,355,"3");

  settextstyle(2,0,4);
  setcolor(BLUE);
  outtextxy(350,225,"CHILD");
  outtextxy(350,257,"ADULT");

  setcolor(RED)   ;
  outtextxy(350,289,"CHILD");
  outtextxy(350,320,"ADULT");

  setcolor(BROWN);
  outtextxy(350,353,"CHILD");
  outtextxy(350,385,"ADULT");

  for(i=0;i<15;i++)
  for(j=0;j<36;j++)
    if(movies[::i].seat[i][j]==1)
    if(i<5)
     ++a1;
    else if(i<10)
     ++a2;
    else
     ++a3;

  gotoxy(34,16);
  cout<<a1;
  gotoxy(34,20);
  cout<<a2;
  gotoxy(34,24);
  cout<<a3;

  if(a1)
  {
  price2=0;
  gotoxy(50,15);
  cout<<child;
  gotoxy(50,17);
  cout<<adult;
  price2=child*80+adult*90;
  price+=price2;
  gotoxy(58,16);
  cout<<"RS. "<<price2;
   }

  if(a2)
  {
  price2=0;
  gotoxy(50,19);
  cout<<child2;
  gotoxy(50,21);
  cout<<adult2;
  price2=child2*80+adult2*90;
  price+=price2;
  gotoxy(58,20);
  cout<<"RS. "<<price2;

   }

  if(a3)
  {
  price2=0;
  gotoxy(50,23);
  cout<<child3;
  gotoxy(50,25);
  cout<<adult3;
  price2=child3*80+adult3*90;
  price+=price2;
  gotoxy(58,24);
  cout<<"RS. "<<price2;

   }

  price+=price/10+price/20;
  gotoxy(38,25);
  cout<<"\n\n                         GST:10%    OTHER:5%     BILL AMOUNT:RS "<<setprecision(2)<<price;
  drawbar();
  getch();

}

void mainscreen()
{

 int mc=0;
char ch=0;
while(ch!='e')

{
cleardevice();
drawbar();

setlinestyle(0,0,3);
rectangle(35,120,400,260);
setcolor(14);
rectangle(40,125,395,255);
setcolor(15);

settextstyle(4,0,5);
outtextxy(60,155,"RAP CINEMAS");


setcolor(15);
settextstyle(6,0,1);
outtextxy(44,325,"BOOK YOUR TICKET");
outtextxy(234,325,"CANCEL YOUR TICKET");
outtextxy(499,325,"EXIT");
settextstyle(2,0,5);
outtextxy(49,55,"PROFILE");
outtextxy(115,55,"BOOKINGS");
outtextxy(192,55,"LOGOUT");
outtextxy(269,55,"HELP");

setlinestyle(0,0,1);
setcolor(15);
rectangle(35,45,325,80);
rectangle(30,300,600,380);

setcolor(14);
if(mc<=1)
rectangle(35+190*mc,305,195+210*mc,375);
else
rectangle(430,305,595,375);
ch=getch();

if(ch=='a'&& mc>0)
 {
  --mc; }
else if(ch=='d'&& mc<2)
  {
   ++mc;
  }
else if(ch=='w')
  {
   menu2();
     }
else if(ch=='v')
 exit(0);
}

if(mc==0)
 book();
else if(mc==1)
 cancel();
else
 exit(0);

}

void menu2()
{
 int mc=0,y=0;
char ch=0;
while(1)
{
cleardevice();
drawbar();

setlinestyle(0,0,3);
rectangle(35,120,400,260);
setcolor(14);
rectangle(40,125,395,255);
setcolor(15);

settextstyle(4,0,5);
outtextxy(60,155,"RAP CINEMAS");


setcolor(15);
settextstyle(6,0,1);
outtextxy(44,325,"BOOK YOUR TICKET");
outtextxy(234,325,"CANCEL YOUR TICKET");
outtextxy(499,325,"EXIT");
settextstyle(2,0,5);
outtextxy(49,55,"PROFILE");
outtextxy(115,55,"BOOKINGS");
outtextxy(192,55,"LOGOUT");
outtextxy(269,55,"HELP");

setlinestyle(0,0,1);
setcolor(15);
rectangle(35,45,325,80);
rectangle(30,300,600,380);

setcolor(14);
rectangle(40+70*mc,50,110+70*mc,75);

ch=getch();

if(ch=='a'&& mc>0)
 {--mc;  }
else if(ch=='d'&& mc<3)
  {++mc;}
else if(ch=='v')
 exit(0);
else if(ch=='e'||ch=='s')
 break;
}

if(mc==2&&ch=='e')
 menu();
else if(mc==1&&ch=='e')
 {
 if(d==1)
 {cleardevice();
 settextstyle(2,0,7);
 outtextxy(265,50,"BOOKINGS");
 setcolor(15);
 rectangle(255,45,365,80);
 gotoxy(5,5);
 cout<<"\n\n\n\tYOUR LAST BOOKING:";
 cout<<"\n\t\tDate:  ";
 if(movies[i].date==0)
 cout<<"23 DEC";
 else if(movies[i].date==1)
 cout<<"24-DEC";
 else
 cout<<"25-DEC";
 cout<<"\n\t\tShow:  ";
 if(movies[i].show==0)
 cout<<"MORNING";
 else if(movies[i].show==1)
 cout<<"MATINEE";
 else
 cout<<"NIGHT";
 cout<<"\n\t\tMOVIE: ";
 if(movies[i].mv==0)
 cout<<"DUNKIRK";
 else if(movies[i].mv==1)
 cout<<"NEWTON";
 else
 cout<<"MERSAL";
 cout<<"\n\n\n\n\n\t\t\tVIEW LAST BILL";
 rectangle(175,220,320,275);
 drawbar();
 char ch2;
 ch2=getch();
 if(ch2=='e')
   bill();
 }
 }
else if(mc==3&&ch=='e')
{
cleardevice();
drawbar();
setcolor(14);
settextstyle(2,0,7);
outtextxy(288,50,"HELP");
 setcolor(15);
 rectangle(255,45,365,80);

setfillstyle(1,8);
bar(90,140,550,410);
setcolor(0);
rectangle(100,150,540,400);
settextstyle(2,0,5);
outtextxy(190,180,"w,s,a,d        -     Up,Down,Left,Right");
outtextxy(190,220,"e              -     Enter (or) Book");
outtextxy(190,260,"c              -     Cancel ticket ");
outtextxy(190,300,"b              -     Back");
outtextxy(190,340,"v              -     Exit");
getch();
}
else if(mc==0&&ch=='e')
 {
 char ch2,m=0;
 while(ch2!='e')
 {cleardevice();
 drawbar();
 logo();
 setcolor(15);
settextstyle(1,0,1);
outtextxy(136,325,"CHANGE DETAILS");
outtextxy(325,325,"DELETE ACCOUNT");
setcolor(14);
rectangle(130+190*m,305,290+190*m,375);
ch2=getch();

if(ch2=='a'&& m==1)
 {--m;  }

else if(ch2=='d'&& m==0)
  {++m;}
else if(ch2=='v')
 exit(0);
}
 if(ch2=='e'&&m==0)
 {cleardevice();
drawbar();

char ch,a[15],b[8];
int j,p=1;

setcolor(14);
  rectangle(193,45,462,105);
  setcolor(15);
  settextstyle(4,0,4);
  outtextxy(210,55,"RAP CINEMAS");

 rectangle(100,128,548,360);
 line(100,208,548,208);
 setlinestyle(0,0,2);
 setcolor(14);
 rectangle(102,131,545,205);
 setcolor(15);
 rectangle(350,250,530,275);
 rectangle(350,283,530,307);
 settextstyle(9,0,2);
 outtextxy(242,146,"CHANGE DETAILS");
 settextstyle(0,0,0);
 outtextxy(130,258,"Enter Username:");
 outtextxy(130,293,"Password:");

 gotoxy(45,17);
 gets(a);

 gotoxy(45,19);
 gets(b);

 for(j=0;j<no;j++)
  if(strcmp(a,users[j].username)==0 && strcmp(b,users[j].password)==0)
  {
  ::i=j;

   settextstyle(1,0,3);
   outtextxy(515,415,"DONE");
   rectangle(500,410,590,450);


cleardevice();
drawbar();

setcolor(14);
  rectangle(193,45,462,105);
  setcolor(15);
  settextstyle(4,0,4);
  outtextxy(210,55,"RAP CINEMAS");

 rectangle(100,128,548,360);
 line(100,208,548,208);
 setlinestyle(0,0,2);
 setcolor(14);
 rectangle(102,131,545,205);
 setcolor(15);
 rectangle(350,250,530,275);
 rectangle(350,283,530,307);
 settextstyle(9,0,2);
 outtextxy(242,146,"NEW DETAILS");
 settextstyle(0,0,0);
 outtextxy(130,258,"Enter Username(max 15):");
 outtextxy(130,293,"Password(max 8):");

 do
 {
 gotoxy(45,17);
 gets(users[::i].username);
 if(strlen(users[::i].username)>15)
 { gotoxy(45,17);
 puts("                      ");
 }
 }while(strlen(users[::i].username)>15);

 do
 {
 gotoxy(45,19);
 gets(users[::i].password);
 if(strlen(users[::i].password)>8)
 { gotoxy(45,19);
 puts("                      ");
 }
 }while(strlen(users[::i].password)>8);
 settextstyle(2,0,7);
 outtextxy(519,420,"DONE");
  getch();
  rectangle(500,410,590,450);


getch();
menu();
exit(0);

  p=0;
  getch();
  break;
  }

  if(p==0)
   mainscreen();

   else
   {
   settextstyle(0,0,1);
 outtextxy(410,420,"WRONG PASSWORD.Press any key");

 ch=getch();
 if(ch=='v')
  exit(0);
 else
  menu();
  }
}

 else
 {
 cleardevice();
drawbar();

char ch,a[15],b[8];

setcolor(14);
  rectangle(193,45,462,105);
  setcolor(15);
  settextstyle(4,0,4);
  outtextxy(210,55,"RAP CINEMAS");

 rectangle(100,128,548,360);
 line(100,208,548,208);
 setlinestyle(0,0,2);
 setcolor(14);
 rectangle(102,131,545,205);
 setcolor(15);
 settextstyle(9,0,2);
 outtextxy(242,146,"DELETE PROFILE");
 settextstyle(0,0,0);
 outtextxy(130,258,"Are you sure you want to delete your account?(y/n):");

 ch=getch();
 if(ch=='y')
 {
 for(int h=::i;h<no;h++)
  {users[h]=users[h+1];
   }
 }
}
}

}



void signin()
{
cleardevice();
drawbar();
int x=no;

setcolor(14);
  rectangle(193,45,462,105);
  setcolor(15);
  settextstyle(4,0,4);
  outtextxy(210,55,"RAP CINEMAS");

 rectangle(100,128,548,360);
 line(100,208,548,208);
 setlinestyle(0,0,2);
 setcolor(14);
 rectangle(102,131,545,205);
 setcolor(15);
 rectangle(350,250,530,275);
 rectangle(350,283,530,307);
 settextstyle(9,0,2);
 outtextxy(242,146,"RAP SIGNIN");
 settextstyle(0,0,0);
 outtextxy(130,258,"Enter Username(max 15):");
 outtextxy(130,293,"Password(max 8):");

 do
 {
 gotoxy(45,17);
 gets(users[x].username);
 if(strlen(users[x].username)>15)
 { gotoxy(45,17);
 puts("                      ");
 }
 }while(strlen(users[x].username)>15);

 do
 {
 gotoxy(45,19);
 gets(users[x].password);
 if(strlen(users[x].password)>8)
 { gotoxy(45,19);
 puts("                      ");
 }
 }while(strlen(users[x].password)>8);
 settextstyle(2,0,7);
 outtextxy(519,420,"DONE");
  getch();
  rectangle(500,410,590,450);


no++;
getch();
menu();
exit(0);
}



void login()
{
cleardevice();
drawbar();

char ch,a[15],b[8];
int j,p=1;

setcolor(14);
  rectangle(193,45,462,105);
  setcolor(15);
  settextstyle(4,0,4);
  outtextxy(210,55,"RAP CINEMAS");

 rectangle(100,128,548,360);
 line(100,208,548,208);
 setlinestyle(0,0,2);
 setcolor(14);
 rectangle(102,131,545,205);
 setcolor(15);
 rectangle(350,250,530,275);
 rectangle(350,283,530,307);
 settextstyle(9,0,2);
 outtextxy(242,146,"RAP LOGIN");
 settextstyle(0,0,0);
 outtextxy(130,258,"Enter Username:");
 outtextxy(130,293,"Password:");

 gotoxy(45,17);
 gets(a);

 gotoxy(45,19);
 gets(b);

 for(j=0;j<no;j++)
  if(strcmp(a,users[j].username)==0 && strcmp(b,users[j].password)==0)
  {
  ::i=j;

   settextstyle(1,0,3);
   outtextxy(515,415,"LOGIN");
   rectangle(500,410,590,450);

  p=0;
  getch();
  break;
  }

  if(p==0)
   mainscreen();

   else
   {
   settextstyle(0,0,1);
 outtextxy(410,420,"WRONG PASSWORD.Press any key");

 ch=getch();
 if(ch=='v')
  exit(0);
 else
  menu();
  }

}



void menu()
{
int mc=0;
char ch=0;
while(ch!='e')

{
cleardevice();
drawbar();
logo();

setcolor(15);
settextstyle(1,0,3);
outtextxy(179,325,"LOGIN");
outtextxy(349,325,"REGISTER");
setcolor(14);
rectangle(130+190*mc,305,290+190*mc,375);
ch=getch();
if(ch=='a'&& mc==1)
 {--mc;  }

else if(ch=='d'&& mc==0)
  {++mc;}
}
if(mc)
 signin();
else
 login();
}



void main()
    {
    int gd=DETECT,gm,d;
    initgraph (&gd,&gm,"C:\\Turboc3\\BGI");
    setbkcolor(0);

   /* opening();
    loading();
    getch(); */

    menu();
    closegraph();
    }


