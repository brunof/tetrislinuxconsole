WIN_SUFFIX = .exe
SHELL_SUFFIX = $(suffix $(SHELL))

ifeq ($(WIN_SUFFIX),$(SHELL_SUFFIX))
        os=windows
	cmdsep=&
	viewer=AcroRd32
else
        os=linux
	cmdsep=;
	viewer=evince
endif

BASICFORMS = forms/BasicForm.cpp \
		forms/StickBasicForm.cpp

all:
	g++ -o tetris forms/main.cpp $(BASICFORMS) forms/ComplexForm.cpp
