int main(void) {
    
  // string variable
  char str[20] = "Huzaifa Ahmed 1812337	";
  char str2[30] = "Muhammad Hashir 2112223";
  char str3[20] = "Meet kumar 2012122";
  
  // pointer variable
  char *ptr = str;
  char *ptr2 = str2;
  char *ptr3 = str3;
  
  // print the string
  while(*ptr != '\0') {
    printf("%c", *ptr);
    ptr++;
    
  }
  printf("\n");
  
    while(*ptr2 != '\0') {
    printf("%c", *ptr2);
    ptr2++;
  }
    printf("\n");
  
    while(*ptr3 != '\0') {
    printf("%c", *ptr3);
    ptr3++;
  }
  
  return 0;
}
