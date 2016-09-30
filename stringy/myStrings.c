#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mystrchr(char *s, char c){
  char *cp = s;
  while (*cp!=c){
    cp++;
  }
  return cp;
}

int mystrlen(char *s){
  int ctr = 0;
  char *cp = s;
  while (*cp){
    ctr++;
    cp++;
  }
  return ctr;
}

char * mystrcpy(char *s1, char *s2){
  char *cp1 = s1;
  char *cp2 = s2;
  int ctr = 0;
  while (cp2[ctr] && cp1[ctr]){
    printf ("%c\n", cp1[ctr]);
    cp1[ctr] = cp2[ctr];
    ctr++;
  }
  return cp1;
}

int main(){
  //strlen
  printf("Testing strlen on (a) 'ples no', and (b) 'ehrmahgerd'\n");
  printf("My strlen(a) returns: %d\n", mystrlen("ples no"));
  printf("Real strlen(a) returns: %d\n", strlen("ples no"));    
  printf("My strlen(b) returns: %d\n", mystrlen("ehrmahgerd"));
  printf("Real strlen(b) returns: %d\n\n\n", strlen("ehrmahgerd"));    
  
  //strchr
  printf("Making own strchr, searching (a) 'l' and (b) 'd' in 'hoo lawdy'\n");
  printf("My strchr(a) returns: %s\n", mystrchr("hoo lawdy", 'l'));
  printf("Real strchr(a) returns: %s\n", strchr("hoo lawdy", 'l'));
  printf("My strchr(b) returns: %s\n", mystrchr("hoo lawdy", 'l'));
  printf("Real strchr(b) returns: %s\n\n\n", strchr("hoo lawdy", 'l'));
  
  //strcpy
  printf("Testing strlen on (a) 'ples no', 'oyes', and (b) 'ehrmahgerd', 'ahrmo'\n");
  printf("My strlen(a) returns: %s\n", mystrcpy("ples no", "oyes"));
  printf("Real strlen(a) returns: %s\n", strcpy("ples no", "oyes"));    
  printf("My strlen(b) returns: %s\n", mystrcpy("ehrmahgerd", "ahrmo"));
  printf("Real strlen(b) returns: %s\n\n\n", strcpy("ehrmahgerd", "ahrmo"));      
  
  return 21;
}
