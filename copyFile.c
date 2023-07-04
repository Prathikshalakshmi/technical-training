//Program to copy the file
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *source, *target;
    char oldFile[30], newFile[30];
    printf("Enter source file: ");
    scanf("%s", oldFile);
    source = fopen(oldFile, "r");
    if (source == NULL){
        printf("%s does not exist!", oldFile);
        return 0; //terminates the application
    }
    
    //source file exist
    while(1){
    printf("Enter file name to store: ");
    scanf("%s", newFile);
    //checking whether the target already exist or not
    if(fopen(newFile, "r")!= NULL){
        //if it is exist
        fflush(stdin); //clearing the input buffer
        printf("%s already exist! Do you want to repalce it [Y/N] ?\n", newFile);
        char confirm = getc(stdin);
        if(confirm == 'Y' || confirm == 'y') break;
    }
    //if it is not
    else
        break;
  }
  //target does not exist
  target = fopen(newFile, "w");
  if(target == NULL){
      printf("%s cannot created!", newFile);
      return 0; //terminates the application
  }
  //target file is created
  //copying process starts here..
  while(1){
      char ch = fgetc(source);
      if(ch == EOF) break;
      fputc(ch, target);
  }
  printf("%s copied to %s successfully!",oldFile, newFile);
  //closing the file pointer 
  fclose(source);
  fclose(target);
}