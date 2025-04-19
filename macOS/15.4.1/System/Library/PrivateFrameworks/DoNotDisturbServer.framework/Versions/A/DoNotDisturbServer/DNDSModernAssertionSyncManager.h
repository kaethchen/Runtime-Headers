@class NSString, NSMutableSet, DNDSModernAssertionSyncMetadataStore, DNDSClientDetailsProvider, NSObject;
@protocol OS_dispatch_source, OS_os_transaction, DNDSAssertionSyncManagerDataSource, OS_dispatch_queue, DNDSBackingStore, DNDSKeybagStateProviding, DNDSSyncService, DNDSAssertionSyncManagerDelegate;

@interface DNDSModernAssertionSyncManager : NSObject <DNDSSyncServiceDelegate, DNDSSysdiagnoseDataProvider, DNDSKeybagStateObserver, DNDSAssertionSyncManager> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fuzzTimer;
    id<DNDSSyncService> _localSyncService;
    id<DNDSSyncService> _cloudSyncService;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    DNDSModernAssertionSyncMetadataStore *_metadata;
    NSObject<DNDSBackingStore> *_metadataBackingStore;
    id<DNDSKeybagStateProviding> _keybag;
    NSMutableSet *_timerQueuedDevices;
    BOOL _timerQueuedForceUpdate;
    unsigned long long _timerCurrentDelay;
    NSObject<OS_os_transaction> *_timerQueuedTransaction;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timerLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (weak, nonatomic) id<DNDSAssertionSyncManagerDataSource> dataSource;
@property (weak, nonatomic) id<DNDSAssertionSyncManagerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)keybagDidUnlockForTheFirstTime:(id)a0;
- (void)updateDevices:(id)a0 force:(BOOL)a1 shouldFuzz:(BOOL)a2;
- (void)_loadMetadataFromBackingStore;
- (BOOL)_maintainMetadataBackingStore;
- (void)_queue_handleDidSendRequestIdentifier:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_queue_handleMessage:(id)a0 withVersionNumber:(unsigned long long)a1 fromDeviceIdentifier:(id)a2;
- (void)_queue_sendStateSnapshotToPairedDevices:(id)a0 force:(BOOL)a1;
- (void)_queue_updateDevices;
- (BOOL)_saveMetadataToBackingStore;
- (void)forceUpdateAllDevices;
- (id)initWithClientDetailsProvider:(id)a0 localSyncService:(id)a1 cloudSyncService:(id)a2 keybag:(id)a3;
- (void)syncService:(id)a0 didReceiveMessage:(id)a1 withVersionNumber:(unsigned long long)a2 messageType:(id)a3 fromDeviceIdentifier:(id)a4;
- (void)syncService:(id)a0 didSendWithRequestIdentifier:(id)a1 withSuccess:(BOOL)a2 error:(id)a3;
- (BOOL)syncService:(id)a0 shouldAcceptIncomingMessage:(id)a1 withVersionNumber:(unsigned long long)a2 messageType:(id)a3 fromDeviceIdentifier:(id)a4;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (id)sysdiagnoseDataIdentifier;
- (void)updateDevices:(id)a0;
- (void)updateForModeAssertionUpdateResult:(id)a0;

@end
