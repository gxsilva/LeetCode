#include <stdbool.h>
#include <unistd.h>

typedef struct t_node
{
    char    data;
    struct  t_node *previous;
} s_node;

s_node  *creat_node(char data, s_node *crr)
{
    s_node  *node;
    s_node  *tmp_crr;

    tmp_crr = crr;
    node = (s_node *)malloc(sizeof(s_node) * 1);
    node->data = data;
    node->previous = tmp_crr;
    return (node);
}

bool isValid(char* s) {
    int     i;
    s_node  *new_node;
    s_node  *tmp_node;
    s_node  *crr_n;

    i = 0;
    crr_n = NULL;
    while (s[i])
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            crr_n = creat_node(s[i], crr_n);
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if (!crr_n)
                return (0);
            if(s[i] == ')' && crr_n->data == '(')
            {
                tmp_node = crr_n;
                crr_n = crr_n->previous;
                tmp_node->previous = NULL;
                free(tmp_node);
            }
            else if(s[i] == ']' && crr_n->data == '[')
            {
                tmp_node = crr_n;
                crr_n = crr_n->previous;
                tmp_node->previous = NULL;
                free(tmp_node);
            }
            else if(s[i] == '}' && crr_n->data == '{')
            {
                tmp_node = crr_n;
                crr_n = crr_n->previous;
                tmp_node->previous = NULL;
                free(tmp_node);
            }
            else if(crr_n->previous == NULL)
                return (0);
            else
                return (0);
        }
        i++;
    }
    if (crr_n != NULL)
        return (0);
    return (1);
}