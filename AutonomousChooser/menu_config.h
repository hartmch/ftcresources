bool right=false;
bool inner=false;
int closeGoal=4;
int delay=0;

void setupMenu(){
	menuLength = 4;
	menuParameter parameters[4];


	//set up side
	parameters[0].name="Side:";
	parameters[0].var=&right;
	parameters[0].type='b';
	parameters[0].trueDisp="right";
	parameters[0].falseDisp="left ";

	//set up variant
	parameters[1].name="Variant:";
	parameters[1].var=&inner;
	parameters[1].type='b';
	parameters[1].trueDisp="inner";
	parameters[1].falseDisp="outer";

	//set up close
	parameters[2].name="Close:";
	parameters[2].var=&closeGoal;
	parameters[2].type='i';
	parameters[2].min=1;
	parameters[2].max=4;

	//set up delay
	parameters[3].name="Delay: ";
	parameters[3].var=&delay;
	parameters[3].type='i';
	parameters[3].min=0;
	parameters[3].max=15;


	menu = &parameters;
}
