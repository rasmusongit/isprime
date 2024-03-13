isprime : isprime.c
	gcc -Wall $< -lm -o $@

clean:
	$(RM) isprime
