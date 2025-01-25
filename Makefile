build/app: app.c
	mkdir build -p
	gcc app.c -Os -Wall -Wextra -Wpedantic -o build/app

build: build/app

run: build
	build/app
