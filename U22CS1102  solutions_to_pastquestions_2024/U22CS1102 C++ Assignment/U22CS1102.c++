#include <iostream>
#include <string>

using namespace std;

// Define a struct to represent a student
struct Student {
    char name[100]; // Name of the student
    int age;         // Age of the student
    float marks;     // Marks of the student
};

// Define a class to contain functions (answers to each question)
class U22CS1102 {
public:
    // Question 2a. Function to check if a number is prime or not
    void check() {
        int num; // Input number
        int flag; // Flag to indicate if the number is prime
        cout << "          Welcome User!                " << endl;

        cout << "----------------------------------------" << endl;
        cout << "          Prime Number Checker          " << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter a number: ";
        cin >> num;

        // Edge case: numbers less than or equal to 1 are not prime
        if (num <= 1) {
            cout << num << " is not a prime number!" << endl;
            
        } else {

            flag = 1; // Assume the number is prime initially

            
            for (int i = 2; i <= num / 2; i++) {/* Check if the number is divisible by any number up to its half
                                                 I used `i <= num / 2` instead of `i < num`  to optimize the loop and reduce unnecessary iterations.*/
    
                if (num % i == 0) {
                    flag = 0; // If the number is divisible, it's not prime
                    break;
                    
                      // Display whether the number is prime or not
       
                }
                 
            }
            if (flag == 1) {
            cout << num << " is a prime number!" << endl;
            
        } else {
            cout << num << " is not a prime number!" << endl;
       
        } 
        }

     
        cout << endl;
    }

    // Question 2b. Function to calculate the sum of elements in an array
    void sumArr() {
        int n; // Number of elements in the array

        cout << "----------------------------------------" << endl;
        cout << "      Sum of Elements in an Array      " << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter the number of elements:" << endl;
        cin >> n;

        int arr[n]; // Array to store the elements

        cout << "Enter the elements:" <<endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int sum = 0; // Initialize the sum to 0

        // Calculate the sum of the array elements
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        cout << "The sum of the array is: " << sum << endl;
        cout << endl;
    }

    // Question 3a. Function to sort an array using bubble sort
    void bubbleSort() {
        int n; // Number of elements in the array

        cout << "----------------------------------------" << endl;
        cout << "           Bubble Sort Algorithm        " << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter the number of elements:" <<endl;
        cin >> n;

        int arr[n]; // Array to store the elements

        cout << "Enter the elements:" <<endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Perform bubble sort
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j]; // Swap elements
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        // Display the sorted array
        cout << "The sorted array is: {";
        for (int i = 0; i < n; i++) {
            cout << arr[i];
            if (i < n - 1) {
                cout << ", ";
            }
        }
        cout << "}" << endl;
        cout << endl;
    }

    // Question 3b. Function to calculate the sum and average of 10 numbers
    void sumAverage() {
        int n = 10; // Number of elements
        int arr[n]; // Array to store the elements
        int sum = 0; // Initialize the sum to 0

        cout << "----------------------------------------" << endl;
        cout << "      Sum and Average of 10 Numbers    " << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter 10 numbers: "<< endl;
         for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i]; // Calculate the sum
        }

        double average = (double)sum / n; // Calculate the average

        cout << "The sum of 10 numbers is: " << sum << endl;
        cout << "The average of 10 numbers is: " << average << endl;
        cout << endl;
    }

    /* Question 4a. Function to find the length of a given string
    I encountered a problem using `cin` to input the string, which stops reading input when it encounters a whitespace character
    so I used `getline` instead of `cin` to read the entire line of input, including spaces*/
    void findLength() {
        char str[777]; // Array to store the string

        cout << "----------------------------------------" << endl;
        cout << "         Length of a Given String       " << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter a string: "<< endl;
         cin.ignore(); // Ignore the newline character left in the input buffer
          cin.getline(str, 777); // Read the entire line of input


        int length = 0; // Initialize the length to 0

        // Calculate the length of the string
        while (str[length] != '\0') {
            length++;
        }

        cout << "The length of the string is: " << length << endl;
        cout << endl;
    }

    // Question 4b. Function to perform linear search on an array
    int linearSearch(int arr[], int n, int target) {
        // Iterate through the array to find the target element
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                return i; // Return the index if the target is found
            }
        }
        return -1; // Return -1 if the target is not found
    }

    //Question 5a.  Function to add two numbers using pointers
    int usingPointers() {
        int num1, num2; // Input numbers

        cout << "----------------------------------------" << endl;
        cout << "     Sum of Two Numbers Using Pointers" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter two numbers: "<< endl;
        cin >> num1 >> num2;

        int* ptr1 = &num1; //Pointer to First number
        int* ptr2 = &num2; //Pointer to Second number

        int sum = *ptr1 + *ptr2; // Calculate the sum

        cout << "The sum of "<<num1<<" and "<<num2<<" is: "<< sum << endl;
        cout << endl;
        return 0;
    }

    // Question 5b. Function to check if a number is a palindrome
    int palindrome() {
        int num; // Input number

        cout << "----------------------------------------" << endl;
        cout << "             Palindrome Checker         " << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter a number: "<<endl;
        cin >> num;

        int reversedNum = 0; // Initialize the reversed number to 0
        int originalNum = num; // Store the original number

        // Reverse the number
        while (num != 0) {
            int lastDigit = num % 10;  // Stores the last digit of num
            reversedNum = reversedNum * 10 + lastDigit;  // Gradually builds the reversed number in each iteration
            num /= 10;  // Removes the last digit of num in each iteration
        }

        // Check if the reversed number is the same as the original
        if (originalNum == reversedNum) {
            cout << originalNum << " is a palindrome." << endl;
        } else {
            cout << originalNum << " is not a palindrome." << endl;
        }
        cout << endl;
        return 0;
    }

    //Question 6a. Function to check if a number is positive or negative and even or odd
    void positiveOddEven() {
        int num; // Input number

        cout << "----------------------------------------" << endl;
        cout << "  Positive/Negative and Even/Odd Checker" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter a number: ";
        cin >> num;
         cout <<num <<" is a ";

        // Check if the number is positive or negative
        if (num > 0) {
            cout << "Positive ";
        } else if (num < 0) {
            cout << "Negative ";
        } else {
            cout << "Zero ";
        }

        // Check if the number is even or odd
        if (num % 2 == 0) {
            cout << "Even Number" << endl;
        } else {
            cout << "Odd Number" << endl;
        }
        cout << endl;
    }
};

int main() {
    U22CS1102 answers; // Create an instance of the class

    // Question 2
    answers.check();

    // Question 2b
    answers.sumArr();

    // Question 3
    answers.bubbleSort();

    // Question 3b
    answers.sumAverage();

    // Question 4a
    answers.findLength();

    // Question 4b
    cout << "----------------------------------------" << endl;

    cout << "       Linear Search Algorithm         " << endl;

     cout << "     {1, 2, 3, 4, 0, 9, 8, 7, 6}         " << endl;
    
    cout << "----------------------------------------" << endl;
     int arr[] = {1, 2, 3, 4, 0, 9, 8, 7, 6};
     int n = sizeof(arr) / sizeof(arr[0]);
     int target;
      cout << "Enter the target element to search: ";
      cin >> target;
        int result = answers.linearSearch(arr, n, target);
          if (result != -1) {
            cout << "Target element found at index " << result << endl;
        }  else {
              cout << "Target element not found in the array" << endl;
      }
     cout << endl;

   // Question 5a
    answers.usingPointers();

   // Question 5b
    answers.palindrome();

   // Question 6a
    cout << "----------------------------------------" << endl;
    cout << "         Student Information System     " << endl;
    cout << "----------------------------------------" << endl;
    Student student1, student2;
    cout << "Enter name of student 1: ";
    cin >> student1.name;
    cout << "Enter marks of student 1: ";
    cin >> student1.marks;
    cout << "Enter age of student 1: ";
    cin >> student1.age;
    cout << "Enter name of student 2: ";
    cin >> student2.name;
    cout << "Enter marks of student 2: ";
    cin >> student2.marks;
    cout << "Enter age of student 2: ";
    cin >> student2.age;
    cout << endl;
    cout << "Information of Student 1:" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Marks: " << student1.marks << endl;
    cout << "Age: " << student1.age << endl;
    cout << endl;
    cout << "Information of Student 2:" << endl;
    cout << "Name: " << student2.name << endl;
    cout << "Marks: " << student2.marks << endl;
    cout << "Age: " << student2.age << endl;
    cout << endl;
    float averageMarks = (student1.marks + student2.marks) / 2.0;
    cout << "Average Marks: " << averageMarks << endl;
    cout << endl;

    // Question 6b
    answers.positiveOddEven();

return 0;

//  Written by Eseoghene Christine Otuaga

}