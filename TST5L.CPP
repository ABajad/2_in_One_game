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



int v,h;

char ln;
ln=219;

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
if(p<56)                //limit right
p++;
clrscr();
ln=219;
cout<<setclr(10);
for(v=2;v<25;v++){
gotoxy(2,v);
cout<<ln;
gotoxy(59,v);
cout<<ln;
}

ln=220;
for(h=2;h<60;h++){
gotoxy(h,2);
cout<<ln;
if(h<58){
gotoxy(h+1,24);
cout<<ln;
}
}
ln=219;
for(v=3;v<25;v++){
gotoxy(61,v);
cout<<ln;
gotoxy(79,v);
cout<<ln;
}
ln=220;
for(h=61;h<80;h++){
gotoxy(h,2);
cout<<ln;
if(h<78){
gotoxy(h+1,24);
cout<<ln;
}
}

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