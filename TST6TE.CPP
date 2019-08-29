#include<iostream.h>
#include<conio.h>
#include<constrea.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>


void shippos(){

int ptc=0,enpassed=0,gover=0;;

int c1=4,c2=15;		//COLORS OF SHIP
char sm,ss;	        //SHIP PIECES
sm=219;         	//SHIP PIECES           //SHIP MIDDLE
ss=220;                                         //SHIP SIDE (L,R)

			//SHIP BODY START
constream cout;
randomize();

int enp=0,enc=0;
int enst[50],enr,enmove[50];

int bll[50],bln,blh[50],blv[50],fire;
char bulletc;
bulletc=30;

for(bln=0;bln<50;bln++){
bll[bln]=0;
blh[bln]=0;
blv[bln]=21;
}


for(int kl=0;kl<50;kl++){
enst[kl]=0;
enmove[kl]=3;
}


int v,h;

char ln;
ln=219;

int p=3,i,k;            //starting pos
char c;



while(1){
textbackground(15);


if(gover==1){
gotoxy(25,13);
cout<<"Exit    - Esc";
gotoxy(25,14);
cout<<"Resume  - Space bar";
gotoxy(25,15);
cout<<"Restart - R";

if(kbhit())
{
c=getch();
if(c==32){
gover=0;
}
if(c==114){
for(bln=0;bln<50;bln++){
bll[bln]=0;
blh[bln]=0;
blv[bln]=21;
}


for(int kl=0;kl<50;kl++){
enst[kl]=0;
enmove[kl]=3;
}
p=3;
ptc=0;
enpassed=0;
gover=0;
}


if(c==27){
break;
}

}

}




if(gover==0){
		if(kbhit()){
		c=getch();

if(int(c)==27)
gover=1;


if(int(c)==97)
if(p>3)   		//limit left
p--;

if(int(c)==100)
if(p<56)                //limit right
p++;

if(int(c)==32)
fire=1;

if(fire==1){
for(bln=0;bln<50;bln++){
if(bll[bln]==0){
bll[bln]=1;
blh[bln]=p;
fire=0;
break;
}
}
}

clrscr();

ln=219;                 //lines game area
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
for(v=3;v<25;v++){         //lines score
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


gotoxy(p,23);


cout<<setclr(c1);
cout<<ss;
cout<<setclr(c2);
cout<<sm;
cout<<setclr(c1);
cout<<ss;

for(int enpp=0;enpp<50;enpp++){
if(enst[enpp]!=0){
gotoxy(enst[enpp],enmove[enpp]);
cout<<"H";
}
}

}



						    //outside if(kmbhit)
ln=219;                 //lines game area
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
for(v=3;v<25;v++){         //lines score
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

gotoxy(68,4);
cout<<"SPACE";
gotoxy(67,5);
cout<<"SHOOTER";
gotoxy(62,7);
cout<<"-----------------";
gotoxy(66,9);
cout<<"Score: "<<ptc;
gotoxy(66,10);
for(int cou1=0;cou1<enpassed;cou1++)
cout<<"H ";
gotoxy(62,11);
cout<<"-----------------";
gotoxy(66,13);
cout<<"Controls";
gotoxy(66,14);
cout<<"~~~~~~~~";
gotoxy(63,15);
cout<<"Left  - A";
gotoxy(63,16);
cout<<"Right - D";
gotoxy(63,17);
cout<<"Fire - Space bar";
gotoxy(63,18);
cout<<"Pause - Esc";


gotoxy(p,23);

cout<<setclr(c1);
cout<<ss;
cout<<setclr(c2);
cout<<sm;
cout<<setclr(c1);
cout<<ss;



delay(20);
enp+=20;

if(enp%100==0){
clrscr();
}


if(enp%200==0){
for(bln=0;bln<50;bln++){
if(bll[bln]>0){
blv[bln]--;
}
}
}

for(bln=0;bln<50;bln++){
if(bll[bln]>0){
gotoxy(blh[bln],blv[bln]);
cout<<bulletc;
}
if(blv[bln]<4){
bll[bln]=0;
blv[bln]=21;
}
}


if(enp%1000==0){
for(int cou1=0;cou1<50;cou1++){       //move enemy downward
if(enst[cou1]>0){
enmove[cou1]++;
}
}
}

if(enp%1000==0){
for(int nenm=0;nenm<50;nenm++){
if(enst[nenm]==0){                             //makes an enemy 0 -> 1
enst[nenm]=1;
break;
}}
enp=0;
}





for(int km=0;km<50;km++){                  //gives hori position to enemy
if(enst[km]==1){
enr=random(53)+3;
enst[km]=enr;                             //0 -> hori position of enemy
}
}


for(int enpp=0;enpp<50;enpp++){
if(enst[enpp]!=0){
gotoxy(enst[enpp],enmove[enpp]);
cout<<"H";
}
if(enmove[enpp]>20){
enst[enpp]=0;
enmove[enpp]=3;
enpassed++;
}
}
if(enpassed>5){
gover=1;
}
for(int ke=0;ke<50;ke++){
for(int kb=0;kb<50;kb++){
if(enst[ke]==blh[kb]&&enmove[ke]==blv[kb]&&blv[kb]>4){
enst[ke]=0;
enmove[ke]=3;
bll[kb]=0;
blv[kb]=21;
ptc++;
}}}

}

}
}

void main(){
shippos();
}