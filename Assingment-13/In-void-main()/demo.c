typedef struct Date
{
		int day;
	int month;
	int year;
}Date;
typedef struct Student
{
	int rollno;
	char name[10];
	int marks;
	Date dob;
	Date doa;
	Date exam[5];
	int isFeesPaid;
	static double totalAmount=40000;
	double amount paid;

}Student;
void storeStudents(Student* arr,int size);
void main()
{
	Student stud[10];
	
	stud[0].rollno=101;
	strcpy(stud[0].name,"harish");
	stud[0].dob.day=10;
	stud[0].isFeesPaid=0;
	
	
	stud[1].rollno=102;
	strcpy(stud[1].name,"hritik");
	stud[1].dob.day=10;
	stud[1].isFeesPaid=1;
	stud[1].paid=40000;
	
	stud[2].rollno=102;
	strcpy(stud[2].name,"shivam");
	stud[2].dob.day=10;
	stud[2].isFeesPaid=1;
	stud[2].paid=30000;
	
	stud[3].rollno=103;
	strcpy(stud[3].name,"sahil");
	stud[3].dob.day=5;
	stud[3].isFeesPaid=0;
	
	stud[4].rollno=104;
	strcpy(stud[4].name,"yogesh");
	stud[4].dob.day=5;
	stud[4].isFeesPaid=1;
	
	
	Date today=gettodaysdate();
	int i;
	for(i=0;i<4;i++)
	{
		if(todaydate-stud[i].dob>=20&&stud[i].isFeesPaid==0)
		{
			printf("\n%s has not paid fees alert is sent",stud[i].name);
		}
	}
}
