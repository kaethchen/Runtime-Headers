@interface PLSocialGroupJournalEntryPayload : PLManagedObjectJournalEntryPayload

+ (id)entityName;
+ (unsigned int)payloadVersion;
+ (id)payloadAdapterForManagedObject:(id)a0;
+ (id)modelProperties;
+ (id)fetchPredicateInContext:(id)a0;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;
+ (void)validatePayloadPropertiesForManagedObjectModel:(id)a0;

- (long long)keyAssetPickSource;
- (short)socialGroupVerifiedType;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (id)insertSocialGroupInManagedObjectContext:(id)a0;
- (id)keyAssetUUID;
- (id)memberPersonUUIDs;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withSourceObject:(id)a2 forPayloadProperty:(id)a3;

@end
