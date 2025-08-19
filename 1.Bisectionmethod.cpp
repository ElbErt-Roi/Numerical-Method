#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x*x-3*x-5)
#define E 0.001
int main()
{
	float x1,x2,f1,f2,x0,f0;
	lbl:
		printf("\nEnter the two initial guess values: ");
		scanf("%f%f",&x1,&x2);
		f1 = f(x1);
		f2 = f(x2);
		if(f1*f2>=0)
		{
			printf("Incorrect guess values... choose next guess value");
			goto lbl;
		} 
		else
		{
			lbl2:
				x0 = (x1+x2)/2;
				f0 = f(x0);
				if(f0==0)
				{
					printf("The root is: %f", x0);
				//	goto lbl1;
				}
				else if(f0*f1<0)
				{
					x2 = x0;
				}
				else
				{
					x1 = x0;
				}
				if(fabs((x2-x1)/x2)<=E)
				{
					printf("The root is: %f",x0);
				}
				else
				{
					goto lbl2;
				}
		}
	return 0;
}
