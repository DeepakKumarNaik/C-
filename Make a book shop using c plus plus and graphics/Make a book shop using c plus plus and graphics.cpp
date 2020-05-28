//Using Dev C++(GCC)
//Name : Deepak Kumar Naik

#include<iostream>
#include<conio.h>
#include<graphics.h>

using namespace std;
void clrscr(void){
system("cls"); }

class books{
	
	private:
	string *title,*author,*publisher;
		float *price;
		int *stock;
		char result[100],n;
		public:
			
			void search(int,string);
			void list(void);
			void display(int,string);
			string name(void){
				n=1;
				return "Deepak";
			}
			
			books(){
				title=new string[5];
				author=new string[5];
				publisher=new string[5];
				price=new float[5];
				stock=new int[5];
					
				title[0]="physics";
				title[1]="chemistry";
				title[2]="mathematics";
				title[3]="biology";
				title[4]="csc";
				
				author[0]="newton";
				author[1]="dalton";
				author[2]="gauss";
				author[3]="mendel";
				author[4]="babbage";
				
				publisher[0]="nature";
					publisher[1]="elements";
						publisher[2]="pi";
							publisher[3]="evolution";
								publisher[4]="programming";
								
				price[0]=2500;
					price[1]=2000;	
						price[2]=1500;	
							price[3]=1000;	
								price[4]=500;
								
stock[0]=1;	
stock[1]=2;	
stock[2]=3;	
stock[3]=4;	
stock[4]=5;													
			}
};


void books::search(int deepak,string name){
if(deepak==1){
	clrscr();
	cout<<"------------------------"<<endl;
	cout<<"| Welcome to book shop |"<<endl;
	cout<<"------------------------"<<endl<<endl<<endl;
}

int x;
cout<<"------------------------------"<<endl;
cout<<"|   Search book - press s    |"<<endl;
cout<<"| Display book list - press d|"<<endl;
cout<<"|       To exit - press e    |"<<endl;
cout<<"------------------------------"<<endl;

x=getche();
if(x==115){
clrscr();
string b_name;
int slno=5;
cout<<"***********************************"<<endl;
cout<<"          Enter Book Name          "<<endl;
cout<<"***********************************"<<endl;
getline(cin,b_name);
for(x=0;x<=4;x++){
	
	if(b_name==*(title+x))
{
slno=x; 	}
	
}
if(slno!=5){
	clrscr();
	cout<<"Your book is avilable"<<endl;
	cout<<"*********************"<<endl;
	cout<<"Book title : "<<*(title+slno)<<endl;
	cout<<"Book author : "<<*(author+slno)<<endl;
	cout<<"Publisher : "<<*(publisher+slno)<<endl;
	cout<<"Price : "<<*(price+slno)<<endl;
	cout<<"Stock : "<<*(stock+slno)<<endl<<endl<<endl;
	cout<<"*************************************"<<endl;
	cout<<"Request number of copy - press c"<<endl;
	cout<<"To exit - press any key"<<endl;
	cout<<"Go to home - press h"<<endl;
	
	x=getche();
	
	if(x==99){
		display(slno,name);
	}
	else if(x==104){
		search(1,name);
	}
	else{
		exit(0);
	}
	
	
}
	else{
		
		clrscr();
	
	cout<<"------------------------------"<<endl;
	cout<<"| Your Book is not avilable  |"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"|   To continue - press c    |"<<endl;
	cout<<"|   To exit - press any key  |"<<endl;
	cout<<"------------------------------"<<endl;
	
	x=getche();
	if(x==99){
		search(1,name);
		
	}
	else{
		
		exit(0);
	}	
		
	}
	
	
}	
else if(x==100){
		clrscr();
for(x=0;x<=4;x++){

	cout<<x+1<<". "<<endl;
	cout<<"Book Title : "<<*(title+x)<<endl;
	cout<<"Author : "<<*(author+x)<<endl;
	cout<<"Publisher : "<<*(publisher+x)<<endl;
	cout<<"Price : "<<*(price+x)<<endl;
	cout<<"Stock : "<<*(stock+x)<<endl;
	cout<<"------------------------------------------"<<endl<<endl;

	
}
search(0,name);	
}
else if(x=101){
	exit(0);
}
else{
	clrscr();
	cout<<"------------------------------"<<endl;
	cout<<"|You Entered Wrong Input     |"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"|   To continue - press c    |"<<endl;
	cout<<"|   To exit - press any key  |"<<endl;
	cout<<"------------------------------"<<endl;
	
	x=getche();
	if(x==99){
		search(1,name);
		
	}
	else{ exit(0);	}
	
}
		
}


void books::display(int slno,string name){
clrscr();
if(name=="Deepak"&&name.length()==6){

int x;
string book_name=*(title+slno);
cout<<"---------------------------------"<<endl;
cout<<"| Enter number of copy you want |"<<endl;
cout<<"|     Go to home - Enter 0      |"<<endl;
cout<<"---------------------------------"<<endl;

cin>>x;

if(x<=*(stock+slno)&&x!=0){
sprintf(result,"Book Receipt");
initwindow(600*n,400*n,result,0,0);
rectangle(10*n,30*n,580*n,370*n);
line(80*n,30*n,80*n,370*n);
line(280*n,30*n,280*n,370*n);
line(380*n,30*n,380*n,370*n);
line(480*n,30*n,480*n,370*n);

line(10*n,50*n,580*n,50*n);

setcolor(CYAN);

sprintf(result,"Book Receipt");
outtextxy(280*n,10*n,result);

strcpy(result,name.c_str());
outtextxy(10*n,375*n,result);


sprintf(result,"Sl No");
outtextxy(12*n,32*n,result);

sprintf(result,"Book Name");
outtextxy(85*n,32*n,result);

sprintf(result,"No of copy");
outtextxy(284*n,32*n,result);

sprintf(result,"Price/unit");
outtextxy(382*n,32*n,result);

sprintf(result,"Total Price");
outtextxy(482*n,32*n,result);

/////////////////
sprintf(result,"1");
outtextxy(12*n,55*n,result);


strcpy(result,book_name.c_str());
outtextxy(84*n,55*n,result);

sprintf(result,"%i",x);
outtextxy(284*n,55*n,result);

sprintf(result,"%f",*(price+slno));
outtextxy(384*n,55*n,result);

sprintf(result,"%f",*(price+slno)*x);
outtextxy(484*n,55*n,result);



getch();	
}
else if(x==0){
	search(1,name);
}
else if(x>*(stock+slno)){
	clrscr();
	cout<<"---------------------------------"<<endl;
	cout<<"|Your required copy not avilable|"<<endl;
	cout<<"*********************************"<<endl;
	cout<<*(stock+slno)<<" number of copy only avilable"<<endl<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"|      Press c to continue      |"<<endl;
	cout<<"|    Press any key to exit      |"<<endl;
	cout<<"|     Go to home - press h      |"<<endl;
	cout<<"---------------------------------"<<endl;
	
	x=getche();
	if(x==99){
		display(slno,name);
	}
	else if(x==104){
		search(1,name);
	}
	else{
		exit(0);
	}
}	
else{
	
	clrscr();
	cout<<"------------------------------"<<endl;
	cout<<"|You Entered Wrong Input     |"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"|   To continue - press c    |"<<endl;
	cout<<"|   To exit - press any key  |"<<endl;
	cout<<"------------------------------"<<endl;
	
	x=getche();
	if(x==99){
		display(slno,name);
		
	}
	else{
		
		exit(0);
	}	
	
}
}

else{
	
	exit(0);
}
	
}

int main(){

	books store;
	store.search(1,store.name());
	return 0;
}
