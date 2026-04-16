#include <stdio.h>
#include <string.h>

// remove spaces
void remove_spaces(char *str) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

// insert '.' in middle
void insert_middle(char *str) {
    int len = strlen(str);
    int mid = len / 2;

    for (int i = len; i >= mid; i--) {
        str[i + 1] = str[i];
    }

    str[mid] = '.';
}

// reverse a part of string
void reverse(char *str, int s, int e) {
    while (s < e) {
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s++;
        e--;
    }
}

int main() {
    char str[50] = "he llo wo rld";

    remove_spaces(str);      // helloworld
    insert_middle(str);      // hello.world

    int len = strlen(str);
    int mid = len / 2;

    // reverse first half
    reverse(str, 0, mid - 1);

    // reverse second half
    reverse(str, mid + 1, len - 1);

    printf("Final: %s\n", str);

    return 0;
}
/////////////////////////////////////////////////
sanchit(amd)
swap the nibble , 
#include<stdio.h>
int main(){
int num1 = 0x12;
int num2 = 0x34;
int num1_nib = num1 & 0x0F;
int num2_nib = num2 & 0x0F;
printf("number 1 %x, number 2 %x", ((num1 & 0xF0) | num2_nib), ((num2 & 0xF0) | num1_nib));
}
/////////////////////////////////////////////////////////////
remove the vowels from two string (concat without using any string tool)
sanchit(amd)
#include<stdio.h>
#include<string.h>

int main(){
   char str1[] = "mumbai";
   char str2[] = "banglore";

   int l1 = strlen(str1);
   int l2 = strlen(str2);

   char str3[l1+l2+1];
   int i=0;
   int j=0;
   int k=0;
   while(i != l1){
   if(str1[i] != 'a' & str1[i] != 'e' & str1[i] != 'i' & str1[i] != 'o' & str1[i] != 'u'){
   str3[k]=str1[i];
   k++;
   }
   i++;
   }
    while(j != l2){
       if(str2[j] != 'a' & str2[j] != 'e' & str2[j] != 'i' & str2[j] != 'o' & str2[j] != 'u'){
          str3[k]=str2[j];
             k++;
             }
             j++;
             }
             str3[k]='\0';
             printf("concat string %s", str3);

}
