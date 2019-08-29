#include<iostream.h>
#include<conio.h>
#include<constrea.h>
#include<stdio.h>
#include<stdlib.h>

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
char c;
int p=20,i,k;        //starting pos

while(1){
if(kbhit()){
c=getch();

if(int(c)==27)
break;


if(int(c)==97)
//if(p>1835)       //limit left
p--;

if(int(c)==100)
//if(p<1882)       //limit right
p++;

clrscr();
cout<<"top";




gotoxy(20,30);
shipbody();

}
}
}

void main(){
shippos();
}