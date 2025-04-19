@class NSString, NSArray, NSDate, PHAssetCollection;
@protocol _PXSharedLibrarySharingSuggestionContainer, PXDisplayCollection, PXDisplayAsset;

@interface PXSharedLibrarySharingSuggestionPromise : NSObject <PXSharedLibrarySharingSuggestion>

@property (readonly, nonatomic) NSDate *considerNewAfterDate;
@property (readonly, nonatomic) NSDate *suggestedDate;
@property (readonly, nonatomic) id<_PXSharedLibrarySharingSuggestionContainer> container;
@property (readonly, nonatomic) PHAssetCollection *containerCollection;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) id<PXDisplayCollection> displayCollection;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) BOOL isNew;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNewWithSuggestedDate:(id)a0 considerNewAfterDate:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)markAsRead;
- (void)_fulfill;
- (void)_loadLightweightProperties;
- (void)_updateIsNew;
- (id)copyIfNeededWithUpdatedConsiderNewAfterDate:(id)a0;
- (id)fetchAssetCollections;
- (id)initWithContainer:(id)a0 considerNewAfterDate:(id)a1 lightweightPlaceholder:(BOOL)a2;
- (id)initWithPromise:(id)a0 considerNewAfterDate:(id)a1;

@end
