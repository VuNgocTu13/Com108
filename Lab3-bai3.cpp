#include<stdio.h>
int main (){
	printf ("+----- Vu Ngoc Tu - PH32035 --------+\n");
	printf ("---------------- Bai 3  ------------+\n");
	int numberElectric;
	float payElectric;
	printf ("Nhap vao so dien tieu thu: ");
	scanf ("%d",&numberElectric);
	
	float level1 = 50 * 1.678;
	float level2 = 50 * 1.734;
	float level3 = 100 * 2.014;
	float level4 = 100 * 2.536;
	float level5 = 100 * 2.834;
	
    if (numberElectric <= 50){                            // Bac1
    	payElectric = numberElectric * 1.678;
	}else if (numberElectric <= 100){                    // Bac2
		payElectric = level1 + (numberElectric - 50) * 1.734;
	}else if ( numberElectric <= 200){                   // Bac3
		payElectric = level1 + level2 + ((numberElectric - 100) * 2.014);
	}else if ( numberElectric <= 300) {                  // Bac4
	    payElectric =level1 + level2 + level3 + (numberElectric - 200) * 2.536;             
    }else if ( numberElectric <= 400){                   //Bac5
        payElectric = level1 + level2 + level3 + level4 + (numberElectric - 300) * 2.834;  	
	}else {
		 payElectric = level1 + level2 + level3 +  level4 + level5 + (numberElectric - 400)*2.927; 
	}
	printf ("Ban da su dung: %d (kWh)\n",numberElectric);
	printf ("So tien phai dong la: %f (VND)\n",payElectric);
	return 0;
}
