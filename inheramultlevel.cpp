#include<iostream> 
#include<conio.h> 
using namespace std;
class student  
{ 
      protected :   
      char name[15];  
        int roll;   
         public:    
         void get();
             void disp(); 
              }; 
              class mark: public student  
              {
        protected :  
             int m,e;  
               public: 
            void get(); 
            void disp();  
            }; 
            class result: public mark  
            { 
                  private :  
                  int t;   
                   public:    
                   void get();   
                    void disp(); 
                     }; 
                     void student::get() 
                      { 
                          cout<<"\n Enter name of the student : \t";   
                           cin>>name;  
                             cout<<"\n Enter roll number : \t";  
                               cin>>roll;  
                               } 
                               void student::disp() 
                                { 
                                    cout<< name <<" \t "<< roll <<" \t ";
                                    } 
                                    void mark::get() 
                                     { 
                                         student::get(); 
                                         cout<<"\n Mark in English in 50 : \t ";  
                                           cin>>e;  
                                             cout<<"\n Mark in Maths in 50 : \t ";    
                                             cin>>m;  
                                             }
                                              void mark::disp() 
                                               { 
                                                   student::disp(); 
                                                   cout << e << " \t " << m << " \t " ; 
                                           }
                         void result::get() 
                          {
                       mark::get();   
                        t=e + m;  
                       } 
                       void result::disp()
                         {
                         mark::disp(); 
                        if (t >= 36)  
                          cout<<"PASSED \n"; 
                             else    cout<<"FAILED \n"; 
                             }
               main() 
                { 
                      int i,n; 
                       result r[5]; 
                        cout<<"How many students :";  
                        cin>>n;
                          for(i=0;i<n;i++)   
                           r[i].get(); 
                       cout<<"\n\nName\tRoll\tEnglish\tMaths\tResult\n---------------------------------------\n"; 
                for(i=0;i<n;i++)  
                r[i].disp(); 
                   getch(); 
                    } 
