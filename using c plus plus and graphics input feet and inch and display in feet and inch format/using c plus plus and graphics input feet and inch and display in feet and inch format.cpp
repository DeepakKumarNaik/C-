//Using Dev C++(GCC)
//Name: Deepak Kumar Naik

#include<iostream>
#include<graphics.h>
using namespace std;
void clrscr(void){
	system("cls");
}
class Distance{
	
	private:
	int feet,inch,x;
	char result[100];
	
public:	
	
	Distance(){
		feet=0;
		inch=0;
	}
	
	Distance(int f,int i){
		
		feet=f;
		inch=i;
		
	}
	
	void add(Distance);
	void display(string);
	string name(void);
	
};

void Distance::add(Distance d){
	
feet=d.inch/12;
feet=feet+d.feet;
inch=d.inch%12;	
	
}
string Distance::name(){
	x=1;
	return "Deepak";
}

void Distance::display(string name){
clrscr();
	int len=name.length();
	char char_array[len+1];
	strcpy(char_array,name.c_str());
	if(len==6){
		
		sprintf(result,"Distance");	
		initwindow(400*x,200*x,result,0,0);
		rectangle(10*x,20*x,380*x,160*x);
		setcolor(GREEN);
		sprintf(result,"Distance");
		outtextxy(180*x,5*x,result);
		sprintf(result,"Design and developed by %s",char_array);
		outtextxy(10*x,170*x,result);
			setcolor(CYAN);
		sprintf(result,"Distance = %i.%i (%i feet and %i inch)",feet,inch,feet,inch);
		outtextxy(30*x,80*x,result);
	
		getch();
	}
	
	else{
		
		
		
		exit(0);
	}
	
}

int main(){

	int feet,inch;
	clrscr();
	cout<<"-------------------------"<<endl;
	cout<<"|       Enter feet :    |"<<endl;
	cout<<"-------------------------"<<endl;
	cin>>feet;
	cout<<"-------------------------"<<endl;
	cout<<"|       Enter inch :    |"<<endl;
	cout<<"-------------------------"<<endl;
	cin>>inch;
	Distance d1(feet,inch);
	Distance d2;
	d2.add(d1);
	
	d2.display(d2.name());
	
	return 0;
}
