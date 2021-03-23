all: datos.pdf

# implicit rules
# variables
# $^: todas las dependencias
# $<: solamente la primera dependencia
# $@: target

%.x : %.cpp
	g++ $< -o $@

#sumasAB.x : sumasAB.cpp

datos.txt : sumasAB.x
	./$< 1000 > $@

datos.pdf : updown.gp  datos.txt
	gnuplot $<

clean:
	rm -f datos.txt sumasAB.x
