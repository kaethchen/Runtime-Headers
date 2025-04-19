@class NSString, NSSet;
@protocol PLJournalEntryPayloadID;

@interface PLDetectedFaceJournalEntryPayload : PLManagedObjectJournalEntryPayload <PLFaceRebuildDescription, PLCloudAssetPayloadRestorePayload>

@property (retain, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) double centerX;
@property (readonly, nonatomic) double centerY;
@property (readonly, nonatomic) double size;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isManual) BOOL manual;
@property (readonly, nonatomic, getter=isRepresentative) BOOL representative;
@property (readonly, nonatomic) int nameSource;
@property (readonly, nonatomic) int cloudNameSource;
@property (readonly, nonatomic, getter=isClusterRejected) BOOL clusterRejected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PLJournalEntryPayloadID> payloadID;
@property (readonly, nonatomic) NSSet *assetIdentifiers;
@property (readonly, nonatomic) unsigned long long assetIdentifierCount;
@property (readonly, nonatomic) long long assetIdentifierType;

+ (unsigned int)payloadVersion;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (double)bodyHeight;
- (id)additionalDescription;
- (double)bodyCenterX;
- (double)bodyCenterY;
- (double)bodyWidth;
- (id)detectionType;
- (int)faceAlgorithmVersion;
- (id)personUUID;
- (id)_insertDeferredRebuildFaceForPersonUUID:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (id)_insertDeferredRebuildFacesFromDataInManagedObjectContext:(id)a0;
- (id)_insertDetectedFaceWithAsset:(id)a0 inManagedObjectContext:(id)a1 checkExisting:(BOOL)a2;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (id)clusterRejectedPersonsUUIDs;
- (BOOL)insertFaceFromDataInManagedObjectContext:(id)a0 allowDeferred:(BOOL *)a1;
- (BOOL)insertWithAssets:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)isDeferrable;
- (BOOL)isKeyFace;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (id)rejectedPersonsUUIDs;
- (void)setLocalAssetIdentifierForCloudIdentifiers:(id)a0;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;

@end
