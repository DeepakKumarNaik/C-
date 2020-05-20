//Using Dev C++(GCC)
//Name : Deepak Kumar Naik

#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
void clrscr(void){
	system("cls");
}
class tollbooth{
private:
unsigned int car;
float x;
double amount;
char result[100];

public:
	tollbooth(){
	car=0;
	amount=0;
	}
void payingcar(int,string);
void nopaycar(int,string);
void display(string);
void data(string);
string deepak(void){
	x=1;
	return "Deepak";
}
	};
	void tollbooth::data(string name){
			clrscr();

	cout<<"--------------------------------------------------"<<endl;
	cout<<"|            Welcome to toll booth system        |"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"|       Hello, Your car has been recorded !      |"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"|        To pay 50 cent for your car press y     |"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	
	int d;
	d=getche();
	if(d==121){
	payingcar(0,name);	
	}
	else{
		nopaycar(0,name);
	}
keep:
	clrscr();

cout<<"----------------------------------------------------"<<endl;
cout<<"|    To continue and keep record cars press x      |"<<endl;
cout<<"|    To count and know paying car numbers press p  |"<<endl;
cout<<"| To count and know non-paying car numbers press n |"<<endl;	
cout<<"|          Press ESC key to view complete data     |"<<endl;	
cout<<"----------------------------------------------------"<<endl;
d=getche();
if(d==120){
 data(deepak());
}

else if(d==112){
payingcar(1,name);
}
else if(d==110){
nopaycar(1,name);	
}
else if(d==27){
	display(name);
}
	else{
		clrscr();
cout<<"-----------------------------------------------"<<endl;
cout<<"|     You Entered wrong input ! Try again     |"<<endl;	
cout<<"|Press c to continue or press any key to exit |"<<endl;		
cout<<"-----------------------------------------------"<<endl;
d=getche();
if(d==99){
goto keep;	
}
else{
	exit(0);
}

	} 
	
	
	}
void tollbooth::payingcar(int x,string name){

if(x==1){
	clrscr();
	int a,c,d;
	a=amount;
	c=a/50;
	cout<<"---------------------------------"<<endl;
	cout<<"| No of paying cars are "<<c<<" |"<<endl;
	cout<<"---------------------------------"<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<"|    To continue and keep record cars press x      |"<<endl;	
cout<<"|          Press ESC key to view complete data     |"<<endl;	
cout<<"|              To exit press any key               |"<<endl;	
cout<<"----------------------------------------------------"<<endl;
d=getche();
if(d==120){
data(deepak());	
}
else if(d==27){
	display(name);
}
else{
	exit(0);
}
	}
	else if(x==0){
		car=car+1;
		amount=amount+50;
	}
}
	

void tollbooth::nopaycar( int x,string name){
	if(x==1){
		clrscr();
			int c,i,a=0,d;
	for(i=1;i<=car;i++){
	a=a+50;	
	}
	c=amount;
	if(a>c){
		
	a=a-c;
	a=a/50;
	c=a;	
	}
	else if(a<c){ //hope that this condition never come
	a=c-a;
	a=a/50;
	c=a;	
	}
	else{
	c=0;	
	}
    cout<<"-------------------------------------"<<endl;
	cout<<"|No of non-paying cars are "<<c<<"  |"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"----------------------------------------------------"<<endl;
cout<<"|    To continue and keep record cars press x      |"<<endl;	
cout<<"|          Press ESC key to view complete data     |"<<endl;	
cout<<"|              To exit press any key               |"<<endl;	
cout<<"----------------------------------------------------"<<endl;
d=getche();
if(d==120){
data(deepak());	
}
else if(d==27){
	display(name);
}
else{
	exit(0);
}		
	}
	else if(x==0){
	car=car+1;	
	}

}
void tollbooth::display(string name){
clrscr();
int length=name.length();
char char_array[length+1];
strcpy(char_array,name.c_str());
if(length<(name.length()+1)&&length==6){

int a,r,i,tp,tnp;
a=amount;
tp=a/50;
a=0;
r=amount;
for(i=1;i<=car;i++){
	a=a+50;	
	}
	if(a>r){
		
	a=a-r;
	a=a/50;
	tnp=a;	
	}
	else if(a<r){ //hope that this condition never come
	a=r-a;
	a=a/50;
	tnp=a;	
	}
	else{
	tnp=0;	
	}
sprintf(result,"Toll Booth Statistic");
initwindow(1200*x,500*x,result,0,0);
rectangle(50*x,50*x,1150*x,450*x);
line(50*x,100*x,1150*x,100*x);
line(50*x,150*x,1150*x,150*x);
line(200*x,100*x,200*x,450*x);
line(400*x,100*x,400*x,450*x);
line(600*x,100*x,600*x,450*x);
line(900*x,100*x,900*x,450*x);

sprintf(result,"Toll Booth Statistic");
outtextxy(500*x,10*x,result);

sprintf(result,"Total Car");
outtextxy(52*x,125*x,result);
sprintf(result,"Total Amount(in cent)");
outtextxy(202*x,125*x,result);
sprintf(result,"Total Paying Car");
outtextxy(402*x,125*x,result);
sprintf(result,"Total Amount of Paying Car");
outtextxy(602*x,125*x,result);
sprintf(result,"Total Non Paying Car");
outtextxy(902*x,125*x,result);

sprintf(result,"%i",car);
outtextxy(55*x,200*x,result);
sprintf(result,"%i cent",r);
outtextxy(205*x,200*x,result);
sprintf(result,"%i",tp);
outtextxy(405*x,200*x,result);
sprintf(result,"%i cent",r);
outtextxy(605*x,200*x,result);
sprintf(result,"%i",tnp);
outtextxy(905*x,200*x,result);

sprintf(result,"Design and developed by %s",char_array);
outtextxy(10*x,460*x,result);

getch();

}
else
{
	
exit(0);
}
}

int main(){
tollbooth toll;	
toll.data(toll.deepak());

	
	return 0;
}
