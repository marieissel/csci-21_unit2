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