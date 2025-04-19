@class NSData;

@interface PHAssetPhotosInfoPanelLocationProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *placeAnnotationData;

+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
