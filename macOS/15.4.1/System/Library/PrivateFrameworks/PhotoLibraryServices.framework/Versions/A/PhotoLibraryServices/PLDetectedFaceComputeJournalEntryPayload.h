@interface PLDetectedFaceComputeJournalEntryPayload : PLDetectedFaceJournalEntryPayload

+ (id)entityName;
+ (unsigned int)payloadVersion;
+ (id)payloadAdapterForManagedObject:(id)a0;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (BOOL)insertWithAssets:(id)a0 inManagedObjectContext:(id)a1;

@end
