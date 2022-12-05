#include<stdio.h>
    #include<stdlib.h>
    #include<time.h>
int Random(int a, int b)
{
   return a + rand()%(b-a+1);
}

int main() {
    srand((int)time(0));
    int soBiMat;
    int userScanf;
    soBiMat = Random(1,10);
    printf("%d \n",soBiMat);
    int check =0;   
    int count =1; 
    printf ("+========== Con So May Man =============+\n");
    
    for (int i=1; i<=3; i++){
    	NguoiDungNhap:
        printf ("\n Hay nhap con so cua ban: ");
	    scanf ("%d",&userScanf);
		printf("\n");
    	if(userScanf != soBiMat){
    		
    		check = 0;
    	    printf ("CHUA CHINH XAC. ");
    		printf("\'Ban con lai %d (Lan)\' \n",3-i);
    		
		}else if (userScanf == soBiMat){
			check = 1;
			break;
		}
	}
	
	
		if (check ==0 ){
		  printf("\n =========== GAME OVER =========");	
		} 
       if (check == 1){
		printf ("  ============= YOU WIN. ===========");
		}
		return 0;
	}
	

	
		
		

	

