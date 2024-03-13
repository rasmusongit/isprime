isprime : isprime.c
	gcc -Wall $< -lm -o bin/$@

clean:
	$(RM) bin/*
