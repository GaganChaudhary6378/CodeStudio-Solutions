
#include <bits/stdc++.h> 
int totalSalary(int basic, char grade) 
{   double hra,da,pf,allowance;
  hra=0.2*basic;
  da=0.5*basic;
  pf=0.11*basic;
   switch(grade) {
 case 'A':
   // code block
       allowance =1700;    
   break;
 case 'B':
   // code block
      allowance =1500;    
   break;
  case 'C':
   // code block
      allowance =1300;    
   break;
 default:
       allowance =1300;    
   }
  int totalSal=round(basic+hra+da+allowance-pf);
   return totalSal;
}