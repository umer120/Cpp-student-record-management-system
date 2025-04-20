#include <iostream>
using namespace std;
int main()
{
	int roll[10] = { 3472, 7893, 2451, 6714, 7152 };
	float mid[10] = { 16.5, 21, 18.5, 28, 14 };
	float finalMarks[10] = { 79, 91, 64, 88.5, 58 };
	int classes[10] = { 1, 2, 3, 4, 5 };
	char grade[10];
	cout << "                                  Welcome to Student Record Maintenence System\n\n\n";
	cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
	cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
	cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
	for (int i = 0; i < 5; i++)
	{
		if ((finalMarks[i] >= 0) && (finalMarks[i] < 50))
		{
			grade[i] = 'F';
		}
		else if ((finalMarks[i] >= 50) && (finalMarks[i] < 60))
		{
			grade[i] = 'D';
		}
		else if ((finalMarks[i] >= 60) && (finalMarks[i] < 73))
		{
			grade[i] = 'C';
		}
		else if ((finalMarks[i] >= 73) && (finalMarks[i] < 86))
		{
			grade[i] = 'B';
		}
		else if ((finalMarks[i] >= 86) && (finalMarks[i] <= 100))
		{
			grade[i] = 'A';
		}
		else
		{
			grade[i] = '0';
		}
		cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
		if ((roll[i]<1000) || (roll[i]>9999))
		{
			cout << "Error in roll number: " << roll[i] << endl;
			cout << "Go back to program and correct your roll number. It should range from 1000 to 9999." << endl;
			return 0;
		}
		if ((mid[i]<0) || (mid[i]>30))
		{
			cout << "Error in mid marks: " << mid[i] << endl;
			cout << "Go back to program and change your mid-term marks. It should range from 0 to 30." << endl;
			return 0;
		}
		if ((finalMarks[i]<0) || (finalMarks[i]>100))
		{
			cout << "Error in final marks: " << finalMarks[i] << endl;
			cout << "Go back to program and correct your final exam marks. It should range from 0 to 100" << endl;
			return 0;
		}
		if ((classes[i]<1) || (classes[i]>10))
		{
			cout << "Error in class: " << classes[i] << endl;
			cout << "Go back to program and correct your class. It should range from 1 to 10" << endl;
			return 0;
		}
	}
	cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
	//cout << "              |---------------------------------------------------------------------------------|\n";
	//cout << "              |                                    MENU                                         |\n";
	//cout << "              |---------------------------------------------------------------------------------|\n\n";
	//cout << "1. Sort and display all the records roll number wise in ascending order." << endl;
	//cout << "2. Sort and display all the records roll number wise in descending order." << endl;
	//cout << "3. Sort and display all records in ascending order based on marks in Midterm." << endl;
	//cout << "4. Sort and display all records in descending order based on marks in Midterm." << endl;
	//cout << "5. Sort and display all records in ascending order based on marks in Final." << endl;
	//cout << "6. Sort and display all records in ascending order based on marks in Final." << endl;
	//cout << "7. Sort and display all records in ascending order based on Grade." << endl;
	//cout << "8. Sort and display all records in descending order based on Grade." << endl;
	//cout << "9. Add a new entry of a student." << endl;
	//cout << "10. Delete a student record based on his roll number." << endl;
	//cout << "11. Display record of all the students greater than X marks in final exam (in descending order with respect to marks obtained in final exam). The value of X will be entered by the user." << endl;
	//cout << "12. Display record of all the students greater than X marks in final exam (in ascending order with respect to marks obtained in final exam). The value of X will be entered by the user." << endl;
	//cout << "13. Display record of all the students less than or equal to X marks in final exam (in descending order with respect to marks obtained in final exam). The value of X will be entered by the user." << endl;
	//cout << "14. Display record of all the students less than or equal to X marks in final exam (in ascending order with respect to marks obtained in final exam). The value of X will be entered by the user." << endl;
	//cout << "15. Display record of all the students greater than X grade (in descending order with respect to grade). The value of X (character) will be entered by the user." << endl;
	//cout << "16. Display record of all the students greater than X grade (in ascending order with respect to grade). The value of X (character) will be entered by the user." << endl;
	//cout << "17. Display record of all the students less than or equal to X grade (in descending order with respect to grade). The value of X (character) will be entered by the user." << endl;
	//cout << "18. Display record of all the students less than or equal to X grade (in ascending order with respect to grade). The value of X (character) will be entered by the user.\n\n\n";
	//int option;
	//cout << "Enter the option which you want from the above menu: ";
	//cin >> option;
	int option;
	do
	{
		cout << "              |---------------------------------------------------------------------------------|\n";
		cout << "              |                                    MENU                                         |\n";
		cout << "              |---------------------------------------------------------------------------------|\n\n";
		cout << "1. Sort and display all the records roll number wise in ascending order." << endl;
		cout << "2. Sort and display all the records roll number wise in descending order." << endl;
		cout << "3. Sort and display all records in ascending order based on marks in Midterm." << endl;
		cout << "4. Sort and display all records in descending order based on marks in Midterm." << endl;
		cout << "5. Sort and display all records in ascending order based on marks in Final." << endl;
		cout << "6. Sort and display all records in ascending order based on marks in Final." << endl;
		cout << "7. Sort and display all records in ascending order based on Grade." << endl;
		cout << "8. Sort and display all records in descending order based on Grade." << endl;
		cout << "9. Add a new entry of a student." << endl;
		cout << "10. Delete a student record based on his roll number." << endl;
		cout << "11. Display record of all the students greater than X marks in final exam (in descending order with respect to marks obtained in final exam). The value of X will be entered by the user." << endl;
		cout << "12. Display record of all the students greater than X marks in final exam (in ascending order with respect to marks obtained in final exam). The value of X will be entered by the user." << endl;
		cout << "13. Display record of all the students less than or equal to X marks in final exam (in descending order with respect to marks obtained in final exam). The value of X will be entered by the user." << endl;
		cout << "14. Display record of all the students less than or equal to X marks in final exam (in ascending order with respect to marks obtained in final exam). The value of X will be entered by the user." << endl;
		cout << "15. Display record of all the students greater than X grade (in descending order with respect to grade). The value of X (character) will be entered by the user." << endl;
		cout << "16. Display record of all the students greater than X grade (in ascending order with respect to grade). The value of X (character) will be entered by the user." << endl;
		cout << "17. Display record of all the students less than or equal to X grade (in descending order with respect to grade). The value of X (character) will be entered by the user." << endl;
		cout << "18. Display record of all the students less than or equal to X grade (in ascending order with respect to grade). The value of X (character) will be entered by the user.\n\n\n";
		cout << "Enter the option which you want from the above menu: ";
		cin >> option;
		if (option == 1)
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = i + 1; j < 10; j++)
				{
					if (roll[i] > roll[j])
					{
						int tempRoll = roll[i];
						roll[i] = roll[j];
						roll[j] = tempRoll;

						float tempMid = mid[i];
						mid[i] = mid[j];
						mid[j] = tempMid;

						float tempFinalMarks = finalMarks[i];
						finalMarks[i] = finalMarks[j];
						finalMarks[j] = tempFinalMarks;

						int tempClass = classes[i];
						classes[i] = classes[j];
						classes[j] = tempClass;

						char tempGrade = grade[i];
						grade[i] = grade[j];
						grade[j] = tempGrade;
					}
				}
			}
				cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
				cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
				cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
				for (int i = 0; i < 10; i++)
				{
					cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
				}
				cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 2)
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = i + 1; j < 10; j++)
				{
					if (roll[i] < roll[j])
					{
						int tempRoll = roll[i];
						roll[i] = roll[j];
						roll[j] = tempRoll;

						float tempMid = mid[i];
						mid[i] = mid[j];
						mid[j] = tempMid;

						float tempFinalMarks = finalMarks[i];
						finalMarks[i] = finalMarks[j];
						finalMarks[j] = tempFinalMarks;

						int tempClass = classes[i];
						classes[i] = classes[j];
						classes[j] = tempClass;

						char tempGrade = grade[i];
						grade[i] = grade[j];
						grade[j] = tempGrade;
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 3)
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = i + 1; j < 10; j++)
				{
					if (mid[i] > mid[j])
					{
						float tempMid = mid[i];
						mid[i] = mid[j];
						mid[j] = tempMid;

						int tempRoll = roll[i];
						roll[i] = roll[j];
						roll[j] = tempRoll;

						float tempFinalMarks = finalMarks[i];
						finalMarks[i] = finalMarks[j];
						finalMarks[j] = tempFinalMarks;

						int tempClass = classes[i];
						classes[i] = classes[j];
						classes[j] = tempClass;

						char tempGrade = grade[i];
						grade[i] = grade[j];
						grade[j] = tempGrade;
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 4)
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = i + 1; j < 10; j++)
				{
					if (mid[i] < mid[j])
					{
						float tempMid = mid[i];
						mid[i] = mid[j];
						mid[j] = tempMid;

						int tempRoll = roll[i];
						roll[i] = roll[j];
						roll[j] = tempRoll;

						float tempFinalMarks = finalMarks[i];
						finalMarks[i] = finalMarks[j];
						finalMarks[j] = tempFinalMarks;

						int tempClass = classes[i];
						classes[i] = classes[j];
						classes[j] = tempClass;

						char tempGrade = grade[i];
						grade[i] = grade[j];
						grade[j] = tempGrade;
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 5)
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = i + 1; j < 10; j++)
				{
					if (finalMarks[i] > finalMarks[j])
					{
						float tempFinalMarks = finalMarks[i];
						finalMarks[i] = finalMarks[j];
						finalMarks[j] = tempFinalMarks;

						float tempMid = mid[i];
						mid[i] = mid[j];
						mid[j] = tempMid;

						int tempRoll = roll[i];
						roll[i] = roll[j];
						roll[j] = tempRoll;

						int tempClass = classes[i];
						classes[i] = classes[j];
						classes[j] = tempClass;

						char tempGrade = grade[i];
						grade[i] = grade[j];
						grade[j] = tempGrade;
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 6)
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = i + 1; j < 10; j++)
				{
					if (finalMarks[i] < finalMarks[j])
					{
						float tempFinalMarks = finalMarks[i];
						finalMarks[i] = finalMarks[j];
						finalMarks[j] = tempFinalMarks;

						float tempMid = mid[i];
						mid[i] = mid[j];
						mid[j] = tempMid;

						int tempRoll = roll[i];
						roll[i] = roll[j];
						roll[j] = tempRoll;

						int tempClass = classes[i];
						classes[i] = classes[j];
						classes[j] = tempClass;

						char tempGrade = grade[i];
						grade[i] = grade[j];
						grade[j] = tempGrade;
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 7)
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = i + 1; j < 10; j++)
				{
					if (grade[i] < grade[j])
					{
						char tempGrade = grade[i];
						grade[i] = grade[j];
						grade[j] = tempGrade;

						float tempFinalMarks = finalMarks[i];
						finalMarks[i] = finalMarks[j];
						finalMarks[j] = tempFinalMarks;

						float tempMid = mid[i];
						mid[i] = mid[j];
						mid[j] = tempMid;

						int tempRoll = roll[i];
						roll[i] = roll[j];
						roll[j] = tempRoll;

						int tempClass = classes[i];
						classes[i] = classes[j];
						classes[j] = tempClass;
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 8)
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = i + 1; j < 10; j++)
				{
					if (grade[i] > grade[j])
					{
						char tempGrade = grade[i];
						grade[i] = grade[j];
						grade[j] = tempGrade;

						float tempFinalMarks = finalMarks[i];
						finalMarks[i] = finalMarks[j];
						finalMarks[j] = tempFinalMarks;

						float tempMid = mid[i];
						mid[i] = mid[j];
						mid[j] = tempMid;

						int tempRoll = roll[i];
						roll[i] = roll[j];
						roll[j] = tempRoll;

						int tempClass = classes[i];
						classes[i] = classes[j];
						classes[j] = tempClass;
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 9)
		{
			char q;
			do
			{
				cout << "\t\tAdd a new entry Details\n";
				for (int m = 5; m < 10; m++)
				{
					cout << "Enter roll number: ";
					cin >> roll[m];
					if ((roll[m]<1000) || (roll[m]>9999))
					{
						cout << "INVALID ENTRY. IT SHOULD RANGE FROM 1000 TO 9999\n";
						do
						{
							cout << "Enter roll number: ";
							cin >> roll[m];
							if ((roll[m]<1000) || (roll[m]>9999))
							{
								cout << "INVALID ENTRY. IT SHOULD RANGE FROM 1000 TO 9999\n";
							}
							else if ((roll[m] >= 1000) || (roll[m] <= 9999))
							{
								break;
							}
						} while ((roll[m]<1000) || (roll[m]>9999));
					}
					cout << "Enter mid term marks: ";
					cin >> mid[m];
					if ((mid[m]<0) || (mid[m]>30))
					{
						cout << "INVALID ENTRY. IT SHOULD RANGE FROM 0 TO 30\n";
						do
						{
							cout << "Enter mid term marks: ";
							cin >> mid[m];
							if ((mid[m]<0) || (mid[m]>30))
							{
								cout << "INVALID ENTRY. IT SHOULD RANGE FROM 0 TO 30\n";
							}
							else if ((mid[m] >= 0) || (mid[m] <= 30))
							{
								break;
							}
						} while ((mid[m]<0) || (mid[m]>30));
					}
					cout << "Enter final term marks: ";
					cin >> finalMarks[m];
					if ((finalMarks[m]<0) || (finalMarks[m]>100))
					{
						cout << "INVALID ENTRY. IT SHOULD RANGE FROM 0 TO 100\n";
						do
						{
							cout << "Enter final term marks: ";
							cin >> finalMarks[m];
							if ((finalMarks[m]<0) || (finalMarks[m]>100))
							{
								cout << "INVALID ENTRY. IT SHOULD RANGE FROM 0 TO 100\n";
							}
							else if ((finalMarks[m] >= 0) || (finalMarks[m] <= 100))
							{
								break;
							}
						} while ((finalMarks[m]<0) || (finalMarks[m]>100));
					}
					cout << "Enter class: ";
					cin >> classes[m];
					if ((classes[m]<1) || (classes[m]>10))
					{
						cout << "INVALID ENTRY. IT SHOULD RANGE FROM 1 TO 10\n";
						do
						{
							cout << "Enter class: ";
							cin >> classes[m];
							if ((classes[m]<1) || (classes[m]>10))
							{
								cout << "INVALID ENTRY. IT SHOULD RANGE FROM 1 TO 10\n";
							}
							else if ((classes[m] >= 1) || (classes[m] <= 10))
							{
								break;
							}
						} while ((classes[m]<1) || (finalMarks[m]>10));
					}
					if ((finalMarks[m] >= 0) && (finalMarks[m] < 50))
					{
						grade[m] = 'F';
					}
					else if ((finalMarks[m] >= 50) && (finalMarks[m] < 60))
					{
						grade[m] = 'D';
					}
					else if ((finalMarks[m] >= 60) && (finalMarks[m] < 73))
					{
						grade[m] = 'C';
					}
					else if ((finalMarks[m] >= 73) && (finalMarks[m] < 86))
					{
						grade[m] = 'B';
					}
					else if ((finalMarks[m] >= 86) && (finalMarks[m] <= 100))
					{
						grade[m] = 'A';
					}
					else
					{
						grade[m] = '0';
					}
					cout << "Do you want to enter new entry(y/n): ";
					cin >> q;
					if (q == 'y')
					{
						continue;
					}
					cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
					cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
					cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
					for (int n = 0; n <= m; n++)
					{
						cout << " " << roll[n] << "\t\t|\t\t" << mid[n] << "\t\t|\t\t" << finalMarks[n] << "\t\t|\t" << "  " << classes[n] << "\t" << "    " << "|\t\t" << grade[n] << "\t" << "|" << endl;
					}
					cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
					if (q == 'n')
					{
						break;
					}
				}
			} while (q != 'n');
		}
		else if (option==10)
		{
			int recentIndex = 10;
			int deletedRoll;
			char q;
			do
			{
				cout << "Enter roll number of the student which you want to delete: ";
				cin >> deletedRoll;
				for (int i = 0; i < recentIndex; i++)
				{
					if (deletedRoll == roll[i])
					{
						for (int j = i + 1; j < recentIndex; j++)
						{
							roll[j - 1] = roll[j];
							mid[j - 1] = mid[j];
							finalMarks[j - 1] = finalMarks[j];
							classes[j - 1] = classes[j];
							grade[j - 1] = grade[j];
						}
						recentIndex--;
					}
				}
				cout << "Do you want to delete another entry?(y/n)";
				cin >> q;
			} while (q != 'n');
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < recentIndex; i++)
			{
				cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 11)
		{
			float X;
			cout << "Enter a value for X: ";
			cin >> X;
			for (int i = 0; i < 10; i++)
			{
				if (finalMarks[i] > X)
				{
					for (int j = i + 1; j < 10; j++)
					{
						if ((finalMarks[j] > X) && (finalMarks[j] > finalMarks[i]))
						{
							float tempFinal = finalMarks[i];
							finalMarks[i] = finalMarks[j];
							finalMarks[j] = tempFinal;

							int tempRoll = roll[i];
							roll[i] = roll[j];
							roll[j] = tempRoll;

							float tempMid = mid[i];
							mid[i] = mid[j];
							mid[j] = tempMid;

							int tempClasses = classes[i];
							classes[i] = classes[j];
							classes[j] = tempClasses;
							
							char tempGrade = grade[i];
							grade[i] = grade[j];
							grade[j] = tempGrade;
						}
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				if (finalMarks[i] > X) 
				{
					cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 12)
		{
			float X;
			cout << "Enter a value for X: ";
			cin >> X;
			for (int i = 0; i < 10; i++)
			{
				if (finalMarks[i] > X)
				{
					for (int j = i + 1; j < 10; j++)
					{
						if ((finalMarks[j] > X) && (finalMarks[j] < finalMarks[i]))
						{
							float tempFinal = finalMarks[i];
							finalMarks[i] = finalMarks[j];
							finalMarks[j] = tempFinal;

							int tempRoll = roll[i];
							roll[i] = roll[j];
							roll[j] = tempRoll;

							float tempMid = mid[i];
							mid[i] = mid[j];
							mid[j] = tempMid;

							int tempClasses = classes[i];
							classes[i] = classes[j];
							classes[j] = tempClasses;

							char tempGrade = grade[i];
							grade[i] = grade[j];
							grade[j] = tempGrade;
						}
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				if (finalMarks[i] > X)
				{
					cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 13)
		{
			float X;
			cout << "Enter the value for X: ";
			cin >> X;
			for (int i = 0; i < 10; i++)
			{
				if (finalMarks[i] <= X)
				{
					for (int j = i + 1; j < 10; j++)
					{
						if (finalMarks[j] <= X) 
						{
							if (finalMarks[j] > finalMarks[i])
							{
								float tempFinal = finalMarks[i];
								finalMarks[i] = finalMarks[j];
								finalMarks[j] = tempFinal;

								int tempRoll = roll[i];
								roll[i] = roll[j];
								roll[j] = tempRoll;

								float tempMid = mid[i];
								mid[i] = mid[j];
								mid[j] = tempMid;

								int tempClass = classes[i];
								classes[i] = classes[j];
								classes[j] = tempClass;

								char tempGrade = grade[i];
								grade[i] = grade[j];
								grade[j] = tempGrade;
							}
						}
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				if (finalMarks[i] <= X)
				{
					cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 14)
		{
			float X;
			cout << "Enter the value for X: ";
			cin >> X;
			for (int i = 0; i < 10; i++)
			{
				if (finalMarks[i] <= X)
				{
					for (int j = i + 1; j < 10; j++)
					{
						if (finalMarks[j] <= X)
						{
							if (finalMarks[j] < finalMarks[i])
							{
								float tempFinal = finalMarks[i];
								finalMarks[i] = finalMarks[j];
								finalMarks[j] = tempFinal;

								int tempRoll = roll[i];
								roll[i] = roll[j];
								roll[j] = tempRoll;

								float tempMid = mid[i];
								mid[i] = mid[j];
								mid[j] = tempMid;

								int tempClass = classes[i];
								classes[i] = classes[j];
								classes[j] = tempClass;

								char tempGrade = grade[i];
								grade[i] = grade[j];
								grade[j] = tempGrade;
							}
						}
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				if (finalMarks[i] <= X)
				{
					cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 15)
		{
			char X;
			cout << "Enter the value for X: ";
			cin >> X;
			for (int i = 0; i < 10; i++)
			{
				if (grade[i] < X)
				{
					for (int j = i + 1; j < 10; j++)
					{
						if (grade[j] < X)
						{
							if (grade[j] < grade[i])
							{
								char tempGrade = grade[i];
								grade[i] = grade[j];
								grade[j] = tempGrade;

								float tempFinal = finalMarks[i];
								finalMarks[i] = finalMarks[j];
								finalMarks[j] = tempFinal;

								int tempRoll = roll[i];
								roll[i] = roll[j];
								roll[j] = tempRoll;

								float tempMid = mid[i];
								mid[i] = mid[j];
								mid[j] = tempMid;

								int tempClass = classes[i];
								classes[i] = classes[j];
								classes[j] = tempClass;
							}
						}
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				if (grade[i] < X)
				{
					cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 16)
		{
			char X;
			cout << "Enter the value for X: ";
			cin >> X;
			for (int i = 0; i < 10; i++)
			{
				if (grade[i] < X)
				{
					for (int j = i + 1; j < 10; j++)
					{
						if (grade[j] < X)
						{
							if (grade[j] > grade[i])
							{
								char tempGrade = grade[i];
								grade[i] = grade[j];
								grade[j] = tempGrade;

								float tempFinal = finalMarks[i];
								finalMarks[i] = finalMarks[j];
								finalMarks[j] = tempFinal;

								int tempRoll = roll[i];
								roll[i] = roll[j];
								roll[j] = tempRoll;

								float tempMid = mid[i];
								mid[i] = mid[j];
								mid[j] = tempMid;

								int tempClass = classes[i];
								classes[i] = classes[j];
								classes[j] = tempClass;
							}
						}
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				if (grade[i] < X)
				{
					cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 17)
		{
			char X;
			cout << "Enter the value for X: ";
			cin >> X;
			for (int i = 0; i < 10; i++)
			{
				if (grade[i] >= X)
				{
					for (int j = i + 1; j < 10; j++)
					{
						if (grade[j] >= X)
						{
							if (grade[j] < grade[i])
							{
								char tempGrade = grade[i];
								grade[i] = grade[j];
								grade[j] = tempGrade;

								float tempFinal = finalMarks[i];
								finalMarks[i] = finalMarks[j];
								finalMarks[j] = tempFinal;

								int tempRoll = roll[i];
								roll[i] = roll[j];
								roll[j] = tempRoll;

								float tempMid = mid[i];
								mid[i] = mid[j];
								mid[j] = tempMid;

								int tempClass = classes[i];
								classes[i] = classes[j];
								classes[j] = tempClass;
							}
						}
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				if (grade[i] >= X)
				{
					cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == 18)
		{
			char X;
			cout << "Enter the value for X: ";
			cin >> X;
			for (int i = 0; i < 10; i++) 
			{
				for (int j = i + 1; j < 10; j++)
				{
					if (grade[i] >= X && grade[j] >= X)
					{
						if (grade[i] < grade[j])
						{
							char tempGrade = grade[i];
							grade[i] = grade[j];
							grade[j] = tempGrade;

							float tempFinal = finalMarks[i];
							finalMarks[i] = finalMarks[j];
							finalMarks[j] = tempFinal;

							int tempRoll = roll[i];
							roll[i] = roll[j];
							roll[j] = tempRoll;

							float tempMid = mid[i];
							mid[i] = mid[j];
							mid[j] = tempMid;

							int tempClass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempClass;
						}
					}
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			cout << "  Roll Number   |        Midterm(30 Marks)      |        Final(50 Marks)        |      Class        |      Grade        |\n";
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n";
			for (int i = 0; i < 10; i++)
			{
				if (grade[i] >= X)
				{
					cout << " " << roll[i] << "\t\t|\t\t" << mid[i] << "\t\t|\t\t" << finalMarks[i] << "\t\t|\t" << "  " << classes[i] << "\t" << "    " << "|\t\t" << grade[i] << "\t" << "|" << endl;
				}
			}
			cout << "----------------|-------------------------------|-------------------------------|-------------------|-------------------|\n\n\n";
		}
		else if (option == -1)
		{
			return 0;
		}
		else
		{
			cout << "ERROR!! THIS OPTION DOES NOT EXISTS!!";
		}
	} while (option!=-1);
	return 0;
}