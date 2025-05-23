@interface PHAssetLibraryScopeProperties : PHAssetPropertySet

@property long long pl_shareState;
@property (readonly, nonatomic) short suggestedByClientType;
@property (readonly, nonatomic) BOOL assetIsInOnboardingPreviewState;
@property (readonly, nonatomic) BOOL assetIsInPhotosSuggestedPreviewState;
@property (readonly, nonatomic) BOOL assetIsPublishedToLibraryScope;
@property (readonly, nonatomic) BOOL assetManuallyAddedByUser;
@property (readonly, nonatomic) BOOL assetManuallyRejectedByUser;
@property (readonly, nonatomic) BOOL assetRejectedByCamera;
@property (readonly, nonatomic) BOOL assetRejectedByPhotosSuggester;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
