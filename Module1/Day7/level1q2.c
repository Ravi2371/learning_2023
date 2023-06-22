#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUFFER_SIZE 4096

void changeToUpperCase(char *str) {
    while (*str != '\0') {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void changeToLowerCase(char *str) {
    while (*str != '\0') {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

void changeToSentenceCase(char *str) {
    int length = strlen(str);
    if (length > 0) {
        str[0] = toupper((unsigned char)str[0]);
        for (int i = 1; i < length; i++) {
            str[i] = tolower((unsigned char)str[i]);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments. Usage: ./cp [option] source_file target_file\n");
        return 1;
    }

    char *option = argv[1];
    char *sourcePath = argv[2];
    char *targetPath = argv[3];

    FILE *sourceFile, *targetFile;
    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    targetFile = fopen(targetPath, "w");
    if (targetFile == NULL) {
        printf("Failed to create the target file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
        if (strcmp(option, "-u") == 0) {
            changeToUpperCase(buffer);
        } else if (strcmp(option, "-l") == 0) {
            changeToLowerCase(buffer);
        } else if (strcmp(option, "-s") == 0) {
            changeToSentenceCase(buffer);
        }

        fwrite(buffer, 1, bytesRead, targetFile);
    }

    fclose(sourceFile);
    fclose(targetFile);

    printf("File copied successfully.\n");

    return 0;
}