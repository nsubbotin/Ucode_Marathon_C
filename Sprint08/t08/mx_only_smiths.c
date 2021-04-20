#include "only_smiths.h"
#include <stdio.h>
#include <stdlib.h>

char *mx_strdup(const char *str);
void mx_exterminate_agents(t_agent***);
int mx_strcmp(const char*, const char*);
t_agent *mx_create_agent(char*, int, int);
t_agent **mx_only_smiths(t_agent **agents, int strength){
    int count = 0;
    for (int i = 0; agents[i] != NULL; i++){
        if (agents[i]->strength < strength && mx_strcmp(agents[i]->name, "Smith") == 0)
            count++;
    }
    if (count == 0) return NULL;
    t_agent **result = (t_agent **)malloc(sizeof(t_agent) * (count + 1));
    count = 0;
    for (int i = 0; agents[i] != NULL; i++){
        if (agents[i]->strength < strength && 
            mx_strcmp(agents[i]->name, "Smith") == 0){
            t_agent *agent = (t_agent *)malloc(sizeof(t_agent));
            agent->name = mx_strdup(agents[i]->name);
            agent->power = agents[i]->power;
            agent->strength = agents[i]->strength;
            result[count] = agent;
            count++;
        }
    }
    result[count] = NULL;
    mx_exterminate_agents(&agents);
    return result;
}

/*
int main()
{
    t_agent **agents = (t_agent **)malloc(sizeof(t_agent) * 5);
    agents[0] = mx_create_agent("Smith", 150, 166);
    agents[1] = mx_create_agent("Brown", 147, 57);
    agents[2] = mx_create_agent("Smith", 151, 65);
    agents[3] = mx_create_agent("Smith", 123, 321);
    agents[4] = NULL;
    t_agent **seeded = mx_only_smiths(agents, 100);
    for (int i = 0; seeded[i] != NULL; i++)
    {
        printf("%s\t%d\t%d\n", seeded[i]->name, seeded[i]->power, seeded[i]->strength);
    }
}
*/
