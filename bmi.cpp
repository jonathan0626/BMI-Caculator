#include<stdio.h>
#include<windows.h>

int main(void){
	float w,h,b;
	printf("歡迎使用BMI計算器\n\n");
	printf("輸入 \"1\" 開始使用 ，輸入 \"0\" 關閉\n");
	int a ;
	scanf("%d",&a);
	if(a == 1){
	Sleep(100);
	printf("\n請先輸入您的體重(kg)\n");
	scanf("%f",&w);
	printf("\n請輸入您的身高(cm)\n");
	scanf("%f",&h);
	if(h < 10){
	printf("\n請確認是否以公分為單位輸入您的身高\n");
	return 0 ;
    }
    else{
	printf("\n正在為您計算BMI...\n\n");
	Sleep(1000);
	
	b = w / (h*0.01*h*0.01);
	printf("輸出結果如下 : ");
	printf("\n--------------------------------\n\nBMI 為 \"%f\"\n",b);
	
	if(b<18.5){
		printf("\n狀態 為 \"Underweight\"\n");
	}
	else if(b>=18.5 && b<24.9){
		printf("\n狀態 為 \"Normal\"\n");
	}
	else if(b>25 && b<29.9){
		printf("\n狀態 為 \"Overweight\"\n");
	}
	else{
		printf("\n狀態 為 \"Obese\"\n");
	}
	printf("\n理想體重應為 \"%f\"kg ~ \"%f\"kg",18.5*h*0.01*h*0.01,24.9*h*0.01*h*0.01);
}
}
else if (a == 0){
	printf("程式已關閉");
	return 0 ;
} 
else{
	printf("\a輸入錯誤，因此已自動關閉程式");
	return 0; 
}
}
