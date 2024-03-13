isprime : isprime.c
	gcc $< -o $@

clean:
	$(RM) isprime
