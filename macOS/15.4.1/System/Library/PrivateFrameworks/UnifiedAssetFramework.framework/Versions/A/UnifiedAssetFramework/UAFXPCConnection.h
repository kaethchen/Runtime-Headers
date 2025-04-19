@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface UAFXPCConnection : NSObject <UAFXPCProxyService> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSString *_serviceName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)invalidate;
- (id)_connection;
- (void)_invalidate;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (oneway void)operationWithConfig:(id)a0 completion:(id /* block */)a1;
- (oneway void)checkAssetStatus:(id /* block */)a0;
- (oneway void)diagnosticInformation:(id /* block */)a0;
- (oneway void)diskSpaceNeededInBytesForLanguage:(id)a0 forClient:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)downloadDictationAssetsForLanguage:(id)a0;
- (oneway void)downloadSiriAssets;
- (oneway void)downloadSiriAssetsOverCellular;
- (oneway void)lockLatestAtomicInstance:(id)a0 completion:(id /* block */)a1;
- (oneway void)markAssetsExpired:(id)a0 completion:(id /* block */)a1;
- (oneway void)postAssetNotificationIfNeeded;
- (oneway void)postDictationAssetNotificationForLanguage:(id)a0;
- (void)subscriptionsForSubscriber:(id)a0 completion:(id /* block */)a1;

@end
