build: main.cpp
	g++ main.cpp mainWindow.h -o SCIFAIR `pkg-config gtkmm-3.0 --cflags --libs`