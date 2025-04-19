@class NSString, NSObject;
@protocol OS_os_log, AssetCacheServicesManagerProtocol, AssetCacheServicesManagerEventsProtocol, AssetCacheServicesManagerEventsProtocol_Private, OS_dispatch_queue;

@interface AssetCacheServicesManager : NSObject <AssetCacheServicesManagerObserverProtocol>

@property (retain) id<AssetCacheServicesManagerProtocol> proxy;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (weak) id<AssetCacheServicesManagerEventsProtocol> weakDelegate;
@property (weak) id<AssetCacheServicesManagerEventsProtocol_Private> weakPrivateDelegate;
@property (weak) NSObject<OS_dispatch_queue> *weakDelegateQueue;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)activate;
- (void)status;
- (void)deactivate;
- (void)settings;
- (void)setSettings:(id)a0;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)isActivated;
- (oneway void)notifyAboutActivationWithError:(id)a0;
- (id)_connectToManagerServiceWithCallback:(id /* block */)a0;
- (id)_makeDNSTXTRecordsForPublicRanges:(id)a0 validateAddresses:(BOOL)a1 error:(id *)a2;
- (void)canActivate;
- (void)flushCachePersonal:(BOOL)a0 shared:(BOOL)a1;
- (id)initWithDelegate:(id)a0 privateDelegate:(id)a1 delegateQueue:(id)a2;
- (void)launchAfterDelay:(double)a0;
- (id)makeDNSTXTRecordsForPublicRanges:(id)a0 error:(id *)a1;
- (oneway void)notifyAboutCompletedDataMigrationWithError:(id)a0;
- (oneway void)notifyAboutDataMigrationProgress:(double)a0;
- (oneway void)notifyAboutDeactivationWithError:(id)a0;
- (oneway void)notifyAboutUpdatedSettings:(id)a0;
- (oneway void)notifyAboutUpdatedStatus:(id)a0;

@end
