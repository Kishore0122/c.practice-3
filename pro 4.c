#include <stdio.h>
main()
 {
    int n1, n2, large;
    printf("Enter two numbers ");
    scanf("%d %d", &n1, &n2);
    large= (n1 > n2) ? n1 : n2;
    while (1) 
	{
        if ((large % n1 == 0) && (large % n2 == 0))
		 { printf("The LCM of %d and %d is %d.", n1, n2, large);
            break;}
        ++large;
    }
}
