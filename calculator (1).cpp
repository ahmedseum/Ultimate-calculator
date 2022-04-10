#include<bits/stdc++.h>
using namespace std;


//-----------------------------------------------------------------------------------------------
void level2()
{
    int answer;
    system("CLS");

    cout<<"Welcom to the next level"<<endl;

    do
    {
        cout<<" what is the answer "<<endl;
        cout<<" 2+2x2= ? "<<endl;
        cin>>answer;
                if(answer==6)
          {
           cout<<"Correct"<<endl;
          }
          else
          {
              cout<<"Wrong answer, Try again "<<endl;
              cout<<endl;
              cout<<endl;
              system("CLS");
          }
    }
    while(answer!=6);


}
//---------------------------------------------------------
void level3()
{
    int answer;
     system ("CLS");

    cout<<"Welcom to the next level"<<endl;

    do
    {
        cout<<" what is the answer after "<<endl;
        cout<<" 6 = 30 "<<endl;
        cout<<" 3 = 15 "<<endl;
        cout<<" 7 = 35 "<<endl;
        cout<<" 2 = ? "<<endl;
        cin>>answer;
                if(answer==10)
          {
            cout<<"Correct"<<endl;
          }
          else
          {
              cout<<"Wrong answer, Try again "<<endl;
              cout<<endl;
              cout<<endl;
              system("CLS");
          }
    }
    while(answer!=10);
}
//---------------------------------------------------------
void level4()
{
    int answer;
     system ("CLS");

    cout<<"Welcom to the next level"<<endl;

    do
    {
        cout<<" Write the answer "<<endl;
        cout<<" A + B = 60 "<<endl;
        cout<<" A - B = 40 "<<endl;
        cout<<" A / B = ? "<<endl;
        cin>>answer;
                if(answer==5)
          {
            cout<<"Correct "<<endl;
          }
          else
          {
              cout<<"Wrong answer, Try again "<<endl;
              cout<<endl;
              cout<<endl;
              system("CLS");
          }
    }
    while(answer!=5);
}
//---------------------------------------------------------
void level5()
{
    int answer;
     system ("CLS");

    cout<<"Welcom to the Final level"<<endl;

    do
    {
        cout<<" Write the answer "<<endl;
        cout<<" 32 = 25 "<<endl;
        cout<<" 47 = 18 "<<endl;
        cout<<" 23 = 52 "<<endl;
        cout<<" 74 = ? "<<endl;
        cin>>answer;
                if(answer==81)
          {
            cout<<"Correct "<<endl;

          }
          else
          {
              cout<<"Wrong answer, Try again "<<endl;
              cout<<endl;
              cout<<endl;
              system("CLS");
          }
    }
    while(answer!=81);
}

//-----------------------------------------------------------------------------------------------

int main()
{
    int co,number, game_number,ch,cp,m,dimention,answer1;
    double a,b,c,sum,sum1,i,j,k;
    char dp;
cout<<"                                           Details"<<endl;
cout<<"                                         ---------"<<endl;
cout<<"                        ________________________________________"<<endl;
cout<<"                       |                                        |"<<endl;
cout<<"                       |  Assignment name: Digital calculator.  |"<<endl;
cout<<"                       |     Code name :The Back-Bencher        |"<<endl;
cout<<"                       |              Created by:               |"<<endl;
cout<<"                       |                Group 4                 |"<<endl;
cout<<"                       |________________________________________|         "<<endl;
cout<<" "<<endl;
cout<<"Enter your choice"<<endl;
cout<<"1. Simple calculator."<<endl;
cout<<"2. Equation calculation."<<endl;
cout<<"3. vector calculation."<<endl;
cout<<"4. <Game>"<<endl;
cin>>co;
switch(co)
{
case 1:
    system("CLS");
        char ch;
    double a,b,sum;
    cout<<"Enter your euqation"<<endl;
    cin>>a>>ch>>b;
    switch (ch)
    {
    case '+':
    sum=a+b;
    cout<<"sum = "<<sum;
    break;
    case '-':
     sum=a-b;
    cout<<"Sum = "<<sum;
    break;
        case '*':
    sum=a*b;
    cout<<"sum = "<<sum;
    break;
    case '/':
     sum=a/b;
    cout<<"Sum = "<<sum;
    break;

    }

    break;
//----------------------------------------------------------------------------------------------
case 2:
    system("CLS");

    cout<<"Equation format ax^2+bx+c=0"<<endl;
    cout<<"Value of a= ";cin>>a;
    cout<<"\n Value of b= ";cin>>b;
    cout<<"\n Value of c= ";cin>>c;
    sum=(((-b)+(pow((pow(b,2)-4*a*c), .5 )))/(2*a));
    sum1=(((-b)-(pow((pow(b,2)-4*a*c), .5 )))/(2*a));
    cout<<"Sum <+>; X= "<<sum<<endl;
    cout<<"Sum <->; X= "<<sum1<<endl;


    break;
//----------------------------------------------------------------------------------------------
case 3:
    system("CLS");
    cout<<"Enter your dimention "<<endl;
    cin>>dimention;
switch(dimention)
{
    case 2:

    cout<<"Enter the value of i= ";cin>>i;
    cout<<"\nEnter the value of j= ";cin>>j;
    sum=pow((i*i+j*j),.5);
    cout<<"Magnetude of your 2 dimentional vector is "<<sum;
    break;

    case 3:
    cout<<"Enter the value of i= ";cin>>i;
    cout<<"\nEnter the value of j= ";cin>>j;
    cout<<"\nEnter the value of k= ";cin>>k;
    sum=pow((i*i+j*j+k*k),.5);
    cout<<"Magnetude of your 2 dimentional vector is "<<sum;
        break;
    default :
    cout <<"Wrong dimention";
}


    break;
//----------------------------------------------------------------------------------------------
case 4:
    system("CLS");
        cout<<"YYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNN"<<endl;
    cout<<"welcome to the game here you can play two typs of game"<<endl;
    cout<<"1. Guessing game"<<endl;
    cout<<"2. Math game"<<endl;
    cin>>m;
    switch (m)
    {
    case 1:
        {


        system("CLS");
    do

    {
            for(int i=0;i<6;i++){
            game_number=rand()%5 +1;
    }

        cout<<"Enter your number 1 to 5 "<<endl;
        cin>>number;
        system("CLS");
        if(game_number==number)
        {
            cout<<"you won "<<endl;
        }
        else
            {
                system("CLS");
            cout<<"Wrong number , Try again"<<endl;

        cout<<"The number was "<<game_number<<" Your number was "<<number<<endl;
        cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"\n";
        cout<<"\n";
        cout<<"\n";


        }


    }
    while(game_number!=number);
 break;
        }

    case 2:
    system("CLS");
    cout <<"Welcome to the math game"<<endl;
    cout<<endl;
    cout<<"This game has total 5 level"<<endl;
    cout<<endl;
    cout<<"                                  Press"<<endl;
    cout<<"                                  S -> start the game"<<endl;
    cout<<"                                  E ->Exit"<<endl;

    cin>>dp;
    switch(dp)
    {
case ('s'):
system("CLS");
    cout<<"Level : 1"<<endl;
    do
    {
        cout<<"Enter the number after "<<endl;
        cout<<" 4 , 8, 16 ?"<<endl;
        cin>>answer1;
        if(answer1==32)
          {
              cout<<"Great"<<endl;
             level2();
          }
          else
          {
              cout<<"Wrong answer, Try again "<<endl;
              cout<<endl;
              cout<<endl;
              system("CLS");
          }
    }
    while(answer1!=32);
    level3();
    level4();
    level5();

        break;
//-----------------------------------------------------
        case ('S'):
system("CLS");
{
            cout<<"Enter the number after "<<endl;
        cout<<" 4 , 8, 16 ?"<<endl;

    cout<<"Level : 1"<<endl;
   {

    do
    {

        cin>>answer1;
        if(answer1==32)
          {
              cout<<"Great"<<endl;
             level2();
          }
          else
          {
              cout<<"Wrong answer, Try again "<<endl;
              cout<<endl;
              cout<<endl;
          }
    }
    while(answer1!=32);
   }
    level3();
    level4();
    level5();
        break;
}
//----------------------------------------------------------
        case ('e'):
        cout<<"Exiting........"<<endl;
        break;
        case ('E'):
        cout<<"Exiting........"<<endl;
        break;
    }



    }


    break;

}


    return 0;
}
