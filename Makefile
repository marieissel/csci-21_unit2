lab13test: box.o lab_13_unit_test.o
	g++ -Wall -g -o lab13 box.o lab_13_unit_test.o

lab13: box.cpp
	g++ -Wall -g -c box.cpp

lab13_unit: lab_13_unit_test.cpp
	g++ -Wall -g -c lab_13_unit_test.cpp


lab12test: item.o food_item.o magic_item.o lab_12_unit_test.o
	g++ -Wall -g -o lab12 item.o food_item.o magic_item.o lab_12_unit_test.o

lab12: item.cpp food_item.cpp magic_item.cpp
	g++ -Wall -g -c item.cpp food_item.cpp magic_item.cpp

lab12_unit: lab_12_unit_test.cpp
	g++ -Wall -g -c lab_12_unit_test.cpp



lab11test: money.o lab_11_unit_test.o
	g++ -Wall -g -o lab11 money.o lab_11_unit_test.o

lab11: money.cpp
	g++ -Wall -g -c money.cpp

lab11_unit: lab_11_unit_test.cpp
	g++ -Wall -g -c lab_11_unit_test.cpp

lab10test: temperature.o lab_10_unit_test.o
	g++ -Wall -g -o lab10 temperature.o lab_10_unit_test.o

lab10: temperature.cpp
	g++ -Wall -g -c temperature.cpp

lab10_unit: lab_10_unit_test.cpp
	g++ -Wall -g -c lab_10_unit_test.cpp

lab9test: lab_9.o lab_9_unit_test.o
	g++ -Wall -g -o lab9 lab_9.o lab_9_unit_test.o

lab9: lab_9.cpp
	g++ -Wall -g -c lab_9.cpp

lab9_unit: lab_9_unit_test.cpp
	g++ -Wall -g -c lab_9_unit_test.cpp