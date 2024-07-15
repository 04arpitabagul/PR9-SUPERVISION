//Q.2 Structures and Percentage Calculation
//
//Develop a Program to generate mark sheets for a student. Enter the marks of 5 students in
//Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes:
//roll_no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each
//student.
//
//Example:
//	
//Input:
//	
//Enter details of Student 1:
//Roll no => 121
//Name => Raj Patel
//Chemistry => 95
//Mathematics => 90
//Physics => 88
//
//Enter details of Student 2:
//Roll no => 122
//Name => Divya Sharma
//Chemistry => 92
//Mathematics => 80
//Physics => 84
//
//Enter details of Student 3:
//Roll no => 123
//Name => Piyush Mishra
//Chemistry => 72
//Mathematics => 87
//Physics => 93
//
//Enter details of Student 4:
//Roll no => 124
//Name => Vatsal Mangukiya
//Chemistry => 68
//Mathematics => 96
//Physics => 85
//
//Enter details of Student 5:
//Roll no => 125
//Name => Sagar Trivedi
//Chemistry => 91
//Mathematics => 89
//Physics => 77
//
//Output:
//Raj Patel (121)
//Chemistry => 95
//Mathematics => 90
//Physics => 88
//Total => 273/300
//Percent => 91.00%
//
//Divya Sharma (122)
//Chemistry => 92
//Mathematics => 80
//Physics => 84
//Total => 256/300
//Percent => 85.33%
//
//Piyush Mishra (123)
//Chemistry => 72
//Mathematics => 87
//Physics => 93
//Total => 252/300
//Percent => 84.00%
//
//Vatsal Mangukiya (124)
//Chemistry => 68
//Mathematics => 96
//Physics => 85
//Total => 249/300
//Percent => 83.00%
//
//Sagar Trivedi (125)
//Chemistry => 91
//Mathematics => 89
//Physics => 77
//Total => 257/300
//Percent => 85.66%
//
//Marking Criteria: (Total 6 Marks)
//Logic: 4 Marks
//Output: 2 Marks

#include <stdio.h>
#include <conio.h>

struct student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() {
	int i;
    struct student students[5];

    // input student details
    for ( i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i+1);
        printf("Roll no => ");
        scanf("%d", &students[i].roll_no);
        printf("Name => ");
        scanf("%s", students[i].name);
        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);
    }

    // calculate and display percentages
    for ( i = 0; i < 5; i++) {
        int total = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percent = (total / 300.0) * 100;

        printf("%s (%d)\n", students[i].name, students[i].roll_no);
        printf("Chemistry => %d\n", students[i].chem_marks);
        printf("Mathematics => %d\n", students[i].maths_marks);
        printf("Physics => %d\n", students[i].phy_marks);
        printf("Total => %d/300\n", total);
        printf("Percent => %.2f%%\n\n", percent);
    }

   getch();
}

