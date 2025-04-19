@class NSManagedObject;

@interface PLJournalEntryPayloadUpdateAdapter : NSObject <PLJournalEntryPayloadUpdateAdapter> {
    NSManagedObject *_managedObject;
}

- (void).cxx_destruct;
- (id)initWithManagedObject:(id)a0;
- (id)sourceObject;
- (BOOL)isValidForJournalPersistence;
- (id)managedObject;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (id)payloadsForChangedKeys:(id)a0;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
