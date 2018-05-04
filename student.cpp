nclude "student.h"

student::student()
{
  first = " ";
    last = " ";
      studentGrade = 0;
      }

      void student::setName(string first1, string last1)
      {
      first = first1;
      last = last1;
      }

      string student::fullName()
      {
      string name = first;
      name.append(" ");
      name.append(last);
      return name;
      }

      double student::addGrade(double percent)
      {
       list.push_back(percent);
       // list.pop_back();
       }

       double student::getScore()
       {
        list.pop_back();

        //  double average = 0;
          double studentGrade = 0;
            double sum = 0;
              for(int i =0; i < list.size(); i++)
                {
                    sum+=list[i];
                      }
                        studentGrade = sum/list.size();
                          return studentGrade;
                          }

