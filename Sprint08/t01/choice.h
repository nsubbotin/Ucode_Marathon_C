const int MX_RED_PILL = 1;
const int MX_BLUE_PILL = 2;
const int MX_SUCCESS_PHRASE = 1;
const int MX_FAIL_PHRASE = 2;
const int MX_UNDEFINED_PHRASE = 3;
typedef char t_phrase;

char *mx_strdup(int i){
    if (i == 1)
        return "Follow me!";
    else if (i == 2)
        return "Perhaps I was wrong about you, Neo.";
    else
        return "Are you sure about that?";
}
