@class geo_isolater, NSString, GEOActiveTileGroup, NSMutableDictionary, GEOXPCConnection, NSObject, GEOResourceManifestConfiguration;
@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {
    GEOXPCConnection *_xpcConnection;
    BOOL _hasOpenConnection;
    BOOL _isUpdatingManifest;
    BOOL _isLoadingResources;
    NSObject<OS_dispatch_queue> *_serverQueue;
    GEOResourceManifestConfiguration *_configuration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _authTokenLock;
    NSString *_authToken;
    int _activeTileGroupChangedNotificationToken;
    geo_isolater *_maximumZoomLevelIsolation;
    NSMutableDictionary *_maximumZoomLevelCache;
    double _lastMessageTimestamp;
}

@property (weak, nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;
@property (readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)configuration;
- (id)authToken;
- (void)closeConnection;
- (void)openConnection;
- (void)getResourceManifestWithHandler:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 configuration:(id)a1;
- (void)_handleMessage:(id)a0 xpcMessage:(id)a1;
- (void)activateResourceName:(id)a0;
- (void)activateResourceScale:(int)a0;
- (void)activateResourceScenario:(int)a0;
- (void)cancelCurrentManifestUpdate;
- (void)deactivateResourceName:(id)a0;
- (void)deactivateResourceScale:(int)a0;
- (void)deactivateResourceScenario:(int)a0;
- (void)forceUpdate:(long long)a0 completionHandler:(id /* block */)a1;
- (unsigned int)maximumZoomLevelForStyle:(int)a0 scale:(int)a1 outSize:(int *)a2;
- (void)performOpportunisticResourceLoading;
- (oneway void)resetActiveTileGroup;
- (id)serverQueue;
- (oneway void)setActiveTileGroupIdentifier:(id)a0;
- (void)setActiveTileGroupIdentifier:(id)a0 updateType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)setManifestToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateIfNecessary:(id /* block */)a0;
- (id)updateProgress;

@end
