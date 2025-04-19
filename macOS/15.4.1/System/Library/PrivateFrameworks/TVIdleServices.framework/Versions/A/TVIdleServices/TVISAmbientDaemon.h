@class TVISAmbientXPCEventHandler, TVISAmbientServiceConnectionListener, TVISAmbientCacheDeleteHandler;

@interface TVISAmbientDaemon : NSObject

@property (readonly, nonatomic) TVISAmbientServiceConnectionListener *connectionListener;
@property (readonly, nonatomic) TVISAmbientCacheDeleteHandler *cacheDeleteHandler;
@property (readonly, nonatomic) TVISAmbientXPCEventHandler *xpcEventHandler;

+ (id)sharedInstance;
+ (id)_orderedPermittedServices;
+ (id)_orderedPhotoServices;
+ (id)_sharedAerialService;
+ (id)_sharedIdleCharacterService;
+ (id)_sharedMemoryService;
+ (id)_sharedPhotoService;
+ (id)_sharedPhotoSourcesService;
+ (id)_sharedPortraitClockService;
+ (id)_sharedRetailService;

- (void).cxx_destruct;
- (id)_init;
- (void)start;

@end
