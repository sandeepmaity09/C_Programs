/* 
 * Program to search a pattern from a tracklist
 * Ghost Licence 
 * (c)2016, The Warmachine
*/

#include<stdio.h>
#include<string.h>

char tracks[][100] = {
  "I left my heart in Harvard Med School",
  "Newark, Newark - a wonderfun town",
  "Dancing with a Dork",
  "From here to maternity",
  "The girl from Iwo Jima",
};

void find_track(char search_for[])
{
    int i;
    for (i=0;i<5;i++) {
      printf("%s\n",tracks[i]);
      printf("%lu\n",(long int)strstr(tracks[i],search_for));
      if (strstr(tracks[i],search_for))
        printf("Track %i: '%s'\n",i,tracks[i]);
    }
    printf("Track is not in the list\n");
}

int main()
{
    char search_for[100];
    printf("Search for: ");
    fgets(search_for,100,stdin);
    printf("%s",search_for);
    find_track(search_for);
    return 0;
}
