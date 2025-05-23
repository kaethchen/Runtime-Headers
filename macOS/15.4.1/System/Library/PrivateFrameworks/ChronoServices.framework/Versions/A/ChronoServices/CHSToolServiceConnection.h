@class NSString, NSMutableSet, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CHSToolServiceConnection : NSObject <CHSToolServiceClient> {
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnection *_queue_connection;
    NSMutableSet *_queue_clients;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)_queue_removeClient:(id)a0;
- (void)_queue_addClient:(id)a0;
- (void)_queue_createConnection;
- (void)_queue_invalidateConnection;
- (id)_queue_remoteTarget;
- (void)allCachedSnapshotURLsWithCompletion:(id /* block */)a0;
- (oneway void)contentURLForActivityID:(id)a0 completion:(id /* block */)a1;
- (oneway void)expireLocationGracePeriods;
- (oneway void)extensionInfo:(id /* block */)a0;
- (oneway void)extensionInfoForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchStateForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchStateWithCompletion:(id /* block */)a0;
- (oneway void)fetchWidgetSceneInfoWithCompletion:(id /* block */)a0;
- (oneway void)listStateCaptureIdentifiersWithCompletion:(id /* block */)a0;
- (oneway void)refreshDescriptorsForExtensionBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)reloadControlsOfKind:(id)a0 containedIn:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (oneway void)reloadTimelinesOfKind:(id)a0 containedIn:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (oneway void)resetCaches:(unsigned long long)a0 completion:(id /* block */)a1;
- (oneway void)runMigrationReaper;
- (oneway void)runReaper;
- (oneway void)timelineForWidgetKey:(id)a0 completion:(id /* block */)a1;
- (oneway void)widgetsWithTimelines:(id /* block */)a0;

@end
