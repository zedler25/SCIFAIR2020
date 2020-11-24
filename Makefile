build: main.cpp
	g++ main.cpp -o SCIFAIR `pkg-config gtkmm-3.0 --clfags --libs`