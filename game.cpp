#include<iostream>
    #include <cstdlib> //srand(),rand()
    #include<ctime>   //time()
    
    using namespace std;
    
    int grid(char m1, char m2, char m3, char m4, char m5, char m6, char m7, char m8, char m9)
    {
         cout<< endl << endl;
         
        for(int i=1; i<=11; i++)
        {
           if(i==4 || i==8)
           {
               cout<<"\t\t -------+-------+------"<<endl;
           }
           else if(i==2)
           {
                cout<<"\t\t    "<<m1<<"\t|   "<<m2<<"   |   "<<m3<<endl;
           }
           else if(i==6)
           {
                cout<<"\t\t    "<<m4<<"\t|   "<<m5<<"   |   "<<m6<<endl;
           }
           else if(i==10)
           {
                cout<<"\t\t    "<<m7<<"\t|   "<<m8<<"   |   "<<m9<<endl;
           }
           else
           {
                cout<<"\t\t\t|\t|"<<endl;
           }
        }
        
        return 0;
    }
    
    int compDec(int u_row, int u_col)
    {
        int c_row, c_col;
        
        
            srand(time(0));
            
            bool valid_move = false;
            
            do
            {
                
                c_row = (rand() % 3) + 1;
                c_col = (rand() % 3) + 1;
            
                if(u_row != c_row && u_col != c_col)
                {
                  
                   if(c_row==1)
                   {
                        if(c_col==1)
                       {
                           return 0;
                       }
                       else if(c_col==2)
                       {
                           return 1;
                       }
                       else if(c_col==3)
                       {
                           return 2;
                       }
                       
                   }
                   else if(c_row==2)
                   {
                        if(c_col==1)
                       {
                           return 3;
                       }
                       else if(c_col==2)
                       {
                           return 4;
                       }
                       else if(c_col==3)
                       {
                           return 5;
                       }
    
                   }
                   else if(c_row==3)
                   {
                        if(c_col==1)
                       {
                           return 6;
                       }
                       else if(c_col==2)
                       {
                           return 7;
                       }
                       else if(c_col==3)
                       {
                           return 8;
                       }
                   
                   }
    
                   valid_move = true;
                }
               
               
            }while(!valid_move);
    
            return -1;
            
    }
    
    int main()
    {
        char m1=' ', m2=' ', m3=' ', m4=' ', m5=' ', m6=' ', m7=' ', m8=' ', m9=' ';
        int u_row, u_col, index;
        
       
       while( !((m1=='X' && m4=='X' && m7=='X')||(m1=='X' && m2=='X' && m3=='X')||(m3=='X' && m6=='X' && m9=='X')||(m7=='X' && m8=='X' && m9=='X')||(m4=='X' && m5=='X' && m6=='X')||(m2=='X' && m5=='X' && m8=='X')||(m1=='X' && m5=='X' && m9=='X')||(m3=='X' && m5=='X' && m7=='X')||(m1=='O' && m4=='O' && m7=='O')||(m1=='O' && m2=='O' && m3=='O')||(m3=='O' && m6=='O' && m9=='O')||(m7=='O' && m8=='O' && m9=='O')||(m4=='O' && m5=='O' && m6=='O')||(m2=='O' && m5=='O' && m8=='O')||(m1=='O' && m5=='O' && m9=='O')||(m3=='O' && m5=='O' && m7=='O'))) 
       {
           cout<<"Enter Row: ";
           cin >> u_row;
           
           cout<<"Enter Column: ";
           cin >> u_col;
           
           if(u_row==1)
           {
                if(u_col==1)
               {
                   m1 = 'X';
               }
               else if(u_col==2)
               {
                   m2 = 'X';
               }
               else if(u_col==3)
               {
                   m3 = 'X';
               }
               else
               {
                   cout<<endl<<"INVALID DATA"<<endl<<"Enter a Number between 1-3"<<endl;
               }
               
           }
           else if(u_row==2)
           {
                if(u_col==1)
               {
                   m4 = 'X';
               }
               else if(u_col==2)
               {
                   m5 = 'X';
               }
               else if(u_col==3)
               {
                   m6 = 'X';
               }
               else
               {
                   cout<<endl<<"INVALID DATA"<<endl<<"Enter a Number between 1-3"<<endl;
               }
           }
           else if(u_row==3)
           {
                if(u_col==1)
               {
                   m7 = 'X';
               }
               else if(u_col==2)
               {
                   m8 = 'X';
               }
               else if(u_col==3)
               {
                   m9 = 'X';
               }
               else
               {
                   cout<<endl<<"INVALID DATA"<<endl<<"Enter a Number between 1-3"<<endl;
               }
               
           }
           else
           {
               cout<<endl<<"INVALID DATA"<<endl<<"Enter a Number between 1-3"<<endl;
           }
           
            cout<<endl<<"USERS TURN:";
            grid(m1, m2, m3, m4, m5, m6, m7, m8, m9);
            
            index = compDec( u_row, u_col);
            
            if(index == 0)
            {
                m1 = 'O';
            }
            else if(index == 1)
            {
                m2 = 'O';
            }
           else if(index == 2)
            {
                m3 = 'O';
            }
            else if(index == 3)
            {
                m4 = 'O';
            }
            else if(index == 4)
            {
                m5 = 'O';
            }
            else if(index == 5)
            {
                m6 = 'O';
            }
            else if(index == 6)
            {
                m7 = 'O';
            }
            else if(index == 7)
            {
                m8 = 'O';
            }
            else if(index == 8)
            {
                m9 = 'O';
            }
            
            
            cout<<endl<<"COMPUTERS TURN:";
            grid(m1, m2, m3, m4, m5, m6, m7, m8, m9);
       }
       
       if((m1=='X' && m4=='X' && m7=='X')||(m1=='X' && m2=='X' && m3=='X')||(m3=='X' && m6=='X' && m9=='X')||(m7=='X' && m8=='X' && m9=='X')||(m4=='X' && m5=='X' && m6=='X')||(m2=='X' && m5=='X' && m8=='X')||(m1=='X' && m5=='X' && m9=='X')||(m3=='X' && m5=='X' && m7=='X'))
       {
           cout<<endl<<"USER WON";
       }
       else
       {
           cout<<endl<<"COMPUTER WON";
       }
       
    }