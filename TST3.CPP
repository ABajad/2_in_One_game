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
char c;
int p=1835,i,k;        //starting pos

while(1){
if(kbhit()){
c=getch();

if(int(c)==27)
break;


if(int(c)==97)
if(p>1835)       //limit left
p--;

if(int(c)==100)
if(p<1882)       //limit right
p++;

clrscr();
cout<<"top";
k=1;

for(i=0;i<p;i++){

if(k>0){     //ship position display
cout<<p;
k=0;
}

cout<<" ";    //position spaces
}

shipbody();

}
}
}

void main(){
shippos();
}