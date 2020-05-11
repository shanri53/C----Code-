#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int choice, num[10], proof_array[10], smallest=9999999,sum,sum_odd,avg, i;

option_1 () {
	
	for (i=1;i<=10;i++){
	
		system("cls");
		printf("Please enter 10 integers\n");
		
		printf("#%d		\n\n",i);
		scanf("%d",&num[i]);
	}
	FILE*fp;
	fp= fopen("array_values.txt", "w+");
	for ( i=1;i<=10;i++){
	fprintf(fp,"%d ",num[i]);					//writes the array to the file
	}
	system("cls");
	
	
	
	fseek(fp, 0, SEEK_SET);
	for ( i=1;i<=10;i++){				//read from file to array
	fscanf(fp,"%d", &proof_array[i]);
	}
	getch();
	system("cls");
	
	for ( i=1;i<=10;i++){
		if (proof_array[i]<smallest){
			smallest=proof_array[i];
		}
		
		sum+=proof_array[i];
		if (i%2==1){
			sum_odd+=proof_array[i];
		}
	}
	
	
	avg=sum/10;						// Average of numbers in proof_array
	
	for(i=1; i<=10; i++){
    	int j, tmp;
    	
        for(j=i+1; j<=10; j++){
            if(proof_array[j] <proof_array[i]){
                tmp = proof_array[i];
                proof_array[i] = proof_array[j];
                proof_array[j] = tmp;
            }
        }
    }
	

//#############################################Results##############################################
	printf("The smallest number is %d\n", smallest);
	getch();
	system("cls");
	printf("The average of the numbers are %d\n", avg);
	getch();
	system("cls");
	printf("The sum of odd indexes are %d\n", sum_odd);
	getch();
	system("cls");
	
	printf("The numbers in the array'proof_array' are:\n\n");
	for (i=1;i<=10;i++){  //#prints the array#
	printf("%d ",proof_array[i]);
	}
	getch();
	system("cls");
//#############################################Results##############################################	

	
//	printf("the numbers entered are\n");
//	for (int i=1;i<=10;i++){printf("%d ",num[i]);}				#prints the array#
	printf("\n...... Press Enter to return to the menu \n");
	getch();
	fclose(fp);
}
option_2 () {
	
	system("cls");
	
	struct date{
	int day;
	int month;
	int year;
	};
	struct user{
	    char name[50];
	    char gender[10];
	    struct date dob;
	};
	struct user use;
	system("cls");
	printf("Please enter your name\n");
	scanf("%s",&use.name);
	printf("Please enter your Date of Birth (DD/MM/YYYY)\n");
	scanf("%d/%d/%d",&use.dob.day,&use.dob.month,&use.dob.year);
	printf("Please enter your gender (M/F)\n");
	scanf("%s",&use.gender);
	system("cls");
	
	printf("Your name is %s\n",use.name);
	printf("Your date of birth is %02d/%02d/%04d\n",use.dob.day,use.dob.month,use.dob.year);
	printf("Your gender is %s\n",use.gender);
	getch();
	system("cls");
	
	printf("A file will now be created to store the data\n");
	getch();
	system("cls");
		
	FILE*fp;
	fp= fopen("user_textinfo.txt", "w+");
	fprintf(fp,"%s \n%s \n%d/%d/%d\n", use.name, use.gender, use.dob.day, use.dob.month, use.dob.year);
	fclose(fp);
	
	fp= fopen("allusers_textinfo.txt", "a");
	fprintf(fp,"%s \n%s \n%d/%d/%d\n", use.name, use.gender, use.dob.day, use.dob.month, use.dob.year);
	fclose(fp);
	
	
	printf("Do you wish to view the data that was stored? (Y/N)\n");
	char temp;
	scanf("%s", &temp);
	system("cls");
	
	fp= fopen("user_textinfo.txt", "r");
	if (temp=='y' || temp=='Y'){
		fseek(fp, 0, SEEK_SET);
		fscanf(fp,"%s \n%s \n%d/%d/%d\n", &use.name, &use.gender, &use.dob.day, &use.dob.month, &use.dob.year);
		printf(   "%s \n%s \n%d/%d/%d\n",    use.name,  use.gender,  use.dob.day,  use.dob.month,  use.dob.year);
		getch();
		system("cls");
	}
	else{
		printf("Press Enter to return to the menu\n");
		getch();
		system("cls");
	}
	fclose(fp);

}
option_3 () {
	system("cls");
	
	struct date{
	int day;
	int month;
	int year;
	};
	struct user{
	    char name[50];
	    char gender[10];
	    struct date dob;
	};
	struct user use;
	system("cls");
	printf("Please enter your name\n");
	scanf("%s",&use.name);
	printf("Please enter your Date of Birth (DD/MM/YYYY)\n");
	scanf("%d/%d/%d",&use.dob.day,&use.dob.month,&use.dob.year);
	printf("Please enter your gender (M/F)\n");
	scanf("%s",&use.gender);
	system("cls");
	
	printf("Your name is %s\n",use.name);
	printf("Your date of birth is %02d/%02d/%04d\n",use.dob.day,use.dob.month,use.dob.year);
	printf("Your gender is %s\n",use.gender);
	getch();
	system("cls");
	
	printf("A file will now be created to store the data\n");
	getch();
	system("cls");
		
	FILE*fp;
	fp= fopen("user_binaryinfo.dat", "w+");
	fprintf(fp,"%s \n%s \n%d/%d/%d\n", use.name, use.gender, use.dob.day, use.dob.month, use.dob.year);
	fclose(fp);
	
	fp= fopen("allusers_binaryinfo.dat", "a");
	fprintf(fp,"%s \n%s \n%d/%d/%d\n", use.name, use.gender, use.dob.day, use.dob.month, use.dob.year);
	fclose(fp);
	
	
	printf("Do you wish to view the data that was stored? (Y/N)\n");
	char temp;
	scanf("%s", &temp);
	system("cls");
	
	fp= fopen("user_binaryinfo.dat", "r");
	if (temp=='y' || temp=='Y'){
		fseek(fp, 0, SEEK_SET);
		fscanf(fp,"%s \n%s \n%d/%d/%d\n", &use.name, &use.gender, &use.dob.day, &use.dob.month, &use.dob.year);
		printf(   "%s \n%s \n%d/%d/%d\n",  use.name,  use.gender,  use.dob.day,  use.dob.month,  use.dob.year);
		getch();
		system("cls");
	}
	else{
		printf("Press Enter to return to the menu\n");
		getch();
		system("cls");
	}
	fclose(fp);


}
option_4 () {
	system("cls");
	
	struct date{
	int day;
	int month;
	int year;
	};
	struct user{
	    char name[50];
	    char gender[10];
	    struct date dob;
	};
	struct user use;
	FILE*fp;
	fp= fopen("allusers_textinfo.txt", "r");
	
	while ((!feof(fp))){
		fscanf(fp,"%s \n%s \n%d/%d/%d\n", &use.name, &use.gender, &use.dob.day, &use.dob.month, &use.dob.year);
		printf(   "%s \n%s \n%d/%d/%d\n",  use.name,  use.gender,  use.dob.day,  use.dob.month,  use.dob.year);
	}
	getch();
	fclose(fp);
	


}
option_5 () {
	system("cls");
	
	struct date{
	int day;
	int month;
	int year;
	};
	struct user{
	    char name[50];
	    char gender[10];
	    struct date dob;
	};
	struct user use;
	FILE*fp;
	fp= fopen("allusers_binaryinfo.dat", "r");
	
	while ((!feof(fp))){
		fscanf(fp,"%s \n%s \n%d/%d/%d\n", &use.name, &use.gender, &use.dob.day, &use.dob.month, &use.dob.year);
		printf(   "%s \n%s \n%d/%d/%d\n",  use.name,  use.gender,  use.dob.day,  use.dob.month,  use.dob.year);
	}
	getch();
	fclose(fp);


}
option_6 () {
	exit(0);
}


int main(){

while(1){
	system("cls");	
	printf("#############################'\n");
	printf("PSIL's Project Menu of Option'\n");
	printf("1.Work With an Array\n");
	printf("2.Work With text file\n");
	printf("3.Work With Binary File \n");
	printf("4.View all users in text file\n");
	printf("5.View all users uin binary file\n");
	printf("6.Exit\n");
	printf("#############################\n\n");
	printf("Your choice?\n");
	printf("\n\n\n\n\n\n\n\nName of author: 	Shanique Riley \nID#: 			1917007681 \nDate Created: 		11/05/2020");
	
	int x=13,y=10;
	gotoxy(x, y);
	scanf("%d",&choice);

	if (choice==1){
			option_1();
	}
	if (choice==2){
			option_2();
	}
	if (choice==3){
			option_3();
	}
	if (choice==4){
			option_4();
	}
	if (choice==5){
			option_5();
	}
	if (choice==6){
		system("cls");
		option_6();
	}
	
	} 
} 


