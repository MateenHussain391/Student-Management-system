#include<iostream>
using namespace std ; 
class Person
{
	protected:
		int id ; 
		char name[50] , address[50];
	public:
		Person()
		{
			id = 0 ;
			name[0] = '\0';
			address[0] = '\0' ;
		}
		void GetInfo()
		{
			cout << "Enter the id :" ;
			cin >>id; 
			cout << "Enter the name : " ;
			cin >>name;
			cout << "Enter address : " ;
			cin >>address;
		}
		void ShowInfo()
		{
			cout << "\nThe Information of person  " <<endl ;
			cout << "Id is : " <<id <<endl ;
			cout << "Name is : " <<name <<endl ;
			cout << "Address is : " <<address <<endl ;
		}
};
class Student : public Person
{
	private:
		int roll , marks ;
	public:
		Student()
		{
			Student::Person();
			roll = marks = 0 ;
		}
		void GetEdu()
		{
			cout << "Enter your Roll Number : " ;
			cin >>roll ;
			cout << "Enter your Marks : " ;
			cin >>marks ;
		}
		void ShowEdu()
		{
			cout << "\nThe Educational details of student "<<endl;
			cout << "Your Roll Number is : " <<roll <<endl ; 
			cout << "Your marks are : " << marks <<endl ;
		}
};
int main()
{
	Student s;
	s.GetInfo();
	s.ShowInfo();
	s.GetEdu();
	s.ShowEdu();
}
