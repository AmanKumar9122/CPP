#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }  
};

class Test : public Student{
    protected:
        float maths, physics;
        public:
            void set_marks(float m1, float m2){
                maths = m1;
                physics = m2;
            }
};

class Sports: public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

};

class Result : public Test, public Sports{
    public:
        void display(void){
        	float total;
            total = maths + physics + score;
            cout<< "Your total score is: "<<total<<endl;
        }
};
int main(){
    Result harry;
    harry.set_number(42);
    harry.set_marks(78.9, 99.5);
    harry.set_score(9);
    harry.display();
    return 0;
}

