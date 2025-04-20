# Cpp-student-record-management-system
A console-based Student Record Management System implemented in C++, featuring sorting, filtering, searching, adding, and deleting student academic records using arrays.

# ITC-Project.docx

The attached document outlines the requirements and specifications for a Introduction to Computing project titled "Student Record Management System"

# Project.cpp

This C++ program manages academic records for students, storing details such as roll number, midterm marks, final marks, class, and grades in separate arrays. It provides a menu-driven interface to perform various operations on the student data, including sorting, adding, deleting, and filtering records based on specific criteria.

**Key Features**
1. **_Data Storage:_**
   
- Stores student details in arrays:
  
    - roll (integer): Roll numbers (1000–9999).
      
    - mid (float): Midterm marks (0–30).
      
    - finalMarks (float): Final exam marks (0–100).
      
    - classes (integer): Class numbers (1–10).
      
    - grade (char): Grades (A, B, C, D, F) based on final marks.
      
- Initially populated with 5 sample student records (arrays sized for up to 10 for testing).

2. **_Input Validation:_**
   
- Ensures roll numbers are unique and within range (1000–9999).

- Validates midterm marks (0–30), final marks (0–100), and class numbers (1–10).

- Terminates with an error message if invalid data is detected.

3. **_Grade Calculation:_**
   
- Assigns grades based on final marks:
  
    - <50: F
      
    - 50–59: D
      
    - 60–72: C
      
    - 73–85: B
      
    - ≥86: A

4. **_Menu-Driven Operations:_**

- **Sorting:** Sorts and displays records by:

    - Roll number (ascending/descending).
      
    - Midterm marks (ascending/descending).
      
    - Final marks (ascending/descending).
      
    - Grade (ascending/descending).
  
- **Add Entry:** Allows adding new student records with validation.

- **Delete Entry:** Removes a student record by roll number, shifting remaining entries.

- **Filtering:** Displays records based on user-specified thresholds:

    - Final marks greater than or less than/equal to a value X (sorted ascending/descending).

    - Grades greater than or less than/equal to a grade X (sorted ascending/descending).

5. **_User Interface:_**

- Displays a formatted table for student records.

- Provides a menu with 18 options, looping until the user exits (option -1).

- Handles invalid menu inputs with an error message.
