@class NSString, ABCNInMemoryState;

@interface ABCNInMemoryDataMapper : NSObject <ABCNDataMapper> {
    ABCNInMemoryState *_state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addContact:(id)a0 withState:(id)a1;
+ (void)removeContact:(id)a0 withState:(id)a1;

- (void)dealloc;
- (id)init;
- (id)state;
- (id)fetchAllGroups:(id *)a0;
- (id)accountForContactWithIdentifier:(id)a0;
- (id)accountsForContactsWithIdentifiers:(id)a0;
- (BOOL)addContact:(id)a0;
- (void)addGroup:(id)a0;
- (void)executeSaveTransactionWithBlock:(id /* block */)a0;
- (id)fetchContactsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)fetchContactsWithIdentifiers:(id)a0 error:(id *)a1;
- (id)fetchContactsWithLinkIdentifier:(id)a0 error:(id *)a1;
- (id)fetchDistributionListIdentifierWithProperty:(id)a0 contactIdentifier:(id)a1 groupIdentifier:(id)a2;
- (id)fetchGroupsMatchingPredicate:(id)a0 error:(id *)a1;
- (void)fetchGroupsMatchingPredicate:(id)a0 withObserver:(id)a1;
- (id)fetchIdentifierForMeCard:(id *)a0;
- (id)fetchIdentifiersForMeCards:(id *)a0;
- (id)groupsMatchingPredicate:(id)a0;
- (void)modifyStateWithBlock:(id /* block */)a0;
- (void)setIdentifierForMeCard:(id)a0;

@end
