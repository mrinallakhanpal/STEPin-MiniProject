MAIN_GAME = game.exe

MAIN_FILE = main.c

HEADER = header

SRC = src\start.c src\congo.c src\quit.c src\about.c src\help.c

$(MAIN_GAME) : $(SRC)
	gcc $(SRC) $(MAIN_FILE) -I $(HEADER) -o $(MAIN_GAME)

run: $(MAIN_GAME)
	$(MAIN_GAME)

clean:
	del /q *.exe