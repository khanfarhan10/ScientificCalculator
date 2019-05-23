#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>
void main()
{       long double x,fx,fdx,R,result,zero=0;
	int i;
	clrscr();
	cout<<"Input an approximation : \n";
	cin>>x;       //can be initialised with any approximation

	cout<<endl;

	cout<<setprecision(3);
	/*/for the number of precision digits,that's
	why header file for input output manipulation is also used
	i.e., #include<iomanip.h>/*/

	cout<<"Sl No.\tXn\tf(x)\t\tf'(x)\t\tRatio";//for the table

	i=0;
	/*/to measure the number of iterations(Number of times the
	following loop runs)because some equations have no solution or
	they don't have an exact answer/*/

	R=1;//any arbitrary value other than 0 so it enters the while loop

	while((R!=0)&&(i<=10000000000000))
	/*/both conditions separated by a semicolon
	in first Ratio should be equal to zero,so that we have a
	maximum accuracy and according to second condition, the loop should
	not run more than the prescribed number of times/*/

	{fx=4*pow(x,2)-1;  //function of x
	fdx=8*x;          //differential of function of x
		if(fdx==0)
		{R=0;}
	/*/so that R doesn't take the indeterminate form of 0/0
	and the program doesnt give error when fdx=0
	(as division by 0 is not defined)/*/
		 else
		{R=fx/fdx;}
	++i;
	x=x-R;

	cout<<endl<<i<<"\t"<<x<<"\t"<<fx<<"\t\t"<<fdx<<"\t\t"<<R;
	}
	cout<<endl;

	result=4*pow(x,2)-1;
	if(result==0)//then
	{cout<<"Result is : "<<x;}
	else
	{cout<<"Result is imaginary and does not exist";}
	getch();
	}