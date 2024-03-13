isprime : isprime.c
	gcc -lm -Wall $< -o $@

clean:
	$(RM) isprime
