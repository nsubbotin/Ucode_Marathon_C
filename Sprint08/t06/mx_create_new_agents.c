#include "create_new_agents.h"
#include <stdlib.h>
#include <stdio.h>

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count){
    if (name == NULL || power == NULL || strength == NULL) return NULL;    
    t_agent **r = (t_agent **)malloc(sizeof(t_agent) * count);
    for (int i = 0; i < count; i++){
        if (name[i] == NULL) return NULL;
        else r[i] = mx_create_agent(name[i], power[i], strength[i]);
    }
    return r;
}

/*
int main(){
    char *names[] = {"Thompson", "Smith", "Coulson"};
    int powers[] = {33, 66, 99};
    int strengths[] = {133, 166, 196};
    t_agent **agents = mx_create_new_agents(names, powers, strengths, 3);
    for (int i = 0; i < 3; i++)
       printf("%s\n", agents[i]->name);
}
*/
