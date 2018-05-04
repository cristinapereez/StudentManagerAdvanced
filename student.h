#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <vector>
#include <string>

using namespace std;

class student
{
private:
string first;
string last;
vector<double> list;
double studentGrade;

public:
student();
/*student()
{
  first = " ";
    last = " ";
      studentGrade = 0;
      } */
      void setName(string,string);
      string fullName();
      double addGrade(double);
      double getScore();
      };




      #endif

