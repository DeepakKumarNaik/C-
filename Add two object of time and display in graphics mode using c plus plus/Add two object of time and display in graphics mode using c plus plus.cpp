//Using Dev C++(GCC)
//Name : Deepak Kumar Naik

#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
void clrscr(void){
	system("cls");
}
class time{
public:
int hour,minute,second;
float x;
char result[100];

time(){
	hour=0;
	minute=0;
	second=0;
}

time(int h,int m,int s){
	hour=h;
	minute=m;
	second=s;
}	
	
void display(string,int,int,int,int,int,int);
void sum(time,time);
string deepak(void){
	x=1;
	return "Deepak";
}
};

void time::sum(time t1,time t2){
	second=t1.second+t2.second;
	minute=second/60;
	second=second%60;
	minute=minute+t1.minute+t2.minute;
	hour=minute/60;
	minute=minute%60;
	hour=hour+t1.hour+t2.hour;

	
}

void time::display(string name,int h1,int m1,int s1,int h2,int m2,int s2){
	clrscr();
	int length;
	length=name.length();
	char char_array[length+1];
	strcpy(char_array,name.c_str());
	if(name.length()==(12/2)){
	sprintf(result,"Time");
	initwindow(600*x,300*x,result,0,0);
	rectangle(10*x,20*x,580*x,250*x);
	setcolor(YELLOW);
	sprintf(result,"Time is in the format (hh:mm:ss)");
	outtextxy(20*x,50*x,result);
	setcolor(LIGHTBLUE);
	sprintf(result,"Time");
	outtextxy(300*x,5*x,result);
	setcolor(CYAN);
	settextstyle(0,0,2*x);
	sprintf(result,"%i : %i : %i",h1,m1,s1);
	outtextxy(250*x,100*x,result);
	sprintf(result,"%i : %i : %i",h2,m2,s2);
	outtextxy(250*x,120*x,result);
	sprintf(result,"+");
	outtextxy(230*x,110*x,result);
	line(240*x,160*x,450*x,160*x);
	sprintf(result,"%i : %i : %i",hour,minute,second);
	outtextxy(250*x,180*x,result);
	setcolor(BLUE);
	settextstyle(0,0,1*x);
	sprintf(result,"Design and developed by %s",char_array);
	outtextxy(10*x,270*x,result);
	getch();
}
else{
	exit(0);
}
	
}

int main(){	
	clrscr();
	int h,m,s;
	cout<<"------------------"<<endl;
	cout<<"| For 1st Object |"<<endl;
	cout<<"|   Enter hour   |"<<endl;
	cout<<"|     Like 04    |"<<endl;
	cout<<"------------------"<<endl;
	cin>>h;
	clrscr();
	cout<<"--------------------"<<endl;
	cout<<"|   For 1st Object |"<<endl;
	cout<<"|   Enter minute   |"<<endl;
	cout<<"|       Like 15    |"<<endl;
	cout<<"--------------------"<<endl;
	cin>>m;
	clrscr();
	cout<<"--------------------"<<endl;
	cout<<"|   For 1st Object |"<<endl;
	cout<<"|   Enter second   |"<<endl;
	cout<<"|       Like 20    |"<<endl;
	cout<<"--------------------"<<endl;
	cin>>s;
	time t1(h,m,s);
	clrscr();
	cout<<"------------------"<<endl;
	cout<<"| For 2nd Object |"<<endl;
	cout<<"|   Enter hour   |"<<endl;
	cout<<"|     Like 04    |"<<endl;
	cout<<"------------------"<<endl;
	cin>>h;
	clrscr();
	cout<<"--------------------"<<endl;
	cout<<"|   For 2nd Object |"<<endl;
	cout<<"|   Enter minute   |"<<endl;
	cout<<"|       Like 15    |"<<endl;
	cout<<"--------------------"<<endl;
	cin>>m;
	clrscr();
	cout<<"--------------------"<<endl;
	cout<<"|   For 2nd Object |"<<endl;
	cout<<"|   Enter second   |"<<endl;
	cout<<"|       Like 20    |"<<endl;
	cout<<"--------------------"<<endl;
    cin>>s;
    time t2(h,m,s);
    
    time t3;
    t3.sum(t1,t2);

t3.display(t3.deepak(),t1.hour,t1.minute,t1.second,t2.hour,t2.minute,t2.second);
	return 0;
}
