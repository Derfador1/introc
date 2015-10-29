


target: a
	echo rm [a-f]

a: f
	cp f a

f: e d c
	touch f

e:
	touch e

d: b
	cp b d

c: b
	cp b c

b: Makefile quaddie.c
	cat Makefile > b
	cat quaddie.c >> b




.PHONY: clean

clean:
	@echo Cleaning
	-rm *.o quaddie namer ageist forish



quaddie: quaddie.o
	cc $(CFLAGS) $^ -o $@ -lm

include ../Makefile

quaddie.o: quaddie.c
	cc $(CFLAGS) -c $^

