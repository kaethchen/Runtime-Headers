@interface ABCNContactStore : NSObject {
    id _reserved1;
}

@property (readonly) id /* block */ dataMapperProvider;

+ (id)defaultCountryCode;
+ (id)legacyMemoryBackedContactStore;
+ (id)memoryBackedContactStore;

- (void)dealloc;
- (id)init;
- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (id)distributionIdentifierForEmailAddressesOfContact:(id)a0 inGroup:(id)a1 error:(id *)a2;
- (id)initWithLegacySharedAddressBook;
- (id)makeObservableWithFetchRequest:(id)a0;
- (id)accountForContact:(id)a0;
- (id)accountForContactWithIdentifier:(id)a0;
- (id)accountsForContactsWithIdentifiers:(id)a0;
- (BOOL)addMember:(id)a0 toGroup:(id)a1 error:(id *)a2;
- (id)beginFetchRequest:(id)a0 withCompletionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (id)beginFetchRequest:(id)a0 withEnumerationBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (id)beginFetchRequest:(id)a0 withResultHandler:(id)a1;
- (id)beginFetchWithRequest:(id)a0;
- (id /* block */)contactComparatorByAccount;
- (id)contactWithIdentifier:(id)a0 error:(id *)a1;
- (id)contactWithIdentifier:(id)a0 unify:(BOOL)a1 error:(id *)a2;
- (id)contactsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)deleteContact:(id)a0 error:(id *)a1;
- (id)deprecated_executeFetchRequest:(id)a0 error:(id *)a1;
- (id)executeFetchRequest2:(id)a0 error:(id *)a1;
- (id)fetchContactsWithIdentifiers:(id)a0 unify:(BOOL)a1 error:(id *)a2;
- (id)fetchContactsWithLinkIdentifier:(id)a0 error:(id *)a1;
- (unsigned long long)fetchCountOfContactsWithLinkIdentifier:(id)a0 error:(id *)a1;
- (id)fetchIdentifierForMeCard:(id *)a0;
- (id)fetchIdentifiersForMeCards:(id *)a0;
- (id)fetchUnifiedContactWithLinkIdentifier:(id)a0 error:(id *)a1;
- (id)groupWithIdentifier:(id)a0 error:(id *)a1;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)initWithAddressBook:(id)a0;
- (id)initWithDataMapper:(id)a0;
- (id)initWithDataMapperProvider:(id /* block */)a0;
- (BOOL)isContactReadOnly:(id)a0;
- (id)makeDataMapper;
- (id)membersOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (id)photoForContact:(id)a0;
- (id)photoForContacts:(id)a0;
- (BOOL)saveContact:(id)a0 error:(id *)a1;
- (BOOL)saveContacts:(id)a0 error:(id *)a1;
- (BOOL)saveGroup:(id)a0 error:(id *)a1;
- (id)saveImmutableContact:(id)a0 error:(id *)a1;
- (BOOL)setImageData:(id)a0 onContact:(id)a1 error:(id *)a2;

@end
