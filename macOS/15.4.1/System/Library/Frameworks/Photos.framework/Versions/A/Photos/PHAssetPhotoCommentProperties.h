@interface PHAssetPhotoCommentProperties : PHAssetPropertySet

@property (readonly, nonatomic) unsigned long long commentCount;
@property (readonly, nonatomic) unsigned long long likeCount;
@property (readonly, nonatomic) BOOL hasUserLiked;
@property (readonly, nonatomic) BOOL cloudIsMyAsset;
@property (readonly, nonatomic) BOOL cloudHasCommentsByMe;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (BOOL)isToMany;
+ (id)propertySetName;
+ (BOOL)createsPropertySetObjectWithCustomImplementation;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
