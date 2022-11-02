#include<stdio.h>
#include<stdlib.h>

    int odev(int toplam){
	int i;
	
	    
	    for (i=1; i < 1000; i++){
		
		if (i % 3 == 0 || i % 5 == 0)
        {

		toplam=toplam+i;
		}
}
    return toplam;
}


    int main()
{
	printf("Hosgeldiniz\n");   
		int toplam=0;
	    printf("3 veya 5'in 1000'e kadar olan katlari toplami= %d",odev(toplam));
			

	return 0;
}