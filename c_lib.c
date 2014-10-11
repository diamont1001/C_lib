#include "c_lib.h"


int str_split(char ***words, const char *line, char delim) {
    int word_counter = 0;//str_count_char(line, delim) + 1;
    *words = (char **) malloc(sizeof(char *) * word_counter);
    int i = 0;
    char *p = line;
	while(line[word_counter++]);

    while ( 1 ) {
        char *s = p;
        p = strchr(p, delim);
        int len = ( p ) ? p - s : strlen(s);
        (*words)[i] = (char *) malloc(sizeof(char) * (len + 1));
        strncpy((*words)[i], s, len);
        (*words)[i][len] = 0;
        if ( !p ) break;
        p++;
        i++;
    }
    return word_counter;
}
