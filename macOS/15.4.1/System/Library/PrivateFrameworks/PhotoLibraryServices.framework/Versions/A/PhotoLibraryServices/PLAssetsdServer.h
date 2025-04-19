@class PLPhotoLibraryBundleController, NSString, PLTCCObserver, NSXPCInterface, PLCacheDeleteRegistration, PFStateCaptureHandler, PLBackgroundJobService, NSMutableSet, PLDistributedNotificationHandler, NSXPCListener, PLXPCMessageLogger;
@protocol PLDaemonServices, PLPhotoLibraryDaemonService;

@interface PLAssetsdServer : NSObject <NSXPCListenerDelegate, PFStateCaptureProvider> {
    id<PLDaemonServices> _daemonServices;
    NSXPCListener *_listener;
    PLXPCMessageLogger *_connectionLogger;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _servicesLock;
    NSMutableSet *_services;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLBackgroundJobService *_backgroundJobService;
    PLDistributedNotificationHandler *_distributedNotificationHandler;
    PLTCCObserver *_tccObserver;
    NSXPCInterface *_assetsdInterface;
    PLCacheDeleteRegistration *_cacheDeleteRegistration;
    PFStateCaptureHandler *_stateHandler;
}

@property (nonatomic) int systemLibraryChangeToken;
@property (retain, nonatomic) id<PLPhotoLibraryDaemonService> syndicationSpotlightReceiver;
@property (retain, nonatomic) id<PLPhotoLibraryDaemonService> syndicationPreferencesListener;
@property (retain, nonatomic) id<PLPhotoLibraryDaemonService> searchSpotlightReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)handleInterruption:(id)a0;
- (void)addService:(id)a0;
- (void)removeService:(id)a0;
- (id)stateCaptureDictionary;
- (void)handleInvalidation:(id)a0;
- (void)_checkInWithLaunchd;
- (void)_collectCacheMetricsDataFromService:(id)a0;
- (void)_startObservingLocaleChanges;
- (void)_startObservingSystemLibraryChanges;
- (void)currentLocaleDidChangeNotification:(id)a0;
- (id)initWithDaemonServices:(id)a0;
- (void)logStatus;
- (void)stopObservingSystemLibraryChanges;

@end
