@interface PHAssetStoryPlaybackProperties : PHAssetPropertySet

@property (readonly, nonatomic) BOOL hasPeopleSceneMidOrGreaterConfidence;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
