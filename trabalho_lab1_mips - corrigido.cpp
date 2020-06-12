#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
main (){
	float instrucao1, instrucao2, tempexec1, tempexec2, mips1, mips2, tx1, tx2, cpi1, cpi2;
	int op1;
	do { 
		do {
			cout<<"\n\n\n Choose the options below: \n";
			cout<<"1 - Computer performance measurement.\n";
			cout<<"2 - Computer performance comparrison.\n";
			cout<<"3 - Exit.\n";
			cout<<"Choose your option: ";
			cin>>op1;
			if (op1<1 || op1>3){
				cout<<"invalid option! choose between 1 to 3!\n";
				getch();
			}
			system("cls");
		}
		while (op1<1 || op1>3);
		switch (op1){
			case 1:
				cout<<"Computer performance measurement.\n"; 
				cout<<"\n\n\n Enter instruction value 1: ";
				cin>>instrucao1;
				cout<<"Enter runtime value 1: ";
				cin>>tempexec1;
				cout<<"Enter the clock rate value 1: ";
				cin>>tx1;
				mips1=(instrucao1/tempexec1);
				cpi1=tx1/mips1;
				cout<<"PERFORMANCE MEASUREMENT\n";
				cout<<"++++++++++++++++++++++\n";
				cout<<"MIPS: "<<mips1<<"*10^6\n";
				cout<<"Instruction per Clock: "<<cpi1<<"\n\n\n";
			break;
			case 2: 
				cout<<"Computer performance comparrison.\n";
				cout<<"\n\n\nEnter instruction value 1: ";
				cin>>instrucao1;
				cout<<"Enter runtime value 1: ";
				cin>>tempexec1;
				cout<<"Enter the clock rate value 1: ";
				cin>>tx1;
				cout<<"\n\nEnter instruction value 2: ";
				cin>>instrucao2;
				cout<<"Enter runtime value 2: ";
				cin>>tempexec2;
				cout<<"Enter the clock rate value 2: ";
				cin>>tx2;
				mips1=(instrucao1/tempexec1);
				cpi1=tx1/mips1;
				mips2=(instrucao2/tempexec2);
				cpi2=tx2/mips2;
				if (mips1>mips2){
					if (cpi1<cpi2){
						cout<<"\n\n\n+++++++++++++++++++++++++++++++++++\n";
						cout<<"Computer 1 +++++++++++ Computer 2\n";
						cout<<"MIPS: "<<mips1<<"*10^6 ++++++++ MIPS: "<<mips2<<"*10^6\n";
						cout<<"CPI: "<<cpi1<<" ++++++++ CPI: "<<cpi2<<"\n";
						cout<<"The Computer 1 has the best performance\n\n\n";
					}
					else if (cpi1==cpi2){
						if (tx1>tx2){
							cout<<"\n\n\n+++++++++++++++++++++++++++++++++++\n";
							cout<<"Computer 1 +++++++++++ Computer 2\n";
							cout<<"MIPS: "<<mips1<<"*10^6 ++++++++ MIPS: "<<mips2<<"*10^6\n";
							cout<<"CPI: "<<cpi1<<" ++++++++ CPI: "<<cpi2<<"\n";
							cout<<"The Computer 1 has the best performance\n\n\n";
						}
						else if (tx1==tx2){
							cout<<"\n\n\n+++++++++++++++++++++++++++++++++++\n";
							cout<<"Computer 1 +++++++++++ Computer 2\n";
							cout<<"MIPS: "<<mips1<<"*10^6 ++++++++ MIPS: "<<mips2<<"*10^6\n";
							cout<<"CPI: "<<cpi1<<" ++++++++ CPI: "<<cpi2<<"\n";
							cout<<"The Computer 1 has the best performance\n\n\n";
						}
					}
				}
				else if (mips2>mips1){
					if (cpi2<cpi1){
						cout<<"\n\n\n+++++++++++++++++++++++++++++++++++\n";
						cout<<"Computer 1 +++++++++++ Computer 2\n";
						cout<<"MIPS: "<<mips1<<"*10^6 ++++++++ MIPS: "<<mips2<<"*10^6\n";
						cout<<"CPI: "<<cpi1<<" ++++++++ CPI: "<<cpi2<<"\n";
						cout<<"The Computer 2 has the best performance\n\n\n";
					}
					else if (cpi2==cpi1){
						if (tx2>tx1){
							cout<<"\n\n\n+++++++++++++++++++++++++++++++++++\n";
							cout<<"Computer 1 +++++++++++ Computer 2\n";
							cout<<"MIPS: "<<mips1<<"*10^6 ++++++++ MIPS: "<<mips2<<"*10^6\n";
							cout<<"CPI: "<<cpi1<<" ++++++++ CPI: "<<cpi2<<"\n";
							cout<<"The Computer 2 has the best performance\n\n\n";
						}
						else if (tx2==tx1){
							cout<<"\n\n\n+++++++++++++++++++++++++++++++++++\n";
							cout<<"Computer 1 +++++++++++ Computer 2\n";
							cout<<"MIPS: "<<mips1<<"*10^6 ++++++++ MIPS: "<<mips2<<"*10^6\n";
							cout<<"CPI: "<<cpi1<<" ++++++++ CPI: "<<cpi2<<"\n";
							cout<<"The Computer 2 has the best performance\n\n\n";
						}
					}
				}
				else{
					if (cpi1<cpi2){
						cout<<"\n\n\n+++++++++++++++++++++++++++++++++++\n";
						cout<<"Computer 1 +++++++++++ Computer 2\n";
						cout<<"MIPS: "<<mips1<<"*10^6 ++++++++ MIPS: "<<mips2<<"*10^6\n";
						cout<<"CPI: "<<cpi1<<" ++++++++ CPI: "<<cpi2<<"\n";
						cout<<"The Computer 1 has the best performance\n\n\n";
					}
					else if (cpi2<cpi1){
						cout<<"\n\n\n+++++++++++++++++++++++++++++++++++\n";
						cout<<"Computer 1 +++++++++++ Computer 2\n";
						cout<<"MIPS: "<<mips1<<"*10^6 ++++++++ MIPS: "<<mips2<<"*10^6\n";
						cout<<"CPI: "<<cpi1<<" ++++++++ CPI: "<<cpi2<<"\n";
						cout<<"The Computer 2 has the best performance\n\n\n";
					}
					else{
						if (tx1>tx2){
							cout<<"\n\n\n+++++++++++++++++++++++++++++++++++\n";
							cout<<"Computer 1 +++++++++++ Computer 2\n";
							cout<<"MIPS: "<<mips1<<"*10^6 ++++++++ MIPS: "<<mips2<<"*10^6\n";
							cout<<"CPI: "<<cpi1<<" ++++++++ CPI: "<<cpi2<<"\n";
							cout<<"The Computer 1 has the best performance\n\n\n";
						}
						else if (tx2>tx1){
							cout<<"\n\n\n+++++++++++++++++++++++++++++++++++\n";
							cout<<"Computer 1 +++++++++++ Computer 2\n";
							cout<<"MIPS: "<<mips1<<"*10^6 ++++++++ MIPS: "<<mips2<<"*10^6\n";
							cout<<"CPI: "<<cpi1<<" ++++++++ CPI: "<<cpi2<<"\n";
							cout<<"The Computer 2 has the best performance\n\n\n";
						}
						else{
							cout<<"\n\n\n+++++++++++++++++++++++++++++++++++\n";
							cout<<"Computer 1 +++++++++++ Computer 2\n";
							cout<<"MIPS: "<<mips1<<"*10^6 ++++++++ MIPS: "<<mips2<<"*10^6\n";
							cout<<"CPI: "<<cpi1<<" ++++++++ CPI: "<<cpi2<<"\n";
							cout<<"Both computers have equal performance.\n\n\n";
						}
					}
				}
			break;
		}
		getch();
		system("cls");
	}
	while (op1 != 3);
	cout<<"\n\n\nEnd\n";
}
