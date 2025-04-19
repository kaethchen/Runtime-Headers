@class NSArray, NSDictionary, NSMutableArray, ABAddressBook;

@interface ABMergePeopleCommand : ABBookUndoableCommand {
    ABAddressBook *_addressBook;
    NSArray *_initialPeople;
    BOOL ignoresGuardianRestrictions;
}

@property (copy) NSDictionary *snapshotBefore;
@property (copy) NSDictionary *snapshotAfter;
@property (copy) NSArray *resultingPeopleUIDs;
@property (readonly) NSMutableArray *resultingPeople;

- (void)dealloc;
- (void)execute;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)clearResultingPeople;
- (void)deleteResultingPeople;
- (void)executeRedo;
- (void)executeUndo;
- (BOOL)ignoresGuardianRestrictions;
- (id)initWithPeople:(id)a0 addressBook:(id)a1;
- (id)makePersonFromDictionary:(id)a0 inStoreAtURL:(id)a1;
- (id)makeSnapshotOfPeople:(id)a0;
- (void)mergePeopleIntoFirstPerson:(id)a0;
- (void)mergePeopleWithinEachAccount;
- (id)recreatePeople:(id)a0 inStoreAtURL:(id)a1;
- (void)recreatePeopleFromSnapshot:(id)a0;
- (void)rememberResultingUIDs;

@end
