#include <stdio.h>

int Check_Digit(int Num) {
	int Ret = 1, Sum = 10, tmp = 0;
	while (Num / Sum) {
		Sum *= 10;
		Ret++;
	}
	return Ret;
}
int Disassem(int Digit, int Input, int j) {
	int var = 0, mod = 0, Ret = 0;
	 //var = 나머지에 나누면 자릿수가 되는 Parameter, mod = 숫자와 자릿수 나눈 나머지;
	 mod = Input % j;
	 var = j / 10;
	 Ret = mod / var;
	 return Ret;
	 }
	 int Int_Rev(int Input) {
	 int Ret = 0;
	 while (Input) {
	 Ret = (Ret * 10) + (Input % 10);
	 Input = Input / 10;
	 }
	 return Ret;
	 }
	 int main()
	 {
	 int Input = 0, Input_Rev = 0;
	 int Var = 0, Var_Rev = 0, Ret = 0, Ret_Rev = 0, Digit = 0, Ret_Digit = 0, Check = 1;
	 int i = 0, j = 1, k = 1;
	 scanf("%d", &Input);
	 Digit = Check_Digit(Input);
	 Input_Rev = Int_Rev(Input);
	 Var = Input + Input_Rev;
	 Var_Rev = Int_Rev(Var);
	 Ret_Digit = Check_Digit(Var);
	 //printf("Input_Rev = %d, Digit = %d, Ret_Digit = %d \n", Input_Rev, Digit, Ret_Digit);
	 for (i = 0; i < Digit; i++)
	 {
	 j *= 10;
	 }
	 for (i = 0; i < Ret_Digit; i++)
	 {
	 Ret_Rev = Disassem(Ret_Digit, Var_Rev, j);
	 Ret = Disassem(Ret_Digit, Var, j);
	 printf("Var = %d, Ret_Rev = %d, Ret = %d \n", Var, Ret_Rev, Ret);
	 if (Ret != Ret_Rev) {
	 Check = 0;
	 break;
	 }
	 j /= 10;
	 }
	 if (Check == 1)
	 printf("YES");
	 else
	 printf("NO");
	
	 printf("\n");

	 return 0;
	 }
