@class NSString, ABAddressBook;

@interface ABCNLegacyAddressBookDataMapper : NSObject <ABCNDataMapper, ABCNDataMapperSaveTransaction> {
    ABAddressBook *_addressBook;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyContact:(id)a0 toABPerson:(id)a1 inAddressBook:(id)a2;
+ (id)executeAddedPeople:(id)a0 inAddressBook:(id)a1;
+ (id /* block */)executeAddedPerson:(id)a0 inAddressBook:(id)a1 accountIdentifier:(id)a2;
+ (id /* block */)executeDeletedContact:(id)a0 inAddressBook:(id)a1 usingPreparedCollection:(id)a2;
+ (id /* block */)executeUpdatedContacts:(id)a0 inAddressBook:(id)a1;
+ (id)fetchRequestForGroups;
+ (id)nts_fetchGroupsWithCoreDataRequest:(id)a0 inContext:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)accountForContactWithIdentifier:(id)a0;
- (id)accountsForContactsWithIdentifiers:(id)a0;
- (void)addContacts:(id)a0 withSaveResponse:(id)a1;
- (void)addGroup:(id)a0 toAccountWithIdentifier:(id)a1 withSaveResponse:(id)a2;
- (void)addGroups:(id)a0 withSaveResponse:(id)a1;
- (void)clearMeCardIdentifierWithSaveResponse:(id)a0;
- (BOOL)commitChangesWithSaveResponse:(id)a0 error:(id *)a1;
- (void)deleteContacts:(id)a0 withSaveResponse:(id)a1;
- (void)deleteGroups:(id)a0 withSaveResponse:(id)a1;
- (void)executeSaveTransactionWithBlock:(id /* block */)a0;
- (id)fetchContactsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)fetchContactsWithIdentifiers:(id)a0 error:(id *)a1;
- (id)fetchContactsWithIdentifiers:(id)a0 unify:(BOOL)a1 error:(id *)a2;
- (id)fetchContactsWithLinkIdentifier:(id)a0 error:(id *)a1;
- (unsigned long long)fetchCountOfContactsWithLinkIdentifier:(id)a0 error:(id *)a1;
- (id)fetchDistributionListIdentifierWithProperty:(id)a0 contactIdentifier:(id)a1 groupIdentifier:(id)a2;
- (id)fetchGroupsMatchingPredicate:(id)a0 error:(id *)a1;
- (void)fetchGroupsMatchingPredicate:(id)a0 withObserver:(id)a1;
- (id)fetchGroupsWithCoreDataRequest:(id)a0 error:(id *)a1;
- (id)fetchIdentifierForMeCard:(id *)a0;
- (id)fetchIdentifiersForMeCards:(id *)a0;
- (id)initWithAddressBook:(id)a0;
- (BOOL)isContactReadOnly:(id)a0;
- (id)photoForContact:(id)a0;
- (id)photoForContacts:(id)a0;
- (BOOL)setImageData:(id)a0 onContact:(id)a1 error:(id *)a2;
- (void)setMeCardIdentifier:(id)a0 withSaveResponse:(id)a1;
- (void)updateContacts:(id)a0 withSaveResponse:(id)a1;
- (void)updateGroup:(id)a0 withSaveResponse:(id)a1;
- (void)updateGroups:(id)a0 withSaveResponse:(id)a1;

@end
