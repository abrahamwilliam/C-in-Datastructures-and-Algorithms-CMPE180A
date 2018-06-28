--------------------------------------
 class intelligence
 {
 
private:
	int taskId;
string actorName;
int actorId;
AnyActor AnyActor;
Anytask Anytask;
AnyMechanism AnyMechanism;

public:
void conduct(AnyActor AnyActor){
	AnyActor.apply(intelligence i);
}	
void influence(Anytask Anytask){
	
}
void cause(AnyMechanism AnyMechanism){
AnyMechanism.apply();	
}

 };
 
 ----------------
 
 
class AnyActor
{
private:
name;
id;
Intelligence Intelligence;

public:
void apply(Intelligence i){
	
	return i.taskId; 
}

	
 };
 

 ---------------------------------------------
 class AnyMechanism
 {
 	private:
int mechanismId;
int time;
AnyActor AnyActor;
Anytask Anytask;
AnyImpact AnyImpact;
AnyRule AnyRules;
public:
	void apply(AnyActor AnyActor,Anytask Anytask){
		AnyActor.apply(Anytask.perform());
			}
	void affect(AnyImpact AnyImpact){
         AnyImpact.perform(Anytask);
	}
	
	void act(AnyRule AnyRule){
		Anytask.apply(AnyRule);
	}
	
	void resolve(AnyRule AnyRule){
		AnyRules=AnyRule;
	}
	
	void inflict(AnyRule AnyRule,AnyImpact AnyImpact){
		return;
	}
 };

---------------------- 
 class AnyContext
 {
 	private:
Intelligence Intelligence;
Anytask Anytask;
public:
 void refernce(Anytask Anytask){
		
		}
 void involves(Intelligence i){
		
	}
	
 };
 
------------------------------ 
 class AnyRule
 {
 	private:
string actionDescription;
 int mechanismId;
 int numberOfSteps;
AnyMechanism AnyMechanisms;
public:
void constrain(AnyMechanism AnyMechanism){
AnyMechanisms=AnyMechanism.get();
}
 };
 
 -------------------------------------------------
 class AnyEntity
 {
 	private:
int Entityid;
string EntityDescription;
AnyMechanisms AnyMechanisms;
public:
	void apply(AnyMechanisms AnyMechanisms){
		AnyMechanisms.getmechincid();
	}
 };

 ------------------------------------------
 class AnyImpact
 {
 	private:
int threshold, 
string currentLevel;
string impactDescription;
AnyMechanism AnyMechanisms;

public:
 void perform(AnyMechanism AnyMechanism);
	AnyMechanisms =AnyMechanism;
 };
 
 ------------------------
 class AnyOutput
 {
 	private:
string outputDescription
AnyImpact AnyImpacts;
AnyMechanism AnyMechanisms;
public:
	void get(AnyImpact AnyImpact){
		AnyImpacts.perform(AnyMechanisms);
	}
	void guide(AnyImpact AnyImpact){
		AnyImpacts=AnyImpact;
	}
	
 };
 ----------------------
 
 
 class AnyTask
 {
 	private:
int duration;
 int contextId;
Intelligence Intelligence;
AnyActor AnyActor;
public:
void carriedOut(Intelligence i){
	
}	
	void do(AnyActor AnyActor){
		AnyActor.apply(i);
		
	}

 };
 ---------------
