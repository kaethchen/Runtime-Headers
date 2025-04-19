@class NSArray, NSDate;

@interface SUOSUCloudDeviceManager : NSObject

@property (retain) NSArray *cachedDevices;
@property (retain) NSDate *cacheDate;
@property (readonly) NSArray *devices;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_productNameForModel:(id)a0;

@end
