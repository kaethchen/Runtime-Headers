@class NSString, NSArray, NSURL, NSSet, NSMutableSet, NSMutableDictionary;

@interface PLJournalManagerCore : NSObject {
    NSString *_name;
    NSURL *_baseURL;
    NSURL *_historyTokenURL;
    NSMutableSet *_payloadClassIDs;
    NSMutableDictionary *_payloadClassesByEntityName;
    NSMutableDictionary *_payloadClassesByAdditionalEntityName;
    NSMutableDictionary *_payloadClassesByPayloadClassID;
}

@property (readonly) NSString *name;
@property (readonly) NSURL *baseURL;
@property (readonly) NSURL *historyTokenURL;
@property (readonly) NSArray *payloadClasses;
@property (readonly) NSSet *payloadClassIDs;

- (id)init;
- (void).cxx_destruct;
- (id)_nextValidPayloadWithObjectEnumerator:(id)a0 changedKeys:(id)a1 payloadClass:(Class)a2;
- (id)_objectEnumeratorForJournal:(id)a0 usingManagedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)appendSnapshotWithJournal:(id)a0 usingManagedObjectContext:(id)a1 changedKeys:(id)a2 entryLimit:(unsigned long long)a3 error:(id *)a4;
- (BOOL)createSnapshotWithJournal:(id)a0 createOnlyIfNecessary:(BOOL)a1 usingManagedObjectContext:(id)a2 entryLimit:(unsigned long long)a3 error:(id *)a4;
- (id)initWithName:(id)a0 baseURL:(id)a1 payloadClasses:(id)a2;
- (Class)payloadClassForPayloadClassID:(id)a0;
- (id)payloadClassesForAdditionalEntityName:(id)a0;
- (id)payloadClassesForEntityName:(id)a0;
- (id)readHistoryTokenWithError:(id *)a0;
- (void)removeHistoryToken;
- (BOOL)saveHistoryToken:(id)a0 error:(id *)a1;
- (void)validatePayloadClassesForManagedObjectModel:(id)a0;

@end
