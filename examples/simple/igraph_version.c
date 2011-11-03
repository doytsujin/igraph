/* -*- mode: C -*-  */
/* 
   IGraph library.
   Copyright (C) 2010  Gabor Csardi <csardi@rmki.kfki.hu>
   MTA RMKI, Konkoly-Thege Miklos st. 29-33, Budapest 1121, Hungary
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc.,  51 Franklin Street, Fifth Floor, Boston, MA 
   02110-1301 USA

*/

#include <igraph.h>
#include <string.h>

int main() {
  
  char tmp[100];
  const char *string;
  int major, minor, subminor;  
  
  igraph_version(&string, &major, &minor, &subminor);
  if (subminor != 0) { 
    sprintf(tmp, "%i.%i.%i", major, minor, subminor);
  } else {
    sprintf(tmp, "%i.%i", major, minor);    
  }

  if (strcmp(string, tmp)) {
    return 1;
  }

  return 0;
}