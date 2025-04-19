@interface PXPlacesMapThumbnailLocationCurator : NSObject

@property (readonly, nonatomic) Class locationCuratorClass;
@property (readonly, nonatomic) unsigned long long curatedThumbnailsLimit;

- (id)init;
- (void).cxx_destruct;
- (id)curatedGeotaggableFromSet:(id)a0;
- (id)initWithLocationCuratorClass:(Class)a0 curatedThumbnailsLimit:(unsigned long long)a1;

@end
