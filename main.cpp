#include <iostream>
#include "Company.h"
using namespace std;

int main() {

    double s1[] = { 100, 200, 300, 400};
    Company c1 ( "HONDA", s1);

    cout << "Name of company c1= " << c1.getName();

    for ( int i= 0; i<4; i++) {
        cout << "\n" << c1.getSale( i);      
    }

    Company c[3];
    c[0].setName( "FORD");
    c[1].setName( "VW");
    c[2].setName( "AUDI");

    for ( int i=0; i <3; i++) {
        cout <<"\n" << c[i].getName() ;
    }

    double s0[] = { 11, 21,31,41};
    c[1].setSales( s0);

    // print sales of c[0] company
    cout << "\n\n";
    for ( int i=0; i <4; i++) {
        cout <<"\n" << c[1].getSale( i) ;
    }
  //print the largest salesof c[1]
cout<<"\nThe largest sales of c[1] is"<<c[1].largestSale();
  
  

  Company c2;
  double s2[]={500,600,700,800};
  c2.setName("BMW");
  c2.setSales(s2);

  //----------
  for(int i=0;i<4;i++){
    cout<< "\n"<<c1.getSale(i);
  }

  double *salesArray;
  salesArray=c1.getSales();
  cout<<"\nTest the result";
  for(int i=0;i<4;i++){
    cout<<"\n"<<*salesArray++;
  }
    
  }