#include<iostream.h>
#include<conio.h>
void main(){
char k;
int i=1;
while(i){
k=0;
if(kbhit()){
k=getch();
}
if(k=='a'){
for(int j =0;j<10;j++){
cout<<j;
}
}
else if(k=='b'){
for(int l=0;l<4;l++) {
cout<<l;
}
}
else {
break;
}
}
getch();
}