@class NSMapTable, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, TVISScreenSaverServiceInterface;

@interface TVISScreenSaverServiceProxy : NSObject <TVISScreenSaverServiceInterface>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id<TVISScreenSaverServiceInterface> remoteProxy;
@property (retain, nonatomic) id<TVISScreenSaverServiceInterface> synchronousRemoteProxy;
@property (readonly, nonatomic) NSMapTable *pendingReplies;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setPreferredLocalizations:(id)a0;
- (void)setServiceDelegate:(id)a0;
- (id)_setUpScreenSaverServiceConnection;
- (void)activateCategoryWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)activatePhotosSharingFilter:(id)a0 reply:(id /* block */)a1;
- (void)activatePhotosSourceFilter:(id)a0 reply:(id /* block */)a1;
- (void)activateScreenSaverType:(long long)a0 reply:(id /* block */)a1;
- (void)activateSubcategoryWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)deactivateCategoryWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)deactivateSubcategoryWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchNextDownloadableAssetsWithCount:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)fetchScreenSaverConfigurationSynchronously:(BOOL)a0 withReply:(id /* block */)a1;
- (void)fetchScreenSaverConfigurationWithReply:(id /* block */)a0;
- (id)forceDownloadAssetsWithIDs:(id)a0 reply:(id /* block */)a1;
- (void)handleConnectionInterruption:(id)a0;
- (void)removeUserWithReply:(id /* block */)a0;
- (void)setUserActiveCategoryIdentifiers:(id)a0 activeSubcategoryIdentifiers:(id)a1 pinnedAssetIdentifiers:(id)a2 reply:(id /* block */)a3;

@end
