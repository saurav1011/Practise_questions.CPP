global class LeadProcessor implements Database.Batchable<sObject>, Database.Stateful 
    {
    global Integer count = 0;
    global Database.QueryLocator start(Database.BatchableContext A) 
    {
        return Database.getQueryLocator(
            'Select Id, LeadSource,Rating from lead'
            'Where Country = \'US\''
        );
    }
    global void execute(Database.BatchableContext A, List<lead> pb){
        List<lead> value = new List<lead>();
        for (lead v : pb) 
        {
            v.LeadSource='Web';
            v.Rating='Hot';
            value.add(v);
            count=count + 1;
        }
        update value;
    }
    global void finish (Database.BatchableContext A) {
        system.debug('count = '+count);
    }
}    