#### Common variables for Makefiles

## Directories
ROOT=$(shell pwd)
DIR_ALG=algebra
DIR_ASM=asm
DIR_BIN=bin
DIR_SRC=src
DIR_OBJ=obj
DIR_LIB=lib
DIR_HDR=includes
DIR_DOC=doc
DIR_IN=libgame

## Compilation
GXX=g++

# Flags for linking
CFLAGS=  -I $(ROOT)/$(DIR_HDR)
# Flags for objects
CFLAGS_OBJ=-I $(ROOT)/$(DIR_HDR)  -O2 -Wall -Wextra -std=c++17
# Flags for libraries objects
CFLAGS_DYNAMIC_LIBS_OBJ=-fPIC 
# Flags for libraries linkins
CFLAGS_DYNAMIC_LIBS=-shared

