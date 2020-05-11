# C----Code-
Working With arrays and Text files
Scenario:
Problem Solvers Int’l Ltd.(PSIL) is an International Software Development Company and their jobs are in high demand. You have submitted an application for employment to the company, attended an interview and have been short-listed. However, due to the fact that entry into the company is highly competitive, one of the company’s strategies for narrow the field of applicants is to give them a project which must be written with C programming language. You have been given such a project to complete in three (3) days.
The project requirements are geared at measuring your competence in four (4) areas. These areas are:
1. Your ability to manipulate arrays and their values
2. Your ability to work with functions, i.e., develop modular programs
3. Your ability to work with one of the C programming language’s most powerful feature, pointers; and
4. Your ability to work with Text and Binary Files.
Project Requirements:
The general requirements of the project as outlined by PSIL are as follows:
Assignment #1
F-VTDI-ACAD-AST-1.0
April 2020
2009
Assignment Specification Template Page 2 of 3
a. The project solution MUST be menu driven, i.e., when the program is first executed, the user
is to be presented with a menu of options similar to the following:
[ 2 marks [B]]
b. If the user selects option 1, the screen is to be cleared of the menu and an appropriate message
displayed inviting the user to enter 10 integer values.
The values are to be accepted and stored in an array and then written, from the array to a text
file called ‘array_values.txt’. NB* The file should have no more than the 10 integers at any
one time. [5 marks [M5]]
The values are to be re-read from the file and stored in another array named ‘proof_array’ of
size 10. [5 marks [M5]]
The “proof_array” is to be passed to separate functions to do the following:
1. Determine and return the smallest value in the array [10 marks [M2]]
2. Calculate and return the average of the values in the array [10 marks [M2]]
3. Calculate and return the sum of the values at odd index positions [10 marks [M2]]
4. Display the results from the three operations plus the values stored in proof_array
sorted in ascending order. [20 marks [M2]]
NB* Except for the File pointer, no other pointer is to be used in option 1
c. If the user selects option 2, the screen is to be cleared and the user asked to provide the
following: their name, date of birth (dd/mm/yyyy OR dd “Month”, yyy), and gender. The data
entered by the user are to be stored in a nested structure named ‘User’ (‘Date’ structure
nested), and then be written to two text files; one named “user_textinfo.txt”, which must only
have one user’s data at a time, and the other named “allusers_textinfo.txt”, in which the data
must never be over-written. [10 marks [M5]]
After the data has been written to the text files, the user is to be given the options (Y or N) to
view the data he/she entered. If ‘Y’ is selected, the data is to be read from ‘user_textinfo.txt’
and displayed to the user. [5 marks [M5]]
NB* Use pointers for all variables. Use functions with pointers as arguments for each task,
i.e., to get the user’s data, write the data to the files, and retrieve the data from the file to
display to the user. [10 marks [M3]]
PSIL’s Project
Menu of Options
1. Work with an array
2. Work with text file
3. Work with binary file
4. View all users in text file
5. View all users in binary file
6. Exit the program
Please select an option to continue:
F-VTDI-ACAD-AST-1.0
April 2020
2009
Assignment Specification Template Page 3 of 3
d. If the user selects option 3, the screen is to be cleared and the user asked to provide the
following: their name, date of birth (dd/mm/yyyy OR dd “Mmm”, yyyy), and gender. The
data entered by the user are to be stored in a structure named ‘User’, and then be written to
two binary files; one named “user_binaryinfo.dat”, which must only have one user’s data at a
time, and the other named “allusers_binaryinfo.dat”, in which the data must never be overwritten.
[10 marks [M5]]
After the data has been written to the binary file, the user is to be given the option (Y or N) to
view the data he/she entered. If ‘Y’ is selected, the data is to be read from
‘user_binaryinfo.dat’ and displayed to the user. [5 marks [M5]]
NB* Use pointers for all variables. Use functions with pointers as arguments for each task,
i.e., to get the user’s data, write the data to the files, and retrieve the data from the file to
display to the user. [10 marks [M3]]
e. If the user selects option 4, the screen is to be cleared and all the users’ information stored in
the “allusers_textinfo.txt” file is to be read from the file and displayed to the user.
[5 marks [M5]]
NB* Use a function with pointers as arguments for this task. [5 marks [M3]]
f. If the user selects option 5, the screen is to be cleared and all the users’ information stored in
the “allusers_binaryinfo.dat” file is to be read from the file and displayed to the user.
[5 marks [M5]]
NB* Use a function with pointers as arguments for this task. [5 marks [M3]]
g. The program only terminates when 6 is selected from the main menu. [2 marks [B]]
h. Each C source code file must contain information on the author, i.e., your name, ID number
and the date created. [2 marks [B]]
Deliverables:
One Zip archive containing a folder. The folder is to be labeled with the First initial of your first
name +last name_ID number (ex. JBrown_10078548). The folder is to contain your project files,
i.e., C source code files, header files if any, and all generated text and binary files containing at
least 2 records.
