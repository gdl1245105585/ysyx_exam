REPO_PATH = repo
ifeq ($(wildcard repo/include/ONScripter.h),)
endif

NAME = onscripter
SRCS = $(shell find $(REPO_PATH)/src/ -name "*.cpp")
INC_PATH = $(REPO_PATH)/include
LIBS += libminiSDL libSDL_ttf libSDL_image libSDL_mixer
include $(NAVY_HOME)/Makefile

init:;
.PHONY: init
