#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number of processes: ";
cin>>n;

int arrival[n];
int execution[n];

cout<<"\nEnter Arrival Time  --> \n";
for(int i=0;i<n;i++){
cout<<"Of P["<<i<<"] : ";
cin>>arrival[i];
}
cout<<"\nEnter Execution Time  --> \n";
for(int i=0;i<n;i++){
cout<<"Of P["<<i<<"] : ";
cin>>execution[i];
}

float waiting_time[n];
waiting_time[0]=0;

float awt=0; //average waiting time
int cet=0; //cumulative execution time

for(int i=1;i<n;i++){
        cet=0;
        for(int j=0;j<i;j++){
            cet+=execution[j];
        }
waiting_time[i]=cet-arrival[i];
awt = awt + waiting_time[i];
}

awt  = awt/n;

cout<<"\nPROCESS    ARRIVAL TIME     EXECUTION TIME      WAITING TIME\n";
cout<<"---------------------------------------------------------------\n";

for(int i=0;i<n;i++){
cout<<"P["<<i<<"]:\t\t"<<arrival[i]<<"\t\t"<<execution[i]<<"\t\t"<<waiting_time[i]<<endl;
}

cout<<"\nAverage Waiting Time: "<<awt<<endl;
}
