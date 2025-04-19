@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface ICCompatibilityController : NSObject

@property (class, readonly, nonatomic) ICCompatibilityController *sharedController;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSArray *fakeDevices;
@property (nonatomic) BOOL fakesIncompatibleDevicesForDebugging;

- (id)init;
- (void).cxx_destruct;
- (void)cacheDevices:(id)a0 forAccount:(id)a1;
- (id)cachedDevicesDateForAccount:(id)a0;
- (id)cachedDevicesForAccount:(id)a0;
- (void)clearCachedDevicesForAccount:(id)a0;
- (void)devicesForAccount:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchDevicesForAccount:(id)a0;
- (void)messageForAccount:(id)a0 minimumNotesVersion:(long long)a1 completionHandler:(id /* block */)a2;

@end
