@class NSString, NSArray, CNCDPersistenceContext, CNResult, CNCDContactFetchRequestDescription, NSObject, NSFetchRequest, CNCDMeContactFetcher;
@protocol OS_os_log;

@interface CNCDContactFetcher : NSObject <CNCDContactFetcherPredicateEvaluationContext> {
    CNCDMeContactFetcher *_meContactFetcher;
}

@property (readonly, nonatomic) CNCDContactFetchRequestDescription *fetchRequestDescription;
@property (readonly, nonatomic) CNCDPersistenceContext *persistenceContext;
@property (readonly, nonatomic) NSFetchRequest *fetchRequestPrototype;
@property (retain) CNResult *predicate;
@property (retain) CNResult *contactImpls;
@property (retain) CNResult *contacts;
@property (readonly) NSArray *allContainers;
@property (readonly) NSArray *exchangeAccountContainers;
@property (readonly) NSObject<OS_os_log> *os_log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (BOOL)isAddressingGrammarInaccessible;
+ (BOOL)areNotesInaccessible;
+ (BOOL)areNotesInaccessibleImpl;
+ (id)contactCountForFetchRequest:(id)a0 inPersistenceStack:(id)a1 error:(id *)a2;
+ (id)contactsForFetchRequest:(id)a0 inPersistenceStack:(id)a1 error:(id *)a2;
+ (id)fetchRequestPrototypeForDescription:(id)a0;
+ (id)inaccessibleKeys;
+ (BOOL)isAddressingGrammarInaccessibleImpl;
+ (id)keyVectorByRemovingInaccessibleKeysFromVector:(id)a0;
+ (id)predicateForExcludingHiddenContactsWithPredicate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)storesForContainers:(id)a0;
- (id)contactsFromCoreDataContacts:(id)a0;
- (id)convertContacts:(id)a0;
- (id)countContacts:(id *)a0;
- (id)faultContactIdsInFetchedContacts;
- (void)fetchContacts;
- (id)fetchContacts:(id *)a0;
- (id)fetchContactsWithPredicate:(id)a0;
- (id)fetchRequestWithPredicate:(id)a0;
- (id)individualContactsFromCoreDataContacts:(id)a0;
- (id)initWithFetchRequestDescription:(id)a0 persistenceContext:(id)a1;
- (void)mergeContactImpls:(id)a0;
- (id)pool_countContacts;
- (id)pool_fetchContacts;
- (void)postfilterContacts;
- (id)unifiedContactsFromCoreDataContacts:(id)a0;
- (void)validatePredicate;
- (void)withLockedContext_convertContactImplsToContacts;
- (void)withLockedContext_fetchContactImpls;
- (void)withLockedContext_forgetCoreDataObjects;

@end
