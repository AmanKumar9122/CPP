#include<iostream>
using namespace std;
class rectangle
{
	private:
		int x,y;
	public:
		int area(int x,int y)
		{
			cout<<x*y;
			return x*y;
		}
};
int main()
{
	rectangle r1;
	r1.area(2,3);
	return 0;
}
