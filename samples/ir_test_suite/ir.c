
// gcc -masm=intel ./test.c -o test
int main(){
  asm("mov eax, 32");
  asm("mov ecx, 1");
  asm("mov ebx, eax");
  asm("add ecx, ebx");
  asm("adc eax, ecx");
  asm("inc eax");
  asm("sbb eax, ecx");
  asm("cmp ecx, eax");
  asm("cmp ecx, 3");
}
