typedef struct {
    char ch;
    int freq;
} CharFreq;

int compare(const void* a, const void* b) {
    return ((CharFreq*)b)->freq - ((CharFreq*)a)->freq;
}

char* frequencySort(char* s) {
    int map[128] = {0}; // ASCII 字元數
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        map[(int)s[i]]++;
    }

    CharFreq freqList[128];
    int count = 0;

    for (int i = 0; i < 128; i++) {
        if (map[i] > 0) {
            freqList[count].ch = (char)i;
            freqList[count].freq = map[i];
            count++;
        }
    }

    qsort(freqList, count, sizeof(CharFreq), compare);

    char* result = (char*)malloc(len + 1);
    int idx = 0;

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < freqList[i].freq; j++) {
            result[idx++] = freqList[i].ch;
        }
    }

    result[idx] = '\0';
    return result;
}
