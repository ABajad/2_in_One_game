#include<iostream.h>
#include<conio.h>
#include<constrea.h>


void shipbody()
{
int c1=4,c2=15;		//COLORS OF SHIP
char sm,ss;	        //SHIP PIECES
sm=219;         	//SHIP PIECES           //SHIP MIDDLE
ss=220;                                         //SHIP SIDE (L,R)
			//SHIP BODY START
constream cout;
cout<<setclr(c1);
cout<<ss;
cout<<setclr(c2);
cout<<sm;
cout<<setclr(c1);
cout<<ss;
}               	//SHIP BODY END



void shippos(){

int c1=4,c2=15;		//COLORS OF SHIP
char sm,ss;	        //SHIP PIECES
sm=219;         	//SHIP PIECES           //SHIP MIDDLE
ss=220;                                         //SHIP SIDE (L,R)
			//SHIP BODY START
constream cout;

int p=3,i,k;            //starting pos
char c;

while(1){
if(kbhit()){
c=getch();

if(int(c)==27)
break;


if(int(c)==97)
if(p>3)   		//limit left
p--;

if(int(c)==100)
if(p<55)                //limit right
p++;
clrscr();
cout<<p;
gotoxy(p,23);


cout<<setclr(c1);
cout<<ss;
cout<<setclr(c2);
cout<<sm;
cout<<setclr(c1);
cout<<ss;

}
}
}

void main(){
shippos();
}