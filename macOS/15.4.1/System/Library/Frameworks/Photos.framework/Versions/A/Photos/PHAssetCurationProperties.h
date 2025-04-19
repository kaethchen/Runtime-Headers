@class NSString, NSArray, NSData, NSDate;

@interface PHAssetCurationProperties : PHAssetPropertySet {
    NSData *_objectSaliencyRectsData;
    NSArray *_cachedObjectSaliencyRects;
}

@property (readonly, nonatomic) NSString *importedByBundleIdentifier;
@property (readonly, nonatomic) NSString *importedByDisplayName;
@property (readonly, nonatomic) NSDate *addedDate;
@property (readonly, nonatomic) float interestingSubjectScore;
@property (readonly, nonatomic) float behavioralScore;
@property (readonly, nonatomic) float semanticScore;
@property (readonly, nonatomic) float interactionScore;
@property (readonly, nonatomic) NSDate *lastSharedDate;
@property (readonly, nonatomic) NSArray *objectSaliencyRects;
@property (readonly, nonatomic) NSString *syndicationIdentifier;
@property (readonly, nonatomic) BOOL isDetectedScreenshot;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (void).cxx_destruct;
- (float)_semanticScoreFromBehavioralScore:(double)a0;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
