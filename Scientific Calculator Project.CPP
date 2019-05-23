#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream.h>
long int factorial_func(long int x) //factorial function
{	long int no,fac,j;
	no=x;
	fac=1;
	if(no==0||no==1)
	{fac=1;}
	else       //when no>1
	{	for(j=no;j>0;j--)
		{fac=fac*j;
	}	}
	return(fac);

}

void main()
{ clrscr();
  long double a,x,y,e=exp(1),logger,fact=1,result,pi=3.141592653535897;
  long double radians,degrees,expfunc,ex=exp(1),com,power;
  long double rec,mod,b,d,lchecker,no1,no2,out;
  long int per,n,r;
  int i,j,no,check,number1,number2;
  char c,ch,ch1,ch2;
  retry:
  cout<<"\n\n\n *************WELCOME TO THE SCIENTIFIC CALCULATOR ************ \n\n\n";

 cout<<"\t r : Arithmetic Operations \n";
 cout<<"\t t : Trigonometric Functions \n";
 cout<<"\t i : Inverse Trigonometric Functions \n";
 cout<<"\t l : Logarithmic Functions \n";
 cout<<"\t a : Anti Logarithmic Functions \n";
 cout<<"\t p : Power Functions \n";
 cout<<"\t o : Other Functions (Factorials and Mod) \n";
 cout<<"\t q : Quit... \n";
 cin>>c;
 clrscr();


 if(c=='q')
  {goto quit;}          //for going to quit label at the end of the program


 switch(c)
 {


 case 'r':
 cout<<"Welcome to Arithmetic Operations :: \n";
 cout<<"General Instructions :\n";
 cout<<"Enter the required number in Input & Enter the required arithmetic";
 cout<<" operation (+,-,*,/,=) to get the desired output :: \n";
	logical_calculator:
	out=0;
	cout<<"Press q to quit anytime (under operations)\n";
	ch2='+';
	i=0;//loop controller
	do
	 {i++;
	 if(i>=1000)
	 {clrscr();
	 cout<<"\nWrong input\n";
	 goto quit;
	 }

	  if(ch2=='='){}
	  else if (ch2=='+'){}
	  else if (ch2=='-'){}
	  else if (ch2=='*'){}
	  else if (ch2=='/') {}
	  else
	  { cout<<"\nWrong choice\n";
	  goto quit;}

	 if(ch2!='='||ch2=='+'||ch2=='-'||ch2=='*'||ch2=='/')
	 { cout<<"Input     :" ;
	 cin>>no1;}



	switch(ch2)
	 {
	 case '+':out=out+no1;
		  break;
	 case '-':out=out-no1;
		  break;
	 case '*':out=out*no1;
		  break;
	 case '/':out=out/no1;
		  break;
	 case 'q':goto quit;
		  break;
	 case '=':cout<<"Output	  :"<<out<<endl;
		  break;
	 default :cout<<"\nWrong choice\n";
		  goto quit;
		  break;
	 }

	 cout<<"Operation :";
	 cin>>ch2;




	} while(ch2!='q');
	goto quit;
 break;

 case 't':
 cout<<"\t Welcome to Trigonometric Functions :: \n";
 cout<<"\t s : Sine of x \n";
 cout<<"\t c : Cosine of x \n";
 cout<<"\t t : Tangent of x \n";
 cout<<"\t e : Cosecant of x \n";
 cout<<"\t f : Secant of x \n";
 cout<<"\t g : Cotangent of x \n";
 cin>>ch;
	switch(ch)
	{
	//trigonometric f(x)
	case 's':
	sine:
	cout<<"choose d for degrees &  r for radians : ";
	cin>>ch1;
	cout<<"Enter the value of x                  :  ";
	cin>>x;
	if(ch1=='r')    //User enters value in radians
	{result=sin(x);}
	else if(ch1=='d')   //User enters value in degrees
	{radians=(x*pi)/180;
	result=sin(radians);}
	else //user doesn't enter degree or radians
	{clrscr();
	cout<<"Wrong Choice !!";
	goto retry;}
	cout<<"sin ("<<x<<")  = "<<result;
	break;

	case 'c':
	cosine:
	cout<<"choose d for degrees &  r for radians : ";
	cin>>ch1;
	cout<<"Enter the value of x                  :  ";
	cin>>x;
	if(ch1=='r')    //User enters value in radians
	{result=cos(x);}
	else if(ch1=='d')     //User enters value in degrees
	{radians=(x*pi)/180;
	result=cos(radians);}
	else //user doesn't enter degree or radians
	{ clrscr();
	cout<<"Wrong Choice !!";
	goto retry;}
	cout<<"cos ("<<x<<")  = "<<result;
	break;

	case 't':
	tangent:
	cout<<"choose d for degrees &  r for radians : ";
	cin>>ch1;
	cout<<"Enter the value of x                  :  ";
	cin>>x;
	check=0;
	if(ch1=='r') //User enters value in radians
	{    //if x=odd multiple of pi/2[{2n+1}*pi/2],tan(x) will be infinity
		for(i=-1000;i<=1000;i++)
		{       check=(2*i+1)*pi/2;
			if(x/check==1)
			{cout<<"Value of tan("<<x<<") : "<<"Infinity";
			goto quit;
			}
		}
	result=tan(x);
	}
	else if(ch1=='d') //User enters value in degrees
	{radians=(x*pi)/180;
		for(i=-1000;i<=1000;i++)
		{       check=(2*i+1)*90;
			if(x/check==1)
			{cout<<"Value of tan("<<x<<") : "<<"Infinity";
			goto quit;
			}
		}

	result=tan(radians);}
	else //User doesn't enter degree or radians
	{clrscr();
	cout<<"Wrong Choice !!";
	goto retry;}
	cout<<"tan ("<<x<<")  = "<<result;
	break;


	case 'e':
	cosecant:
	cout<<"choose d for degrees &  r for radians : ";
	cin>>ch1;
	cout<<"Enter the value of x                  :  ";
	cin>>x;
	check=0;
	if(ch1=='r') //User enters value in radians
	{    //if x=integral multiple of pi[n*pi],cosec(x) will be infinity
		for(i=-1000;i<=1000;i++)
		{       check=i*pi;
			if(x/check==1)
			{cout<<"Value of cosec("<<x<<") : "<<"Infinity";
			goto quit;
			}
		}
	result=1/sin(x);
	}
	else if(ch1=='d') //User enters value in degrees
	{radians=(x*pi)/180;
		for(i=-1000;i<=1000;i++)
		{       check=i*180;
			if(x/check==1)
			{cout<<"Value of cosec("<<x<<") : "<<"Infinity";
			goto quit;
			}
		}

	result=1/sin(radians);}
	else //User doesn't enter degree or radians
	{ clrscr();
	cout<<"Wrong Choice !!";
	goto retry;}
	cout<<"cosec ("<<x<<")  = "<<result;
	break;

	case 'f':
	secant:
	cout<<"choose d for degrees &  r for radians : ";
	cin>>ch1;
	cout<<"Enter the value of x                  :  ";
	cin>>x;
	check=0;
	if(ch1=='r') //User enters value in radians
	{    //if x=odd multiple of pi/2[{2n+1}*pi/2],sec(x) will be infinity
		for(i=-1000;i<=1000;i++)
		{       check=(2*i+1)*pi/2;
			if(x/check==1)
			{cout<<"Value of sec("<<x<<") : "<<"Infinity";
			goto quit;
			}
		}
	result=1/cos(x);
	}
	else if(ch1=='d') //User enters value in degrees
	{radians=(x*pi)/180;
		for(i=-1000;i<=1000;i++)
		{       check=(2*i+1)*90;
			if(x/check==1)
			{cout<<"Value of sec("<<x<<") : "<<"Infinity";
			goto quit;
			}
		}

	result=1/cos(radians);}
	else //User doesn't enter degree or radians
	{clrscr();
	cout<<"Wrong Choice !!";
	goto retry;}
	cout<<"sec ("<<x<<")  = "<<result;
	break;


	case 'g':
	cotangent:
	cout<<"choose d for degrees &  r for radians : ";
	cin>>ch1;
	cout<<"Enter the value of x                  :  ";
	cin>>x;
	check=0;
	if(ch1=='r') //User enters value in radians
	{    //if x=integral multiple of pi[n*pi],cot(x) will be infinity
		for(i=-1000;i<=1000;i++)
		{       check=i*pi;
			if(x/check==1)
			{cout<<"Value of cot("<<x<<") : "<<"Infinity";
			goto quit;
			}
		}
	result=1/tan(x);
	}
	else if(ch1=='d') //User enters value in degrees
	{radians=(x*pi)/180;
		for(i=-1000;i<=1000;i++)
		{       check=i*180;
			if(x/check==1)
			{cout<<"Value of cot("<<x<<") : "<<"Infinity";
			goto quit;
			}
		}

	result=1/tan(radians);}
	else //User doesn't enter degree or radians
	{clrscr();
	cout<<"Wrong Choice !!";
	goto retry;}
	cout<<"cot ("<<x<<")  = "<<result;
	break;

	case 'q':
	clrscr();
	goto quit;
	break;

	default:
	clrscr();
	cout<<"Wrong Choice !!";
	goto retry;
	break;

	}
 break;

 case 'i':
	cout<<"\t Welcome to Inverse Trigonometric Functions :: \n";
	cout<<"\t s : Sine Inverse of x \n";
	cout<<"\t c : Cosine Inverse of x \n";
	cout<<"\t t : Tangent Inverse of x \n";
	cout<<"\t e : Cosecant Inverse of x \n";
	cout<<"\t f : Secant Inverse of x \n";
	cout<<"\t g : Cotangent Inverse of x \n";
	cin>>ch;

		switch(ch)
		{

	case 's':
	sin_inverse:                 //label sin_inverse
	cout<<"Enter the value of x             : ";
	cin>>x;
	if((x>1)||(x<-1))
		{cout<<"Out of Range !! Aborting!!\n";
		goto quit;}
	else
		{result = asin(x);
		degrees=(180*result)/pi;
		radians=result/pi;
		cout<<"Absolute value                   : "<<result<<"\n";
		cout<<"Value in degrees                 : "<<degrees<<"\n";
		cout<<"Value in radians                 : "<<radians<<" pi\n";
		}
	break;

	case 'c':
	cos_inverse:                 //label cos_inverse
	cout<<"Enter the value of x             : ";
	cin>>x;
	if((x>1)||x<-1)
		{cout<<"Out of Range !! Aborting!!\n";
		goto quit;}
	else
		{result = acos(x);
		degrees=(180*result)/pi;
		radians=result/pi;
		cout<<"Absolute value                   : "<<result<<"\n";
		cout<<"Value in degrees                 : "<<degrees<<"\n";
		cout<<"Value in radians                 : "<<radians<<" pi\n";
		}
	break;


	case 't':
	tan_inverse:                 //label tan_inverse
	cout<<"Enter the value of x             : ";
	cin>>x;
	result = atan(x);
	degrees=(180*result)/pi;
	radians=result/pi;
	cout<<"Absolute value                   : "<<result<<"\n";
	cout<<"Value in degrees                 : "<<degrees<<"\n";
	cout<<"Value in radians                 : "<<radians<<" pi\n";
	break;


	case 'e':
	cosec_inverse:                 //label cosec_inverse
	cout<<"Enter the value of x             : ";
	cin>>x;
	if((x<1)&&x>-1)
		{cout<<"Out of Range !! Aborting!!\n";
		goto quit;}
	else
	{y=1/x;
	result = asin(y);
	degrees=(180*result)/pi;
	radians=result/pi;}
	cout<<"Absolute value                   : "<<result<<"\n";
	cout<<"Value in degrees                 : "<<degrees<<"\n";
	cout<<"Value in radians                 : "<<radians<<" pi\n";
	break;

	case 'f':
	sec_inverse:                 //label sec_inverse
	cout<<"Enter the value of x             : ";	cin>>x;
	if((x<1)&&x>-1)
		{cout<<"Out of Range !! Aborting!!\n";
		goto quit;}
	else
	{y=1/x;
	result = acos(y);
	degrees=(180*result)/pi;
	radians=result/pi;}
	cout<<"Absolute value                   : "<<result<<"\n";
	cout<<"Value in degrees                 : "<<degrees<<"\n";
	cout<<"Value in radians                 : "<<radians<<" pi\n";
	break;

	case 'g':
	cot_inverse:                 //label cot_inverse
	cout<<"Enter the value of x             : ";	cin>>x;
	if(x>0)
	{y=1/x;
	result = atan(y);
	degrees=(180*result)/pi;
	radians=result/pi;}
	else if(x<0)
	{y=1/x;
	result=atan(y)+pi;
	degrees=(180*result)/pi;
	radians=result/pi;}
	else  //if x=0
	{result=0;
	degrees=(180*result)/pi;
	radians=result/pi;}
	cout<<"Absolute value                   : "<<result<<"\n";
	cout<<"Value in degrees                 : "<<degrees<<"\n";
	cout<<"Value in radians                 : "<<radians<<" pi\n";
	break;

	default:
	clrscr();
	cout<<"Wrong Choice !!";
	goto retry;
	break;

	}
	break;


  case 'l':
 cout<<"\t Welcome to Logarithmic Functions :: \n";
 cout<<"\t n : Natural Logarithm of d.. ln(d).. \n";
 cout<<"\t d : Logarithm Base 10 of x.. log base 10 (x).. \n";
 cout<<"\t b : Logarithm Base b of d.. log base b (d)..(Any Logarithm) \n";
 cin>>ch1;
 switch(ch1)
	{

	case 'n': //for natural logarithm(base e)
	ln:
	cout<<"Enter the value of domain             : ";
	cin>>d;
	e=exp(1);
	logger=log10(d)/log10(e);
	cout<<"Value of ln ("<<d<<") is : "<<logger<<endl;
	break;

	case 'd':  //log base 10
	log10 :
	cout<<"Enter the value of x             : ";
	cin>>x;
	if(x<0)
	{cout<<"Logarithm of a negative number is not defined...\nAborting!!";
	goto quit;}
	logger=log10(x);
	cout<<"Value of log base 10 ("<<x<<") is : "<<logger<<endl;
	break;



	case 'b': //for any logarithm(any base)
	anylog:
	cout<<"Enter the value of base             : ";
	cin>>b;
	cout<<"Enter the value of domain             : ";
	cin>>d;
	logger=log10(d)/log10(b);
	cout<<"Value of log base "<<b<<" ("<<d<<") is : "<<logger<<endl;
	break;

	case 'q':
	clrscr();
	goto quit;
	break;


	default:
	clrscr();
	cout<<"Wrong Choice !!";
	goto retry;
	break;

	}
	break;



 case 'a':
 cout<<"\t Welcome to Anti Logarithmic Functions :: \n";
 cout<<"\t n : Natural Anti Logarithm of d.. antiln(d).. \n";
 cout<<"\t d : Anti Logarithm Base 10 of x.. antilog base 10 (x).. \n";
 cout<<"\t b : Anti Logarithm Base a of x.. antilog base a (x)..(Any Anti Logarithm) \n";
 cin>>ch1;
 switch(ch1)
	{
	case 'n':
	antilogbe_function://e to the power x antilog base e (x)
	a=exp(1);
	cout<<"Enter the domain of the antilog	     : ";
	cin>>x;
	power=pow(a,x);
	cout<<"Value of antilog base e (natural antilog) ("<<x<<")  : "<<power<<endl;
	break;

	case 'd':
	antilogb10_function://10 to the power x antilog base 10 (x)
	a=10;
	cout<<"Enter the domain of the antilog	     : ";
	cin>>x;
	power=pow(a,x);
	cout<<"Value of antilog base "<<a<<" ("<<x<<")  : "<<power<<endl;
	break;

	case 'b':
	antilog_function://a to the power x... antilog base a (x)
	cout<<"Enter the base of the antilog    : ";
	cin>>a;
	cout<<"Enter the domain of the antilog	     : ";
	cin>>x;
	power=pow(a,x);
	cout<<"Value of antilog base "<<a<<" ("<<x<<")  : "<<power<<endl;
	break;

	case 'q':
	clrscr();
	goto quit;
	break;


	default:
	clrscr();
	cout<<"Wrong Choice !!";
	goto retry;
	break;
	}
 break;



 case 'p':
 cout<<"\t Welcome to Power Functions :: \n";
 cout<<"\t 1 : a^x                  Exponential Function...\n";
 cout<<"\t 2 : a^(-x)...or..1/(a^x) Exponential Function...\n";
 cout<<"\t 3 : e^x...               Exponential Function... \n";
 cout<<"\t 4 : 1/x...or x^(-1)...   Reciprocal Function... \n";
 cout<<"\t 5 : x^2..		    Square of x... \n";
 cout<<"\t 6 : x^3..		    Cube of x... \n";
 cout<<"\t 7 : x^(1/2)..	    Square root of x... \n";
 cout<<"\t 8 : x^(1/3)..	    Cube root of x... \n";
 cout<<"\t 9 : x^(1/n)..	    n th root of x... \n";
 cout<<"\t10 : pi^n..		    Pi to the power n... \n";
 cin>>number1;
	switch(number1)
	{

	case 1:
	power_function://a to the power x
	cout<<"Enter the value of a             : ";
	cin>>a;
	cout<<"Enter the value of x             : ";
	cin>>x;
	power=pow(a,x);
	cout<<"Value of "<<a<<" raised to the power "<<x<<" : "<<power<<endl;
	break;

	case 2://..1/(a to the power x)....or..a to the power (-x)
	inv_power_function:
	cout<<"Enter the value of a             : ";
	cin>>a;
	cout<<"Enter the value of x             : ";
	cin>>x;
	power=1/pow(a,x);
	cout<<"Value of inverse of "<<a<<" raised to the power "<<x<<" : "<<power<<endl;
	break;


	case 3:
	exponent_e:
	cout<<"Enter the value of x             : ";
	cin>>x;
	/*/e=1;
	for(i=1;i<=1000;i++)
	{	fact=1;
		for(j=i;j>0;j--)
		{fact=fact*j;
		}
		e=e+(pow(x,i)/fact);
	}
	cout<<"Value of e raised to the power x calculated by expansion : "<<e;/*/
	//above thing yields same result :(
	expfunc=exp(x);
	cout<<"Value of e raised to the power "<<x<<" : "<<expfunc<<endl;
	break;


	case 4://1/x
	reciprocal_func:
	cout<<"Enter the value of x             : ";
	cin>>x;
	rec=1/x;
	cout<<"Value of reciprocal 1/"<<x<<" : "<<rec<<endl;
	break;

	case 5://xsquare
	square_func:
	cout<<"Enter the value of x             : ";
	cin>>x;
	power=pow(x,2);
	cout<<"Value of square of "<<x<<" : "<<power<<endl;
	break;

	case 6://xcube
	cube_func:
	cout<<"Enter the value of x             : ";
	cin>>x;
	power=pow(x,3);
	cout<<"Value of cube of "<<x<<" : "<<power<<endl;
	break;

	case 7://xsquareroot
	sqrt_func:
	cout<<"Enter the value of x             : ";
	cin>>x;
	power=sqrt(x);
	cout<<"Value of square root of "<<x<<" : "<<power<<endl;
	break;

	case 8:// cube root of x
	cuberoot_func:
	cout<<"Enter the value of x             : ";
	cin>>x;
	no1=3;
	y=1/no1;
	power=pow(x,y);
	cout<<"Value of cube root of "<<x<<" : "<<power<<endl;
	break;

	case 9:// nth root of x
	nthroot_func:
	cout<<"Enter the value of x             : ";
	cin>>x;
	cout<<"Enter the value of n             : ";
	cin>>no1;
	y=1/no1;
	power=pow(x,y);
	cout<<"Value of nth root of "<<x<<" : "<<power<<endl;
	break;

	case 10:// nth power of pi
	pipower_func:
	cout<<"Enter the value of n             : ";
	cin>>n;
	power=pow(pi,n);
	cout<<"Value of "<<n<<"th power of pi : "<<power<<endl;
	break;

	default:
	clrscr();
	cout<<"Wrong Choice !!";
	goto quit;
	break;
	}
 break;


 case 'o':
 cout<<"\t Welcome to Other Functions(Factorials and Mod) \n";
 cout<<"\t f : Factorial of x.. x!.. \n";
 cout<<"\t p : Permutational Arrangement..nPr.. \n";
 cout<<"\t c : Combinatorial Arrangement..nCr.. \n";
 cout<<"\t m : Modulus of x..mod(x)..|x|.. \n";
 cin>>ch1;
 switch(ch1)
	{


	case 'f':
	factorials:
	cout<<"Enter the value of x             : ";
	cin>>no;
	fact=1;
	if(no==0||no==1)
	{fact=1;}
	else if(no<0)
	{cout<<"Factorial doesn't exist\n";
	goto quit;}
	else       //when no>1
	{for(j=no;j>0;j--)
		{fact=fact*j;
	}	}
	cout<<"Factorial of "<<no<<" is : "<<fact<<endl;
	break;


	case 'p':
	permutations:
	//find nPr
	cout<<"Enter n ::"; cin>>n;
	cout<<"Enter r ::"; cin>>r;
	if(n<0||r<0||n<r)
	{cout<<"Combination doesn't exist\n";
	goto quit;}
	per=factorial_func(n)/factorial_func(n-r);
	cout<<"Permutations nPr is ::"<<per;
	cout<<endl;
	break;

	case 'c':
	combinations:
	//find nCr
	cout<<"Enter n ::"; cin>>n;
	cout<<"Enter r ::"; cin>>r;
	if(n<0||r<0||n<r)
	{cout<<"Combination doesn't exist\n";
	goto quit;}
	com=factorial_func(n)/(factorial_func(r)*factorial_func(n-r));
	cout<<"Combination nCr is ::"<<com;
	cout<<endl;
	break;

	case 'm':
	modulus:
	cout<<"Enter the value of x             : ";
	cin>>a;
	mod=fabs(a);
	cout<<"Modulus of"<<a<<"(|"<<a<<"|) :: "<<mod;
	break;

	case 'q':
	clrscr();
	goto quit;
	break;

	default:
	clrscr();
	cout<<"Wrong Choice !!";
	goto retry;
	break;
	}
 break;

	default:
	clrscr();
	cout<<"Wrong Choice !!";
	goto retry;
	break;


  }//switch close
  quit:
  cout<<"\n\n                               Thank you";
  getch();
}