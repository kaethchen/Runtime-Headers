@class NSString, NSArray, NSDate;

@interface SSPhotosResultBuilder : SSResultBuilder

@property (nonatomic) BOOL isSyndicated;
@property (retain, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSString *photosDescription;
@property (retain, nonatomic) NSString *photoIdentifier;
@property (retain, nonatomic) NSArray *classificationLabels;
@property (retain, nonatomic) NSArray *classificationLabelSynonyms;
@property (retain, nonatomic) NSArray *locationKeywords;
@property (retain, nonatomic) NSArray *classificationLabelIndices;
@property (retain, nonatomic) NSArray *classificationLabelSynonymIndices;
@property (retain, nonatomic) NSArray *locationKeywordIndices;
@property (retain, nonatomic) NSArray *peopleInPhoto;
@property (retain, nonatomic) NSArray *matchedPeople;
@property (retain, nonatomic) NSArray *scenePhotoIdentifiers;
@property (retain, nonatomic) NSArray *photoSceneTypes;
@property (retain, nonatomic) NSArray *sceneSynonymsIndex;
@property (retain, nonatomic) NSArray *sceneSynonymsCounts;
@property (retain, nonatomic) NSArray *sceneLabelsIndex;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;
+ (BOOL)supportsResult:(id)a0;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)initWithResult:(id)a0;
- (id)scenes;
- (id)buildDescriptions;
- (id)buildDetailedRowCardSection;
- (id)buildImageCardSection;
- (id)buildOneUpCommand;
- (id)buildPreviewCommand;
- (id)buildResult;
- (id)buildThumbnail;
- (id)createSceneFrom:(id)a0;
- (id)getValidStringFromArray:(id)a0 withMatchedIndices:(id)a1;
- (int)sfSceneTypeFrom:(long long)a0;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
