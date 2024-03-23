#include<iostream>
using namespace std;
class student{
    int roll_no;
    public:
    void set_roll(int r){
        roll_no = r;
    }
};
class marks : virtual public student
{
    protected:
    float maths , physics;
    public:
    void set_marks(float m , float p){
        maths = m;
        physics = p;
    }
};
class pt : virtual public student
{
    protected:
    float pt_marks;
    public:
    void set_pt_marks(float p){
        pt_marks = p;
    }
};
class result : public marks , public pt
{
    float total;
    public:
    void total_marks(){
        total = maths+physics+pt_marks;
    }
    void print_result(){
        cout<<total;
    }
};
int main(){
    result r;
    r.set_roll(45);
    r.set_marks(99.3 , 99.9);
    r.set_pt_marks(89.0);
    r.total_marks();
    r.print_result();
}