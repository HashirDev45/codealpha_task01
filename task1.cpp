#include<iostream>
using namespace std;
int main()
{
	int courses;
	float gradepoint=0;
	float credithours=0;
	float totalgradepoints=0;
	float totalcredits=0;

	cout<<"enter the number of courses"<<endl;
	cin>>courses;
	for(int i=1;i<=courses;i++)
	{
		cout<<"courses "<<i<<endl;
		cout<<"enter grade points"<<endl;
		cin>>gradepoint;
		cout<<"enter the credit hours"<<endl;
		cin>>credithours;
		float Gradepoints = gradepoint*credithours;
		totalcredits = totalcredits+credithours;
		totalgradepoints = totalgradepoints+Gradepoints;
		
		cout<<"grade point"<<gradepoint<<endl;
		cout<<"credits hours"<<credithours<<endl;
		cout<<"Grade points"<<Gradepoints<<endl;
	}
	float CGPA =totalgradepoints/totalcredits;
	
	cout<<"------------------"<<endl;
	cout<<"Total credits hours"<<totalcredits<<endl;
	cout<<"Total grade points"<<totalgradepoints<<endl;
	cout<<"Total CGPA "<<CGPA<<endl;
	cout<<"-------------------"<<endl;
	system("pause");
	return 0;

}