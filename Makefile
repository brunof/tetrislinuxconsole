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

BASICFORMS = model/forms/basic/*BasicForm.cpp

COMPLEXFORMS = model/forms/complex/ComplexForm.cpp

all:
	@g++ -o tetris main.cpp model/Game.cpp model/Player.cpp $(BASICFORMS) $(COMPLEXFORMS)

clean:
	@rm -f tetris
