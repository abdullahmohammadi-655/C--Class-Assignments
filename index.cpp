#include <iostream>
using namespace std;

struct Student {
       int id;
       string name;
       string level;
       string gender;
};

enum Level {
      Primary,  // 0
      Intermediate, // 1
      Advance // 2
};

enum Gender {
      Male, // 0
      Female  // 1
};


enum StudentStatus {
       Active,
       DeActive
};

int main() {

// pre-defined data type , string , int , bool 
// use-defined data type: enum
Gender g = Male;
Student s1;
s1.id = 1;
s1.name = "Ali";
s1.level = Primary;
s1.gender = Male;


    return 0;
}