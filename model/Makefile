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

BASICFORMS = forms/basic/*BasicForm.cpp

COMPLEXFORMS = forms/complex/ComplexForm.cpp

all:
	@g++ -o tetris main.cpp Game.cpp Player.cpp $(BASICFORMS) $(COMPLEXFORMS)

clean:
	@rm -f tetris
