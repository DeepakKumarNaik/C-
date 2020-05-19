//Using Dev C++(GCC)
//Name : Deepak Kumar Naik

#include<iostream>
#include<graphics.h>
using namespace std;
void clrscr(void){
	system("cls");
}

class Distance{
	
private:
int feet,inch;
float x;
char result[100];

public:
void get_data(int a,int b);
string display(string);
void disp_feet(void){
	clrscr();
cout<<"---------------"<<endl;
cout<<"| Enter feet: |"<<endl;
cout<<"---------------"<<endl;
}
void disp_inch(void){
	clrscr();
cout<<"---------------"<<endl;
cout<<"| Enter inch: |"<<endl;
cout<<"---------------"<<endl;
}	
string deepak(void){
	x=1;
	return "Deepak";
}
};
void Distance::get_data(int a,int b){
feet=a;	
inch=b;
	}
string Distance::display(string name){
clrscr();
int length=name.length();
	if(length%6==0){
		length=7;
	}
	else{
		length=0;
	}
	char char_array[length];
	strcpy(char_array,name.c_str());
if((name.length()-1)==5){
	
	sprintf(result,"Distance");
	initwindow(600*x,300*x,result,0,0);
	rectangle(10*x,50*x,580*x,150*x);
	sprintf(result,"Distance = %i.%i (%i feet %i inch)",feet,inch,feet,inch);
	outtextxy(15*x,100*x,result);
	sprintf(result,"Design and developed by %s",char_array);
	outtextxy(10*x,260*x,result);
	getch();
}
else{
	return "Error !";
}
	}
int main(){
int feet,inch;
string name;	
Distance data;
data.disp_feet();
cin>>feet;
data.disp_inch();
cin>>inch;
data.get_data(feet,inch);
name=data.display(data.deepak());
cout<<name;
return 0;
}
