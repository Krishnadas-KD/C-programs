union Department 
{ 
	intdeptid;
	char name[20]; 
 
intbasic_pay 
float total_salary 
}; 
int i , n, total, da,hra;                 
union Department d[20];  
cout<<" \n Enter the Number of employees : " ;  
cin>> n ;                 
for (i =0; i<n; i++)                     
{  
	cout<<"\nEnter name of  "<<i+1<<" employee : " ; 
	cin>>d[i].name;                 
	cout<<"\nEnterdeptid  "<<i+1<<" employee : " ; 
	cin>>d[i].deptid;                          
	cout<<"\nEnter basic pay of  "<<i+1<<" employee : " ;  
	cin>>d[i].basic_pay; 
	da=basic_pay*(50/100) hra=basic_pay*(10/100)                
	total = basic_pay+da+hra; 
	cout<<"\ntotal salary " <<i+1<<" employee is  = "<< total ;  
}
