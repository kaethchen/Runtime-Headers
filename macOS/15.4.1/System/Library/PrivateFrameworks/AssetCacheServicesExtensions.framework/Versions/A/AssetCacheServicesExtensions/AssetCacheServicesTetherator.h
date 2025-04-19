@class NSString, NSObject;
@protocol OS_os_log, AssetCacheServicesTetheratorEventsProtocol, AssetCacheServicesTetheratorProtocol, OS_dispatch_queue;

@interface AssetCacheServicesTetherator : NSObject <AssetCacheServicesTetheratorErrorProtocol>

@property (retain) id<AssetCacheServicesTetheratorProtocol> proxy;
@property (weak) id<AssetCacheServicesTetheratorEventsProtocol> weakDelegate;
@property (weak) NSObject<OS_dispatch_queue> *weakDelegateQueue;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)isEnabled;
- (void)status;
- (void)disable;
- (void)enable;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)reportError:(id)a0;
- (id)_connectToTetheratorServiceWithCallback:(id /* block */)a0;
- (void)disableStandalone;
- (void)enableStandalone;
- (void)enableWithStartAddress:(id)a0 endAddress:(id)a1 cachingServerInfo:(id)a2;

@end
