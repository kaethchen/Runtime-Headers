@class NSString, NSSet, NSMutableSet, NSDictionary;
@protocol PLJournalEntryPayloadID;

@interface PLMemoryComputeJournalEntryPayload : PLManagedObjectJournalEntryPayload <PLCloudAssetPayloadRestorePayload> {
    NSMutableSet *_allAssetIdentifiers;
    NSDictionary *_localAssetIdentifierForCloudIdentifiers;
}

@property (readonly, nonatomic) NSString *keyAssetUUID;
@property (readonly, nonatomic) NSSet *extendedCuratedAssetUUIDs;
@property (readonly, nonatomic) NSSet *representativeAssetUUIDs;
@property (retain, nonatomic) NSSet *curatedAssetUUIDs;
@property (readonly, nonatomic) id<PLJournalEntryPayloadID> payloadID;
@property (readonly, nonatomic) NSSet *assetIdentifiers;
@property (readonly, nonatomic) unsigned long long assetIdentifierCount;
@property (readonly, nonatomic) long long assetIdentifierType;

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

- (void).cxx_destruct;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (id)_allAssetUUIDs;
- (id)_memoryInManagedObjectContext:(id)a0 error:(id *)a1;
- (id)_remapToLocalIdentifiersForCloudIdentifiers:(id)a0;
- (void)_setAsset:(id)a0 forPayloadProperty:(id)a1 payloadAttributes:(id)a2 andNilAttributes:(id)a3;
- (void)_setAssets:(id)a0 forPayloadProperty:(id)a1 payloadAttributes:(id)a2 andNilAttributes:(id)a3;
- (void)_updateMemory:(id)a0 withAssets:(id)a1;
- (BOOL)insertWithAssets:(id)a0 inManagedObjectContext:(id)a1;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (void)setLocalAssetIdentifierForCloudIdentifiers:(id)a0;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;

@end
