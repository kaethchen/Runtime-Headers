@class NSNumber;

@interface PLAssetComputeSyncJournalEntryPayload : PLManagedObjectJournalEntryPayload

@property (readonly, nonatomic) long long sceneAnalysisVersion;
@property (readonly, nonatomic) long long imageEmbeddingVersion;
@property (readonly, nonatomic) long long videoEmbeddingVersion;
@property (readonly, nonatomic) long long faceAnalysisVersion;
@property (readonly, nonatomic) long long mediaAnalysisVersion;
@property (readonly, nonatomic) NSNumber *mediaAnalysisImageVersion;
@property (readonly, nonatomic) long long characterRecognitionVersion;
@property (readonly, nonatomic) long long visualSearchVersion;

+ (id)entityName;
+ (unsigned int)payloadVersion;
+ (id)payloadAdapterForManagedObject:(id)a0;
+ (id)modelProperties;
+ (id)detectedFacePropertiesDescription;
+ (id)mediaAnalysisAttributesPropertiesDictionary;
+ (id)modelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)sceneClassificationPropertiesDescription;
+ (void)setShouldIncludeOCR:(BOOL)a0;
+ (BOOL)shouldIncludeOCR;

- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3 payloadDictionary:(id)a4 info:(id)a5;

@end
