#include <stdio.h>
#include <string.h>  
#include <malloc.h>


char	ft_aux0(int n, int ni)
{
    n = ni + 1;
	return (n);
}

char	ft_aux1(char c)
{
	c = 0;
	return (c);
}

char* ft_split(char* str, char* charset)
{
    static int	i0;
	int			i;
	int			k;
	int			j;

    if(!str || !charset || str[i0] == '\0')
	{
    	return NULL;
	}
    char *new = (char *)malloc(sizeof(char)*100);
    i = i0;
	k = 0;
    while (str[i])
	{
        j = 0;
        while (charset[j])
		{
            if (str[i] != charset[j])
			{
                new[k] = str[i];
			}
			else
			{
				ft_aux0(i0, i);
				ft_aux1(new[i]);
				return new;
			}
			j++;
        }
        i++;
        k++;
    }
	//Iterator = ++ptr;
    return new;
}

int main(void)
{
    char s[100] = "my name is Ti-ago";
    char charset[] = " -";
    //char newstr[100];
    char *str = ft_split(s, charset);
    while(str){
        printf("%s", str);
        free(str);
        str = ft_split(s, charset);
    }
    return 0;
}