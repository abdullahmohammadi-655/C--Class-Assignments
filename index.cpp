
#include <iostream>
using namespace std;

enum Gender {
       Male, 
       Female
};



enum Level {
     Primary,
     Intermediate,
     Advance
};

enum StudentStatus {
      Active,
      Deactivate
};

struct Student {
     int id;
     string firstName;
     string lastName;
     Gender gender;
     Level level;
     StudentStatus status; 
};
int main(){
         Student s1;
         s1.id = 1;
         s1.firstName = "Ali";
         s1.lastName = "Alizada";
         s1.gender = Male;
         s1.level = Advance;
         s1.status = Active;
         if(s1.gender == Male){
            cout<<"Male"<<endl;
         }
      return 0;
}