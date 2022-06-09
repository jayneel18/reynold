#include<stdio.h>
#include<math.h>

void main()
{
	float p,u,U,Re;
    const L = 10;
		printf("Enter density of fluid(p):");
		scanf("%f",&p);
		printf("Enter Flow speed(u):");
		scanf("%f",&u);
		printf("enter dynamic viscocity(U):");
		scanf("%f",&U);

		//calculate reynold number//
		Re= (p*u*L)/U;
		printf("Reynold number = %0.3f", Re);
}