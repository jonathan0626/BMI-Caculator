#include<stdio.h>
#include<windows.h>

int main(void){
	float w,h,b;
	printf("�w��ϥ�BMI�p�⾹\n\n");
	printf("��J \"1\" �}�l�ϥ� �A��J \"0\" ����\n");
	int a ;
	scanf("%d",&a);
	if(a == 1){
	Sleep(100);
	printf("\n�Х���J�z���魫(kg)\n");
	scanf("%f",&w);
	printf("\n�п�J�z������(cm)\n");
	scanf("%f",&h);
	if(h < 10){
	printf("\n�нT�{�O�_�H����������J�z������\n");
	return 0 ;
    }
    else{
	printf("\n���b���z�p��BMI...\n\n");
	Sleep(1000);
	
	b = w / (h*0.01*h*0.01);
	printf("��X���G�p�U : ");
	printf("\n--------------------------------\n\nBMI �� \"%f\"\n",b);
	
	if(b<18.5){
		printf("\n���A �� \"Underweight\"\n");
	}
	else if(b>=18.5 && b<24.9){
		printf("\n���A �� \"Normal\"\n");
	}
	else if(b>25 && b<29.9){
		printf("\n���A �� \"Overweight\"\n");
	}
	else{
		printf("\n���A �� \"Obese\"\n");
	}
	printf("\n�z�Q�魫���� \"%f\"kg ~ \"%f\"kg",18.5*h*0.01*h*0.01,24.9*h*0.01*h*0.01);
}
}
else if (a == 0){
	printf("�{���w����");
	return 0 ;
} 
else{
	printf("\a��J���~�A�]���w�۰������{��");
	return 0; 
}
}
