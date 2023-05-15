#include<iostream>
using namespace std;
#include<conio.h>
#include<process.h>
#include<fstream>
class student
{
	public:
		int rno;
		char fname[1000],lname[1000],cource[2000],dob[1000],mo[1000],addr[1000],city[10000],email[3000];
        int sub1, sub2, sub3, sub4, sub5, sub6, total;
        float avg;
		public:
			void input_details()
			{
				cout<<"\n\n Enter Roll No ===>";
				cin>>rno;
				cout<<"\n";
				cout<<"\n\n Enter First Name ===>";
				cin>>fname;
				cout<<"\n";
				cout<<"\n\n Enter Last Name ===>";
				cin>>lname;
				cout<<"\n";
				cout<<"\n\n Enter Batch ===>";
				cin>>cource;
				cout<<"\n";
				cout<<"\n\n Enter Date Of Birth(DD/MM/YYYY) ===>";
				cin>>dob;
				cout<<"\n";
				cout<<"\n\n Enter Mobile No ===>";
				cin>>mo;
				cout<<"\n";
				cout<<"\n\n Enter Address ===>";
				cin>>addr;
				cout<<"\n";
				cout<<"\n\n Enter City ===>";
				cin>>city;
				cout<<"\n";
				cout<<"\n\n Enter Email ===>";
				cin>>email;
				cout<<"\n";
				cout<<"\n\nEnter the Mark of CS_112 out of 100 ==>";
				cin>>sub1;
				cout<<"\n";
				cout<<"\n\nEnter the Mark of ES_111 out of 100 ==>";
				cin>>sub2;
				cout<<"\n";
				cout<<"\n\nEnter the Mark of HM_102 out of 100==>";
				cin>>sub3;
				cout<<"\n";
				cout<<"\n\nEnter the Mark of MM_141 out of 100==>";
				cin>>sub4;
				cout<<"\n";
				cout<<"\n\nEnter the Mark of ICT out of 100 ==>";
				cin>>sub5;
				cout<<"\n";
				cout<<"\n\nEnter the Mark of Calculas out of 100 ==>";
				cin>>sub6;
				cout<<"\n";
				total=sub1+sub2+sub3+sub4+sub5+sub6;
				avg=total/6;

			}
			void output_details()
			{
				cout<<"\t Ghulam Ishaq Khan Institute of Engineering and Technology"<<endl;
				cout<<"\n_____________________________________________________________________________"<<endl;
				cout<<"\n Roll No       :---> "<<rno;
				cout<<"\n First Name    :---> "<<fname;
				cout<<"\t\t Last Name     :---> "<<lname;
				cout<<"\n cource        :---> "<<cource;
				cout<<"\t Date Of Birth :---> "<<dob;
				cout<<"\n Mobile No     :---> "<<mo;
				cout<<"\t\t Address       :---> "<<addr;
				cout<<"\n City          :---> "<<city;
				cout<<"\n Email         :---> "<<email;
			}
			void output_marksheet()
			{
				cout<<"\n_____________________________________________________________________________"<<endl;
				cout<<"Subject                               total marks              obtained marks"<<endl;
				cout<<"_____________________________________________________________________________"<<endl;
				cout<<"Marks of  CS-112                        100            	      "<<sub1<<endl;
				cout<<"Marks of  ES-111	                   	   100            	      "<<sub2<<endl;
				cout<<"Marks of  HM-102		                   100                    "<<sub3<<endl;
				cout<<"Marks of  MM-141			               100                    "<<sub4<<endl;
				cout<<"Marks of ICT 		    	 	       100                    "<<sub5<<endl;
				cout<<"Marks of  Calculas	 		           100                    "<<sub6<<endl;
				cout<<"Percentage 				               100                    "<<avg<<endl;
				cout<<"_____________________________________________________________________________"<<endl;
				cout<<"Total Marks				 600                          "<<total;
					if(avg>=90 && avg<=100)
				{
					cout<<"\n\n\t\t Your Grade is :----> A+";
					cout<<"\n";
				}
				else if(avg>=80 && avg<=90)
				{
					cout<<"\n\n\t\t Your Grade is :----> A";
					cout<<"\n";
				}
				else if(avg>=70 && avg<=80)
				{
					cout<<"\n\t\t Your Grade is :----> B+";

				}
				else if(avg>=60 && avg<=70){
				}
				else if(avg>=50 && avg<=60)
				{
					cout<<"\n\t\t Your Grad is :----> C";

				}
				else if(avg>=40 && avg<=50)
				{
					cout<<"\n\t\t Your Grad is :---->D";

				}
				else
				{
					cout<<"\n\t\t You Are Fail......";

				}

			}
};
class master : virtual public student
{
	public:
		void create()
		{
			cout<<"\n\n===========================> Insert Information <==========================\n\n";
			input_details();
		}
		void display()
		{
			cout<<"\n\n=========================> Summary Report <============================\n\n";
			output_details();
			cout<<"\n\n=========================> Student Marksheet Report <==========================\n\n";
			output_marksheet();
			cout<<"\n\n\t=========================> End Of Marksheet <==========================\n\n";
			cout<<"\n\n\t=========================> End of Report <=============================\n\n";

		}
		void update()
		{
			int choice;
			cout<<"\n\n\t=========================> Update Information <=========================\n\n";
			cout<<"\n\n\t ---------------> choose Details You Want to Perform <--------------\n\n";
			cout<<"\n\n Roll No ===>"<<rno<<"\n";
			cout<<"\n\n First Name ===>"<<fname<<"\n";
			cout<<"\n\n Last Name ====>"<<lname<<"\n";
			cout<<"\n\n Cource ===>"<<cource<<"\n";
			cout<<"\n\n Date Of Birth ===>"<<dob<<"\n";
			cout<<"\n\n Mobile No ===>"<<mo<<"\n";
			cout<<"\n\n Address ===>"<<addr<<"\n";
			cout<<"\n\n City ===>"<<city<<"\n";
			cout<<"\n\n Email ===>"<<email<<"\n";
			cout<<"\n\n CS-112 marks ===>"<<sub1<<"\n";
			cout<<"\n\n ES-11 Marks ===>"<<sub2<<"\n";
			cout<<"\n\n HM-102 Marks ===>"<<sub3<<"\n";
			cout<<"\n\n MM-141 Marks ===>"<<sub4<<"\n";
			cout<<"\n\n ICT Marks ===>"<<sub5<<"\n";
			cout<<"\n\n Calculas Marks ===>"<<sub4<<"\n";
			cout<<"\n\n Enter Your Choice ====>";
			cin>>choice;
			switch(choice)
			{
				case 1:
					cout<<"\n\n Enter Roll No :--->";
					cin>>rno;
					cout<<"\n";
					break;
				case 2:
					cout<<"\n\n Enter First Name :--->";
					cin>>fname;
					cout<<"\n";
					break;
				case 3:
					cout<<"\n\n Enter Last Name :--->";
					cin>>lname;
					cout<<"\n";
					break;
				case 4:
					cout<<"\n\n Enter Cource :--->";
					cin>>cource;
					cout<<"\n";
					break;
				case 5:
					cout<<"\n\n Enter Date Of Birth :--->";
					cin>>dob;
					cout<<"\n";
					break;
				case 6:
					cout<<"\n\n Enter Mobile No :--->";
					cin>>mo;
					cout<<"\n";
					break;
				case 7:
					cout<<"\n\n Enter Address :--->";
					cin>>addr;
					cout<<"\n";
					break;
				case 8:
					cout<<"\n\n Enter city :--->";
					cin>>city;
					cout<<"\n";
					break;
				case 9:
					cout<<"\n\n Enter Email :--->";
					cin>>email;
					break;
				case 10:
					cout<<"\n\n Enter Marks Of CS-112 :--->";
					cin>>sub1;
					break;
				case 11:
					cout<<"\n\n Enter Marks of ES-111 :--->";
					cin>>sub2;
					cout<<"\n";
					break;
				case 12:
					cout<<"\n\n Enter Marks of HM-102 :--->";
					cin>>sub3;
					cout<<"\n";
					break;
				case 13:
					cout<<"\n\n Enter Marks of MM-141 :--->";
					cin>>sub4;
					cout<<"\n";
					break;
				case 14:
					cout<<"\n\n Enter Marks of ICT :--->";
					cin>>sub4;
					cout<<"\n";
					break;
				case 15:
					cout<<"\n\n Enter Marks of Calculas :--->";
					cin>>sub4;
					cout<<"\n";
					break;
				default:
					cout<<"\n\n=======> Invalid Choice <=========\n ******** Try again ********\n\n";
					break;
			}
		}
};
int main()
{
	int num_obj,reg_num,choice=0;
	master ms[100];
	while(1)
	{
		cout<<"\n\t==============> Developed By : Sardar Saifullah Saleem<=================\n";
		cout<<"\n\n\t ********** Choose Operation You Want To Perform **********\n\n";
		cout<<"\n\n\t\t 1--> Create Record";
		cout<<"\n\n\t\t 2--> Display Record";
		cout<<"\n\n\t\t 3--> Update Record";
		cout<<"\n\n\t\t 4--> Exit Program";
		cout<<"\n\n Enter your choice====>";
		
		int ch;
		
		cin>>ch;
		switch(ch)
		{
			case 1:
			    cout<<"enter the number of entries you want to enter"<<endl;
				cin>>num_obj;
				for(int i=1; i<=num_obj; i++){
				ms[i].create();
				}
				break;
			case 2:
			cout<<"enter the reg number of the student whose record you want"<<endl;
			cin>>reg_num;
			choice=0;
			for(int i=1; i<=100; i++){
				
				if(reg_num==ms[i].rno){
					ms[i].display();
				
				choice=1; 
				}
			
			}
			if(choice==0){
				cout<<"record not found"<<endl;
			}
			break;
			case 3:
			cout<<"enter the reg number of the student whose record you want to update"<<endl;
			cin>>reg_num;
			choice=0;
			for(int i=0; i<100; i++){
				if(reg_num==ms[i+1].rno){
				ms[i+1].update();
				choice=1;
				}
			}
			if(choice==0){
				cout<<"record not found"<<endl;
			}
				break;
			case 4:
			cout<<"you have succesfully exited the programme";
				goto out;
			default:
				cout<<"\n\n\t========> Invalid choice <========";
				break;
		}
	}
	out:
getch();
}

