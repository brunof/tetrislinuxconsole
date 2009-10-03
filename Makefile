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

FORMS = $(BASICFORMS) $(COMPLEXFORMS) \
	model/FormFactory.cpp \

GAME = $(FORMS) \
	model/Game.cpp \
	model/Player.cpp

all:
	@g++ -o tetris main.cpp $(GAME)

clean:
	@rm -f tetris
