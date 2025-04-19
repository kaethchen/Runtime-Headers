@class TVISScreenSaverService, NSString, NSXPCConnection;

@interface TVISScreenSaverServiceConnection : NSObject <TVISScreenSaverServiceInterface>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) TVISScreenSaverService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (void)resume;
- (void)setPreferredLocalizations:(id)a0;
- (void)setServiceDelegate:(id)a0;
- (void)activateCategoryWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)activatePhotosSharingFilter:(id)a0 reply:(id /* block */)a1;
- (void)activatePhotosSourceFilter:(id)a0 reply:(id /* block */)a1;
- (void)activateScreenSaverType:(long long)a0 reply:(id /* block */)a1;
- (void)activateSubcategoryWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)deactivateCategoryWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)deactivateSubcategoryWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchNextDownloadableAssetsWithCount:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)fetchScreenSaverConfigurationWithReply:(id /* block */)a0;
- (id)forceDownloadAssetsWithIDs:(id)a0 reply:(id /* block */)a1;
- (void)removeUserWithReply:(id /* block */)a0;
- (void)setUserActiveCategoryIdentifiers:(id)a0 activeSubcategoryIdentifiers:(id)a1 pinnedAssetIdentifiers:(id)a2 reply:(id /* block */)a3;

@end
