#include "create_agent.h"
#include <stdlib.h>
#include <stdio.h>

char *mx_strdup(const char *str);
t_agent *mx_create_agent(char *name, int power, int strength){
    if (name == NULL) return NULL;
    t_agent *agent = (t_agent *)malloc(sizeof(t_agent));
    agent->name = mx_strdup(name);
    agent->power = power;
    agent->strength = strength;
    return agent;
}



/*
int main(){
    t_agent *agent = mx_create_agent("Smith", 10, 12);
    printf("%s\n", agent->name);
}
*/
