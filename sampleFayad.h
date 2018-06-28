--------------------------------------
class intelligence {

private:
    int taskId;
    string actorName;
    int actorId;
    AnyActor AnyActor;
    Anytask Anytask;
    AnyMechanism AnyMechanism;

public:
//The actor on whom the intelligence is going to applied
    void conduct(AnyActor AnyActor)
    {
        AnyActor.apply(intelligence i);
    }
	
	//the Intelligence that inolve the task
    void influence(Anytask Anytask)
    {
		Anytask.apply(AnyMechanism);
    }
	
	//the cause for applying the mechanism
    void cause(AnyMechanism AnyMechanism)
    {
        AnyMechanism=AnyMechanism.get();
    }
};

----------------

  class AnyActor {
private:
    string name;
    int id;
    Intelligence Intelligence;

public:

//the actor who applies the intelligence
    void apply(Intelligence i)
    {
        return i.taskId;
    }
};

-------------------------------------------- - 
class AnyMechanism {
private:
    int mechanismId;
    int time;
    AnyActor AnyActor;
    Anytask Anytask;
    AnyImpact AnyImpact;
    AnyRule AnyRules;

public:

//the mechanism which makes the task to perform
    void apply(AnyActor AnyActor, Anytask Anytask)
    {
        AnyActor.apply(Anytask.perform());
    }
	
	//any impacts on the task is performed
    void affect(AnyImpact AnyImpact)
    {
        AnyImpact.perform(Anytask);
    }

	//to apply rules to the task
    void act(AnyRule AnyRule)
    {
        Anytask.apply(AnyRule);
    }

	//to apply rule for the intelligence
    void resolve(AnyRule AnyRule)
    {
        AnyRules = AnyRule.applyrule();
    }

	//to capture any impacts in the mechanism
    void inflict(AnyRule AnyRule, AnyImpact AnyImpact)
    {
        return;
    }
};

----------------------

class AnyContext {
private:
String contextdescription;
    Intelligence Intelligence;
    Anytask Anytask;

public:
//this show the reference of the context we are doing the task
    void refernce(Anytask Anytask,AnyEntity anyentity)
    {
		Anytask.append(anyentity);
    }
	
	//this show the context we are invloving for the intelligence to carry on
    void involves(Intelligence intelligence)
    {
		contextdescription=intelligence.getTask;
    }
};

------------------------------
class AnyRule {
private:
    string actionDescription;
    int mechanismId;
    int numberOfSteps;
    AnyMechanism AnyMechanisms;

public:

//get the mechanism and store in the object so that they can be used later on to perform
    void constrain(AnyMechanism AnyMechanism)
    {
        AnyMechanisms = AnyMechanism.get();
    }
};

------------------------------------------------ - 
class AnyEntity {
private:
    int Entityid;
    string EntityDescription;
    AnyMechanisms AnyMechanisms;

public:
//apply the mechanism on the entity
    void apply(AnyMechanisms AnyMechanisms)
    {
        AnyMechanisms.getmechincid();
    }
};

------------------------------------------
class AnyImpact {
private:
    int threshold,
        string currentLevel;
    string impactDescription;
    AnyMechanism AnyMechanisms;

public:
//perform the impact ont he mechanism
    void perform(AnyMechanism AnyMechanism);
    AnyMechanisms = AnyMechanism;
};

------------------------
class AnyOutput {
private:
    string outputDescription
        AnyImpact AnyImpacts;
    AnyMechanism AnyMechanisms;

public:
    //to ge the output
    void get(AnyImpact AnyImpact)
    {
        AnyImpacts.perform(AnyMechanisms);
    }
	
	//guide for the output based on the impact
    void guide(AnyImpact AnyImpact)
    {
        AnyImpacts = AnyImpact;
    }
};
----------------------

class AnyTask {
private:
    int duration;
    int contextId;
    Intelligence Intelligence;
    AnyActor AnyActor;

public:
//task carried out on the inteligence
    void carriedOut(Intelligence i)
    {
    }
	
	//the actor who is involved in the task
    void do(AnyActor AnyActor)
    {
        AnyActor.apply(i);
    }
};
-------------- -