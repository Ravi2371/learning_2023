#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_LINE_LENGTH 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
} LogEntry;

void extractLogData(FILE *file, LogEntry logEntries[], int *numEntries) {
    char line[MAX_LINE_LENGTH];
    char *token;
    int lineCount = 0;

    
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        if (lineCount >= MAX_ENTRIES) {
            printf("Maximum number of entries reached. Ignoring remaining lines.\n");
            break;
        }

        
        token = strtok(line, ",");
        if (token != NULL) {
            logEntries[lineCount].entryNo = atoi(token);

            token = strtok(NULL, ",");
            strncpy(logEntries[lineCount].sensorNo, token, sizeof(logEntries[lineCount].sensorNo));

            token = strtok(NULL, ",");
            logEntries[lineCount].temperature = atof(token);

            token = strtok(NULL, ",");
            logEntries[lineCount].humidity = atoi(token);

            token = strtok(NULL, ",");
            logEntries[lineCount].light = atoi(token);

            token = strtok(NULL, ",");
            strncpy(logEntries[lineCount].timestamp, token, sizeof(logEntries[lineCount].timestamp));

            lineCount++;
        }
    }

    *numEntries = lineCount;
}

void displayLogData(LogEntry logEntries[], int numEntries) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    printf("-----------------------------------------------------------\n");
    for (int i = 0; i < numEntries; i++) {
        printf("%d\t%s\t\t%.2f\t\t%d\t\t%d\t%s\n", logEntries[i].entryNo, logEntries[i].sensorNo,
               logEntries[i].temperature, logEntries[i].humidity, logEntries[i].light, logEntries[i].timestamp);
    }
}

int main() {
    FILE *file;
    LogEntry logEntries[MAX_ENTRIES];
    int numEntries = 0;

    
    file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    
    extractLogData(file, logEntries, &numEntries);

    
    fclose(file);

    
    displayLogData(logEntries, numEntries);

    return 0;
}