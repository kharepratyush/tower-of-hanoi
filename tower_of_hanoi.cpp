/*Code to show solution of Tower_Of_Hanoi*/

#include <iostream>
int n;
void prin(int a[],int b[],int c[],char c1,char c2,char c3)
{   int j,f,g=0;

    for(int i=0;i<n;i++)
     {     f=-1;
         if(a[i]==1)
         {      f=1;g=1;
                for(j=i+1;j>0;j--)
                std::cout<<'-';
         }
std::cout<<"\t\t";
if(b[i]==1)
         {      f=1;g=1;
                for(j=i+1;j>0;j--)
                std::cout<<'-';
         }
        std::cout<<"\t\t";
        if(c[i]==1)
         {      f=1;g=1;
                for(j=i+1;j>0;j--)
                std::cout<<'-';
         }
         if(f==1)std::cout<<"\n";
}//if(g==1)std::cout<"\n\n\n";
std::cout<<c1<<"\t\t"<<c2<<"\t\t"<<c3<<"\t\t"<<"\n\n";
}
void tower(int a,char from,char aux,char to, int a1[],int b1[],int c1[]){
    if(a==1){
       //std::cout<<"\t\tMove disc 1 from "<<from<<" to "<<to<<"\n";
       if(from=='A')
        a1[0]=0;
       else if(from=='B')
        b1[0]=0;
       else if(from=='C')
        c1[0]=0;
        if(to=='A')
        a1[0]=1;
       else if(to=='B')
        b1[0]=1;
       else if(to=='C')
        c1[0]=1;
        prin(a1,b1,c1,'A','B','C');

       return;
    }
    else{
       tower(a-1,from,to,aux,a1,b1,c1);
       //std::cout<<"\t\tMove disc "<<a<<" from "<<from<<" to "<<to<<"\n";
       if(from=='A')
        a1[a-1]=0;
       else if(from=='B')
        b1[a-1]=0;
       else if(from=='C')
        c1[a-1]=0;
        if(to=='A')
        a1[a-1]=1;
       else if(to=='B')
        b1[a-1]=1;
       else if(to=='C')
        c1[a-1]=1;
        prin(a1,b1,c1,'A','B','C');

       tower(a-1,aux,from,to,a1,b1,c1);
    }
}

int main(){
        int i;
     std::cout<<"\n\t\tTower of Hanoi\n";
     std::cout<<"\t\tEnter number of discs : ";
     std::cin>>n;
     int a1[n],b1[n],c1[n];
     for(i=0;i<n;i++)
     {
         a1[i]=1;
         b1[i]=-1;
         c1[i]=-1;
     }
     std::cout<<"\n\n";
      prin(a1,b1,c1,'A','B','C');
     tower(n,'A','B','C',a1,b1,c1);
     return 1;
}
