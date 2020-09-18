all: 
	g++ -Wall -pedantic q1.cpp q1_funcoes.cpp -o program1
	g++ -Wall -pedantic q2.cpp q2_funcoes.cpp -o program2

q1:
	./program1
	
q2:
	./program2