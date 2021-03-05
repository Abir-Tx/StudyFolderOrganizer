# variables
CC := g++
SRCDIR := src
BUILDDIR := bin
CFLAG := -v
INC := -I include/ -I include/delete -I lib
APPNAME := StudyFolderOrganizer

.PHONY: all
all: build run 

.PHONY: build
build:
	${CC} ${CFLAG} ${SRCDIR}/${APPNAME}.cpp ${INC} -o ${BUILDDIR}/${APPNAME}.exe

.PHONY: run
run:
	echo Running the built program....
	./${BUILDDIR}/${APPNAME}.exe