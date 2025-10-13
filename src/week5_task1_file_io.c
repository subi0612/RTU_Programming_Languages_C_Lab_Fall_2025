// week5_task1_file_io.c
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// TODO: Fill in the missing parts marked below.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE* fp;
  char filename[100] = "data.txt";
  char line[256];

  // TODO: 1. Open file for writing (mode = "w")
  fp = fopen(filename, "w");
  if (fp == NULL) {
    perror("Error opening file for writing");
    return 1;
  }
  // TODO: 2. Check if file opened successfully
  printf("File opened successfully for writing\n");

  // TODO: 3. Write 2–3 lines of text to the file using fprintf()
  fprintf(fp, "Hello, my name is billa ranga\n");
  fprintf(fp, "I am learning C programming.\n");
  fprintf(fp, "File I/O is fun!\n");
  // TODO: 4. Close the file
  fclose(fp);

  // TODO: 5. Open file again for reading (mode = "r")
  fp = fopen(filename, "r");
  // TODO: 6. Use fgets() in a loop to read and print each line to the console
  if (fp == NULL) {
    perror("Error opening file for reading");
    return 1;
  }
  // TODO: 7. Close the file
  while (fgets(line, sizeof(line), fp)) {
    printf("%s", line);
  }
  fclose(fp);

  // BONUS: ask user for filename instead of using default "data.txt"
  // BONUS: count number of lines read

  return 0;
}