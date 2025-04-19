@class NSMapTable;

@interface DADREMLocalDBWatcher : NSObject {
    NSMapTable *_concernedRemindersPartyToBlockMap;
}

+ (id)sharedDBWatcher;

- (id)init;
- (void).cxx_destruct;
- (void)registerConcernedRemindersParty:(id)a0 withChangedBlock:(id /* block */)a1;
- (void)remindersDatabaseDidChange;
- (void)removeConcernedRemindersParty:(id)a0;

@end
