@class NSData, NSDate;

@interface PHAssetSceneAnalysisProperties : PHAssetPropertySet

@property (readonly, nonatomic) short sceneAnalysisVersion;
@property (readonly, nonatomic) NSDate *sceneAnalysisTimestamp;
@property (readonly, nonatomic) NSData *distanceIdentity;
@property (readonly, nonatomic) short privateEncryptedComputeAnalysisVersion;
@property (readonly, nonatomic) NSDate *privateEncryptedComputeAnalysisTimestamp;
@property (readonly, nonatomic) short privateEncryptedComputeLocationAnalysisVersion;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
