@interface PLAmbientSuggestionComputeJournalEntryPayload : PLSuggestionComputeJournalEntryPayload

+ (unsigned int)payloadVersion;
+ (id)payloadAdapterForManagedObject:(id)a0;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)payloadClassID;
+ (id)snapshotSortDescriptors;
+ (id)supportedSuggestionTypes;

@end
