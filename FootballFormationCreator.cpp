#include <iostream>
using namespace std;

void defence(string team[],int num,int num1){
	if((num1-num+1)==4){
		for(int i=num;i<=num1;i++){
			
		cout << team[i] << "\t";
	}
	}else if((num1-num+1)==5){
		for(int i=num;i<=num1;i++){
		cout << team[i] << "\t";
	}
	}else if((num1-num+1)==3){
		for(int i=num;i<=num1;i++){
			if(i==num){
				cout << "\t";
				cout << team[i] << "\t";
			}else{
		cout << team[i] << "\t";
		}
	}
	}else if((num1-num+1)==2){
		cout << "\t";
		for(int i=num;i<=num1;i++){
		cout << team[i] << "\t";
	}
	}else if((num1-num+1)==1){
		cout << "\t\t" << team[num] << "\t\t";
	}else{
		cout << "Invalid Process!" << endl;
	}
	cout << endl << endl << endl;
}

int main(){
	string team[11];
	int ch;
	string frm[] = {"4-4-2","3-1-4-2","3-4-2-1","3-4-1-2","3-4-3","3-5-1-1","3-5-2","4-1-4-1","4-1-2-1-2","4-1-3-2","4-2-1-3","4-2-3-1","4-3-1-2","4-3-2-1","4-3-3","4-4-1-1","4-5-1","5-4-1","5-3-2"};
	cout << "Formations" << endl << endl;
	for(int i=0;i<19;i++){
		cout << i+1 << " - "<< frm[i] << endl;
	}
	cout << "Choose your formation : ";
	cin >> ch;

	for(int i=0;i<11;i++){
		cout << i+1 << ".Player : ";
		cin >> team[i];
	}
	if(ch==1){
		defence(team,0,0);
		defence(team,1,4);
		defence(team,5,8);
		defence(team,9,10);
	}else if(ch==2){
		defence(team,0,0);
		defence(team,1,3);
		defence(team,4,4);
		defence(team,5,8);
		defence(team,9,10);
	}else if(ch==3){
		defence(team,0,0);
		defence(team,1,3);
		defence(team,4,7);
		defence(team,8,9);
		defence(team,10,10);
	}else if(ch==4){
		defence(team,0,0);
		defence(team,1,3);
		defence(team,4,7);
		defence(team,9,9);
		defence(team,10,11);
	}else if(ch==5){
		defence(team,0,0);
		defence(team,1,3);
		defence(team,4,7);
		defence(team,8,10);
	}else if(ch==6){
		defence(team,0,0);
		defence(team,1,3);
		defence(team,4,8);
		defence(team,9,9);
		defence(team,10,10);
	}else if(ch==6){
		defence(team,0,0);
		defence(team,1,3);
		defence(team,4,8);
		defence(team,9,10);
	}else if(ch==7){
		defence(team,0,0);
		defence(team,1,3);
		defence(team,4,8);
		defence(team,9,10);
	}else if(ch==8){
		defence(team,0,0);
		defence(team,1,4);
		defence(team,5,5);
		defence(team,6,9);
		defence(team,10,10);
	}else if(ch==9){
		defence(team,0,0);
		defence(team,1,4);
		defence(team,5,5);
		defence(team,6,7);
		defence(team,8,8);
		defence(team,9,10);
	}else if(ch==10){
		defence(team,0,0);
		defence(team,1,4);
		defence(team,5,5);
		defence(team,6,8);
		defence(team,9,10);
	}else if(ch==10){
		defence(team,0,0);
		defence(team,1,4);
		defence(team,5,5);
		defence(team,6,8);
		defence(team,9,10);
	}else if(ch==11){
		defence(team,0,0);
		defence(team,1,4);
		defence(team,5,6);
		defence(team,7,7);
		defence(team,8,10);
	}else if(ch==12){
		defence(team,0,0);
		defence(team,1,4);
		defence(team,5,6);
		defence(team,7,9);
		defence(team,10,10);
	}else if(ch==13){
		defence(team,0,0);
		defence(team,1,4);
		defence(team,5,7);
		defence(team,8,8);
		defence(team,9,10);
	}else if(ch==14){
		defence(team,0,0);
		defence(team,1,4);
		defence(team,5,7);
		defence(team,8,9);
		defence(team,10,10);
	}else if(ch==15){
		defence(team,0,0);
		defence(team,1,4);
		defence(team,5,7);
		defence(team,8,10);
	}else if(ch==16){
		defence(team,0,0);
		defence(team,1,4);
		defence(team,5,8);
		defence(team,8,9);
		defence(team,9,10);
	}else if(ch==17){
		defence(team,0,0);
		defence(team,1,4);
		defence(team,5,9);
		defence(team,10,10);
	}else if(ch==18){
		defence(team,0,0);
		defence(team,1,5);
		defence(team,6,9);
		defence(team,10,10);
	}else if(ch==19){
		defence(team,0,0);
		defence(team,1,5);
		defence(team,6,8);
		defence(team,9,10);
	}else{
		cout << "Invalid Process!" << endl;
	}
	return 0;
}