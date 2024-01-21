#include<iostream>
#include<ctime>
#include<cstring>
#include<windows.h>
using namespace std;
int k=0;
int call();
void display();
int main()
{
	system("color b");
    char a;
    cout<<endl<<endl;
    
	cout<<"\tWWWWWWWW                           WWWWWWWW          OOOOOOOOO          RRRRRRRRRRRRRRRRR        DDDDDDDDDDDDD           \n";
	cout<<"\tW::::::W                           W::::::W        OO:::::::::OO        R::::::::::::::::R       D::::::::::::DDD      \n" ; 
	cout<<"\tW::::::W                           W::::::W      OO:::::::::::::OO      R::::::RRRRRR:::::R      D:::::::::::::::DD    \n";
	cout<<"\tW::::::W                           W::::::W     O:::::::OOO:::::::O     RR:::::R     R:::::R     DDD:::::DDDDD:::::D     \n";
	cout<<"\t W:::::W           WWWWW           W:::::W      O::::::O   O::::::O       R::::R     R:::::R       D:::::D    D:::::D    \n";
	cout<<"\t  W:::::W         W:::::W         W:::::W       O:::::O     O:::::O       R::::R     R:::::R       D:::::D     D:::::D   \n";
	cout<<"\t   W:::::W       W:::::::W       W:::::W        O:::::O     O:::::O       R::::RRRRRR:::::R        D:::::D     D:::::D   \n";
	cout<<"\t    W:::::W     W:::::::::W     W:::::W         O:::::O     O:::::O       R:::::::::::::RR         D:::::D     D:::::D   \n" ;
	cout<<"\t     W:::::W   W:::::W:::::W   W:::::W          O:::::O     O:::::O       R::::RRRRRR:::::R        D:::::D     D:::::D   \n";
	cout<<"\t      W:::::W W:::::W W:::::W W:::::W           O:::::O     O:::::O       R::::R     R:::::R       D:::::D     D:::::D   \n";
	cout<<"\t       W:::::W:::::W   W:::::W:::::W            O:::::O     O:::::O       R::::R     R:::::R       D:::::D     D:::::D   \n";
	cout<<"\t        W:::::::::W     W:::::::::W             O::::::O   O::::::O       R::::R     R:::::R       D:::::D    D:::::D    \n";
	cout<<"\t         W:::::::W       W:::::::W              O:::::::OOO:::::::O     RR:::::R     R:::::R     DDD:::::DDDDD:::::D     \n";
	cout<<"\t          W:::::W         W:::::W                OO:::::::::::::OO      R::::::R     R:::::R     D:::::::::::::::DD      \n";
	cout<<"\t           W:::W           W:::W                   OO:::::::::OO        R::::::R     R:::::R     D::::::::::::DDD        \n";
	cout<<"\t            WWW             WWW                      OOOOOOOOO          RRRRRRRR     RRRRRRR     DDDDDDDDDDDDD           \n\n";
                                                                               
                                                                               
	cout<<"\t MMMMMMMM               MMMMMMMM                   AAA                   ZZZZZZZZZZZZZZZZZZZ     EEEEEEEEEEEEEEEEEEEEEE \n";
	cout<<"\t M:::::::M             M:::::::M                  A:::A                  Z:::::::::::::::::Z     E::::::::::::::::::::E \n";
	cout<<"\t M::::::::M           M::::::::M                 A:::::A                 Z:::::::::::::::::Z     E::::::::::::::::::::E \n";
	cout<<"\t M:::::::::M         M:::::::::M                A:::::::A                Z:::ZZZZZZZZ:::::Z      EE::::::EEEEEEEEE::::E \n";
	cout<<"\t M::::::::::M       M::::::::::M               A:::::::::A               ZZZZZ     Z:::::Z         E:::::E       EEEEEE \n";
	cout<<"\t M:::::::::::M     M:::::::::::M              A:::::A:::::A                      Z:::::Z           E:::::E              \n";
	cout<<"\t M:::::::M::::M   M::::M:::::::M             A:::::A A:::::A                    Z:::::Z            E::::::EEEEEEEEEE    \n";
	cout<<"\t M::::::M M::::M M::::M M::::::M            A:::::A   A:::::A                  Z:::::Z             E:::::::::::::::E    \n";
	cout<<"\t M::::::M  M::::M::::M  M::::::M           A:::::A     A:::::A                Z:::::Z              E:::::::::::::::E    \n";
	cout<<"\t M::::::M   M:::::::M   M::::::M          A:::::AAAAAAAAA:::::A              Z:::::Z               E::::::EEEEEEEEEE    \n";
	cout<<"\t M::::::M    M:::::M    M::::::M         A:::::::::::::::::::::A            Z:::::Z                E:::::E              \n";
	cout<<"\t M::::::M     MMMMM     M::::::M        A:::::AAAAAAAAAAAAA:::::A        ZZZ:::::Z     ZZZZZ       E:::::E       EEEEEE \n";
	cout<<"\t M::::::M               M::::::M       A:::::A             A:::::A       Z::::::ZZZZZZZZ:::Z     EE::::::EEEEEEEE:::::E \n";
	cout<<"\t M::::::M               M::::::M      A:::::A               A:::::A      Z:::::::::::::::::Z     E::::::::::::::::::::E \n";
	cout<<"\t M::::::M               M::::::M     A:::::A                 A:::::A     Z:::::::::::::::::Z     E::::::::::::::::::::E \n";
	cout<<"\t MMMMMMMM               MMMMMMMM    AAAAAAA                   AAAAAAA    ZZZZZZZZZZZZZZZZZZZ     EEEEEEEEEEEEEEEEEEEEEE \n";	
	cout << "            " << endl;
	
	system("pause");
	system("cls");
	system("color a");
	string Name;
	cout<<"Enter your name  :       ";
	cin>>Name;
	system("cls");
	   
	char n;
    getline(cin,Name);
    cout<<endl;
    int score,count=0;
    do
    {
     	system("cls");
     	display(); 	
        score=score+call();
        cout<<"Do you want to play again y/n   :   ";
        cin>>n;
        k=k+1;
        count=count+1;
        cout<<endl;
    }while(n!='n');
    cout<<Name<<"  ";
    cout<<"your score is   :   "<<score<<" out of "<<count<<endl;
    cout<<"\n\n\t***************************************\n\n"<<endl;
}

//puzzle creating
int call()
{
	srand(time(0));
	string output,name[15];

    char hint;
    string a[15]={"elephant","pizza","earth",
					"orange","jasmine","football","laptop","canada"
							,"truck","happy","palmtree","library","maldives","physics","pizza"};
    char arr[10][10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            char c;
            int r;
            r= rand() % 26;            // generate a random number
            c= 'a' + r; 	           // Convert to a character from a-z
            arr[i][j]=c;
        }
    }
    int index=rand()%15;
    output=a[index];
    
    if(a[index].length()%2==0)
    {
        // for even string length case
            int row=rand()%10;
            int col=rand()%3;
            for(int i=0;a[index][i]!='\0';i++,col++)
            {
                arr[row][col]=a[index][i];
            }
        
    }
    else
    {
        // for odd string length case
            int row=rand()%3;
            int col=rand()%10;
            for(int i=0;a[index][i]!='\0';i++,row++)
            {
                arr[row][col]=a[index][i];
            }
    }
    
    
     for(int i=0;i<10;i++)
    {
    	cout<<"                ";
        for(int j=0;j<10;j++)
        {
          cout<<" "<<arr[i][j];
          Sleep(20);
        }
        cout<<endl;
    }
    
    string guess;
	cout<<"\nPress 1 to find the word	"<<endl;
	cout<<"Press 2 for see the hints and then find the word	"<<endl;
	label1:
	cout<<"Enter input		:	";
	cin>>hint;
	cout<<endl;
	if(hint=='1')
	{
		cout<<"\nEnter the word you have found         :       ";
    	cin>>guess;
    	cout<<endl;

	}
       else if(hint=='2')
       {
       	cout<<"Hints : "<< endl;
       cout<<"This word consists of "<< output.size() << " letters.";
    
       cout<<endl;
       
       	if(output=="elephant")
       		cout<<"It is an animal";
		if(output=="pizza")
			cout<<"It is a fast food";   
		if(output=="orange")
			cout<<"It is a fruit ";  
		if(output=="earth")
			cout<<"It is a planet ";
		if(output=="jasmine")
			cout<<"It is a flower ";
		if(output=="football")
			cout<<"It is a sport ";
		if(output=="laptop")
			cout<<"It is an electronic device ";
		if(output=="canada")
			cout<<"It is a country ";
		if(output=="truck")
			cout<<"It is a vehicle ";
		if(output=="happy")
			cout<<"It is a feeling ";
		if(output=="palmtree")
			cout<<"It is a tree ";
		if(output=="colombo")
			cout<<"It is a district of srilanka ";
		if(output=="maldives")
			cout<<"A country in South Asia ";
		if(output=="physics")
			cout<<"One of the AL subject ";
		if(output=="library")
			cout<<"connection with studying";	
		cout<<endl<<endl;
		cout<<"Enter word you find         :       ";
    	cin>>guess;
    	cout<<endl;	 
       }
       else
       {
    	cout<<"Invalid input	";
    	goto label1;
		}
    if(guess==a[index])
    {
        cout<<"Congratulations ! You have found correct word  "<<endl;
        return 1;
    }
    else
    {
        cout<<"Sorry ! Your word is incorrect. The correct word is "<<a[index]<<endl;
        return 0;
    }
}
void display()
{
	cout<<"***************"<<"Hi! Welcome to Word Maze******************\n\n"<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"||	You have to find the word in this puzzle                           ||"<<endl;
    cout<<"||	For example word in this puzzle can be (library,elephant etc )      ||"<<endl;
    cout<<"||	You can also take help for hint from the system                     ||"<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
}
