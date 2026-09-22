
#include<iostream>
#include<cstdlib>
using namespace std;
#define MAX_SIZE 5
template<class T>
class stack
{
        T a[MAX_SIZE];
        public:

        int TOP=-1;
        void display(){
                for(int i=0;i<=TOP;i++)
                        cout<<a[i]<<" ";
                cout<<endl;
        }
        void push(T A){
                if(TOP>=4){
                        cout<<"stack is overflow\n";
                        return;
                }
                TOP++;
                a[TOP]=A;
        }

        void pop(){
                if(TOP<=-1){
                        cout<<"stack is underflow\n";
                        return;
                }
                TOP--;
        }
};


stack<int>s1;
stack<char>s2;
stack<float>s3;
stack<double>s4;
stack<string>s5;
int main()
{
        int op,p,q,c1=0,c2=0,c3=0,c4=0,c5=0;
        string s;
        while(1){
                cout<<"/*******************main menu********************/"<<endl;
                cout<<"Enter your choice\n";
                cout<<"1) integer \n";
                cout<<"2) char\n";
                cout<<"3) float\n";
                cout<<"4) double\n";
                cout<<"5) string\n";
                cout<<"6) exit\n";
                cin>>op;
                switch(op)
                {
                        case 1 :
                                if(c1!=0)       {
k:
                                        cout<<"1) continue with old stack\n";
                                        cout<<"2) creat new stack\n";
                                        cin>>q;
                                        if(q!=1){
                                                if(q==2)
                                                        s1.TOP=-1;
                                                else{
                                                        cout<<"Invalid choice\n";
                                                        goto k;
                                                }
                                        }
                                }
                                c1++;
                                while(1)
                                {
                                        cout<<"Enter your choise\n";
                                        cout<<"1) push\n";
                                        cout<<"2) pop\n";
                                        cout<<"3) dispaly\n";
                                        cout<<"4) main\n";
                                        cin>>p;
                                        if(p!=1 && p!=2 && p!=3 && p!=4){
                                                printf("Invalid choice\n");
                                                continue;
                                        }
                                        switch(p)
                                        {
                                                case 1:int n;
                                                       cout<<"Enter a integer: "<<" ";
                                                       cin>>n;
                                                       s1.push(n);break;
                                                case 2:s1.pop();break;
                                                case 3:s1.display();break;
                                                default: break;
                                        }
                                        if(p==4)
                                                break;
                                }
                                system("clear");
                                break;
                        case 2 :
                                if(c2!=0){
a:
                                        cout<<"1) continue with old stack\n";
                                        cout<<"2) creat new stack\n";
                                        cin>>q;
                                        if(q!=1){
                                                if(q==2)
                                                        s1.TOP=-1;
                                                else{
                                                        cout<<"Invalid choice\n";
                                                        goto a;
                                                }
                                        }
                                }
                                c2++;
                                while(1)
                                {
                                        cout<<"Enter your choise\n";
                                        cout<<"1) push\n";
                                        cout<<"2) pop\n";
                                        cout<<"3) dispaly\n";
                                        cout<<"4) main\n";
                                        cin>>p;
                                        if(p!=1 && p!=2 && p!=3 && p!=4){
                                                printf("Invalid choice\n");
                                                continue;
                                        }
                                        switch(p)
                                        {
                                                case 1:char c;
                                                       cout<<"Enter a char: "<<" ";
                                                       cin>>c;
                                                       s2.push(c);break;
                                                case 2:s2.pop();break;
                                                case 3:s2.display();break;
                                                case 4:break;
                                        }
                                        if(p==4)
                                                break;
                                }
                                system("clear");
                                break;
                        case 3 :
                                if(c3!=0){
b:
                                        cout<<"1) continue with old stack\n";
                                        cout<<"2) creat new stack\n";
                                        cin>>q;
                                        if(q!=1){
                                                if(q==2)
                                                        s1.TOP=-1;
                                                else{
                                                        cout<<"Invalid choice\n";
                                                        goto b;
                                                }
                                        }
                                }
                                c3++;
                                while(1)
                                {

                                        cout<<"Enter your choise\n";
                                        cout<<"1) push\n";
                                        cout<<"2) pop\n";
                                        cout<<"3) dispaly\n";
                                        cout<<"4) main\n";
                                        cin>>p;
                                        if(p!=1 && p!=2 && p!=3 && p!=4){
                                                printf("Invalid choice\n");
                                                continue;
                                        }
                                        switch(p)
                                        {
                                                case 1:float f;
                                                       cout<<"Enter a float: "<<" ";
                                                       cin>>f;
                                                       s3.push(f);break;
                                                case 2:s3.pop();break;
                                                case 3:s3.display();break;
                                                case 4:break;
                                        }
                                        if(p==4)
                                                break;
                                }
                                system("clear");
                                break;
                        case 4 :
                                if(c4!=0){
c:
                                        cout<<"1) continue with old stack\n";
                                        cout<<"2) creat new stack\n";
                                        cin>>q;
                                        if(q!=1){
                                                if(q==2)
                                                        s1.TOP=-1;
                                                else{
                                                        cout<<"Invalid choice\n";
                                                        goto c;
                                                }
                                        }
                                }
                                c4++;
                                while(1)
                                {
                                        cout<<"Enter your choise\n";
                                        cout<<"1) push\n";
                                        cout<<"2) pop\n";
                                        cout<<"3) dispaly\n";
                                        cout<<"4) main\n";
                                        cin>>p;
                                        if(p!=1 && p!=2 && p!=3 && p!=4){
                                                printf("Invalid choice\n");
                                                continue;
                                        }
                                        switch(p)
                                        {
                                                case 1:double d;
                                                       cout<<"Enter a double: "<<" ";
                                                       cin>>d;
                                                       s4.push(d);break;
                                                case 2:s4.pop();break;
                                                case 3:s4.display();break;
                                                case 4:break;
                                        }
                                        if(p==4)
                                                break;
                                }
                                system("clear");
                                break;
                        case 5 :
                                if(c5!=0){
l:
                                        cout<<"1) continue with old stack\n";
                                        cout<<"2) creat new stack\n";
                                        cin>>q;
                                        if(q!=1){
                                                if(q==2)
                                                        s1.TOP=-1;
                                                else{
                                                        cout<<"Invalid choice\n";
                                                        goto l;
                                                }
                                        }
                                }
                                c5++;
                                while(1)
                                {
                                        cout<<"Enter your choise\n";
                                        cout<<"1) push\n";
                                        cout<<"2) pop\n";
                                        cout<<"3) dispaly\n";
                                        cout<<"4) main\n";
                                        cin>>p;
                                        if(p!=1 && p!=2 && p!=3 && p!=4){
                                                printf("Invalid choice\n");
                                                continue;
                                        }
                                        switch(p)
                                        {
                                                case 1:
                                                        cout<<"Enter a string: "<<" ";
                                                        cin>>s;
                                                        s5.push(s);break;
                                                case 2:s5.pop();break;
                                                case 3:s5.display();break;
                                                case 4:break;
                                        }
                                        if(p==4)
                                                break;
                                }
                                system("clear");
                                break;
                        case 6 :exit(0);
                }
        }
}
