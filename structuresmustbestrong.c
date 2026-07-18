#include <stdio.h>

struct stronk {
	int sint;
	char schar;
};

void printer(struct stronk *s){
	printf("heres my stronk stats %d %c\n",s->sint, s->schar);
}

union dontgetmarried{
 int wastedyears;

 char badvibes;

 char keepmynameouturmouth[30];
};

int main(){
	union dontgetmarried ul;

	ul.wastedyears = 1000;

	ul.badvibes = 'y';

	printf("%d %c",ul.wastedyears, ul.badvibes);

	struct stronk s1;
	s1.sint = 275056;
	s1.schar = 'S';


	struct stronk s2;
	s2.sint = 1;
	s2.schar = 'c';

	struct stronk *sptr = &s1;

	printf("stronk one number %d,and character %c\n", sptr->sint, sptr->schar);
	printf("stronk 2 number and char %d %c\n", s2.sint, s2.schar);

	printer(&s1);
	printer(&s2);

	return 0;
}
