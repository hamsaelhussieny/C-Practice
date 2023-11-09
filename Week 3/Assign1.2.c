#include <stdio.h>
#include <string.h>

struct student_info{
	int roll_num;
	char name[40];
	int age;
	char address[80];
	float marks;
};

int print_stu_info(struct student_info student[15]){
	int count =0;
	for (int i = 0; i < 15; i++) {
        printf("Student %d\n", i+1);
        printf("Roll Number: %d\n", student[i].roll_num);
        printf("Name: %s\n", student[i].name);
        printf("Age: %d\n", student[i].age);
        printf("Address: %s\n", student[i].address);
        printf("Marks: %.2f\n", student[i].marks);
        printf("\n");
		
		if (student[i].marks< 12.0){
			count++;
		}
    }
	return count;
}

int main(){
	
    struct student_info student[15];

     student[0].roll_num=1;
     strcpy(student[0].name,"Ahmed Omar");
     student[0].age=19;
     strcpy(student[0].address,"Nasr City");
     student[0].marks=19;
     
     student[1].roll_num=2;
     strcpy(student[1].name,"Alaa Mohammed");
     student[1].age=20;
     strcpy(student[1].address,"Badr City");
     student[1].marks=18;
	 
	 student[2].roll_num=3;
	 strcpy(student[2].name,"Belal Ahmed");
	 student[2].age=19;
	 strcpy(student[2].address,"Nasr City");
	 student[2].marks=7.5;
	 
	 student[3].roll_num=4;
	 strcpy(student[3].name,"Basmala Ali");
	 student[3].age=18;
	 strcpy(student[3].address,"ElObour City");
	 student[3].marks=14.5;
	 
     student[4].roll_num=5;
     strcpy(student[4].name,"Reem Ahmed");
     student[4].age=20;
     strcpy(student[4].address,"Heliopolis");
     student[4].marks=11.2;
     
	 student[5].roll_num=6;
	 strcpy(student[5].name,"Sarah Mohammed");
	 student[5].age=20;
	 strcpy(student[5].address,"Heliopolis");
	 student[5].marks=12;
	 
	 student[6].roll_num=7;
	 strcpy(student[6].name,"Salah Ali");
	 student[6].age=21;
	 strcpy(student[6].address,"AlRehab");
	 student[6].marks=14;
	 
	 student[7].roll_num=8;
	 strcpy(student[7].name,"Walaa Mohammed");
	 student[7].age=20;
	 strcpy(student[7].address,"ElKatameya");
	 student[7].marks=8;
	 
	 student[8].roll_num=9;
	 strcpy(student[8].name,"Mai Ali");
	 student[8].age=21;
	 strcpy(student[8].address,"AlRehab");
	 student[8].marks=18;
	 
	 student[9].roll_num=10;
	 strcpy(student[9].name,"Mariam Adel");
	 student[9].age=20;
	 strcpy(student[9].address,"Badr City");
	 student[9].marks=10.5;
	 
	 student[10].roll_num=11;
	 strcpy(student[10].name,"Mohammed Ahmed");
	 student[10].age=19;
	 strcpy(student[10].address,"ElKatameya");
	 student[10].marks=17;
	 
	 student[11].roll_num=12;
	 strcpy(student[11].name,"Mohammed Ali");
	 student[11].age=21;
	 strcpy(student[11].address,"ElObour City");
	 student[11].marks=16;
	 
	 student[12].roll_num=13;
	 strcpy(student[12].name,"Mohab Ali");
	 student[12].age=20;
	 strcpy(student[12].address,"Nasr City");
	 student[12].marks=12.5;
	 
     student[13].roll_num=14;
     strcpy(student[13].name,"Yassmien Ahmed");
     student[13].age=19;
     strcpy(student[13].address,"Heliopolis");
     student[13].marks=11;
     
	 student[14].roll_num=15;
	 strcpy(student[14].name,"Youssef Mohammed");
	 student[14].age=20;
	 strcpy(student[14].address,"ElKatameya");
	 student[14].marks=15;
	  
	  int count=print_stu_info(student);
	  
	  printf("Number of students with marks less than 12: %d\n", count);

     
	

    return 0;

	
}