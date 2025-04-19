@class NSData, NSError;

@interface ChronoCore.ToolServicesServer : NSObject <CHSToolServiceServerInterface, BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ timelineService;
    void /* unknown type, empty encoding */ taskService;
    void /* unknown type, empty encoding */ extensionService;
    void /* unknown type, empty encoding */ descriptorService;
    void /* unknown type, empty encoding */ stateCaptureService;
    void /* unknown type, empty encoding */ widgetHostService;
    void /* unknown type, empty encoding */ controlHostService;
    void /* unknown type, empty encoding */ liveControlService;
    void /* unknown type, empty encoding */ liveControlCacheManager;
    void /* unknown type, empty encoding */ livePlaceholderControlCacheManager;
    void /* unknown type, empty encoding */ previewControlService;
    void /* unknown type, empty encoding */ previewControlCacheManager;
    void /* unknown type, empty encoding */ timelineCacheManager;
    void /* unknown type, empty encoding */ placeholderCacheManager;
    void /* unknown type, empty encoding */ snapshotCacheManager;
    void /* unknown type, empty encoding */ keybagStateProvider;
    void /* unknown type, empty encoding */ rendererSessionProvider;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ connectionListener;
    void /* unknown type, empty encoding */ clientConnections;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)allCachedSnapshotURLsWithCompletion:(id /* block */)a0;
- (void)contentURLForActivityID:(id)a0 completion:(id /* block */)a1;
- (void)expireLocationGracePeriods;
- (void)extensionInfoForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)extensionInfoWithCompletion:(id /* block */)a0;
- (void)fetchStateForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchStateWithCompletion:(id /* block */)a0;
- (void)fetchWidgetSceneInfoWithCompletion:(void (^)(NSData *, NSError *))a0;
- (void)listStateCaptureIdentifiersWithCompletion:(id /* block */)a0;
- (void)refreshDescriptorsForExtensionBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)reloadControlsOfKind:(id)a0 containedIn:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (void)reloadTimelinesOfKind:(id)a0 containedIn:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (void)resetCaches:(id)a0 completion:(id /* block */)a1;
- (void)runMigrationReaper;
- (void)runReaper;
- (void)timelineForWidgetKey:(id)a0 completion:(id /* block */)a1;
- (void)widgetsWithTimelines:(id /* block */)a0;

@end
