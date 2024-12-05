    #include <iostream>
    #include <vector>

    using namespace std;
    class Course {
    private:
        string title;
    public:
        Course(string title):title(title){}
         friend ostream& operator<<(ostream& out, const Course course){
           out<< course.title;
        }
    };
    class Student {
    private:
        string name;
        vector<Course*> courseList ;
    public:
        Student(string name,vector<Course*> courseList):name(name),courseList(courseList) {}
        void showCourse() {
            cout<<"Course List for Student Name: "<< name<<endl;
            for(Course* crs : courseList)
                cout<< *crs<< endl;
        }
    };

    class IBird{
      public:
          virtual void fly()= 0 ;
    };
    class Eagle:public IBird {
     public:
         void fly() {cout<<"Eage fly..."<<endl; }
    };

    class Penguin {};


      void fly(IBird *bird){
         bird->fly() ;
      }


    int main()
    {

      vector<Course*> courseList ;
      courseList.push_back(new Course("Data Base")) ;
      courseList.push_back(new Course("OS"));
      courseList.push_back(new Course("Advanced Programming"));
      courseList.push_back(new Course("Algorithm Design"));
      Student st("Ali", courseList);
      st.showCourse();


        //fly(new Eagle());
    }
