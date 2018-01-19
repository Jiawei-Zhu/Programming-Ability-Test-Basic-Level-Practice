#include<iostream>
#include<string>
using namespace std;
struct stu
{
	string name;
	string num;
	int score;
};
int max(stu *p,int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i].score > max)
			max = p[i].score;
	}
	return max;
}
int min(stu *p, int n)
{
	int min = 100;
	for (int i = 0; i < n; i++)
	{
		if (p[i].score < min)
			min = p[i].score;
	}
	return min;
}
int main()
{
	int n,ma,mi;
	cin >> n;
	stu *p = new stu[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].name;
		cin >> p[i].num;
		cin >> p[i].score;
	}
	for (int i = 0; i < n; i++)
	{
		if (p[i].score == max(p, n))
			ma = i;
		if (p[i].score == min(p, n))
			mi = i;
	}
	cout << p[ma].name << " " << p[ma].num<<endl;
	cout << p[mi].name << " " << p[mi].num;

	delete[]p;
	return 0;
}