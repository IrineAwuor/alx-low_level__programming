# Makefiles

# Resources
</h> Read or watch
* <a href = "https://www.google.com/search?q=makefile"> Makefile </a>

# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

# General
*What are make, Makefiles
*When, why and how to use Makefiles
*What are rules and how to set and use them
*What are explicit and implicit rules
*What are the most common/useful rules
*What are variables and how to set and use them

# Requirements
*Allowed editors: vi, vim, emacs
*OS: Ubuntu 20.04 LTS
*Version of gcc: 9.3.0
*Version of make: GNU Make 4.2.1
*All your files should end with a new line
*A README.md file, at the root of the folder of the project, is mandatory

# More Info
In the following tasks, we are going to use  * <a href = "https://github.com/holbertonschool/0x1B.c" >these files </a>. We want to compile these only.

# Tasks

#0. make -f 0-Makefile
Create your first Makefile.

Requirements:
 *name of the executable: school
 *rules: all
   The all rule builds your executable
 *variables: none

# 1. make -f 1-Makefile
Requirements:

 *name of the executable: school
 *rules: all
   The all rule builds your executable
 *variables: CC, SRC
  CC: the compiler to be used
  SRC: the .c files

# 2. make -f 2-Makefile
Create your first useful Makefile.

Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: CC, SRC, OBJ, NAME
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
The all rule should recompile only the updated source files
You are not allowed to have a list of all the .o files
