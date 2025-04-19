@class NSString, DNDMeDeviceState, NSMutableSet, _TtC18DoNotDisturbServer19FindMyLocateSession, NSObject, DNDSMeDeviceStore;
@protocol OS_dispatch_queue, DNDSBackingStore;

@interface DNDSMeDeviceService : NSObject <DNDSSysdiagnoseDataProvider> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _TtC18DoNotDisturbServer19FindMyLocateSession *_findMyLocateSession;
    DNDMeDeviceState *_meDeviceState;
    NSMutableSet *_listeners;
    DNDSMeDeviceStore *_store;
    id<DNDSBackingStore> _backingStore;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _storeLock;
}

@property (readonly, copy, nonatomic) DNDMeDeviceState *meDeviceState;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)_loadDataFromBackingStore;
- (void)_queue_fetchMeDevice;
- (void)_queue_processMeDevice:(id)a0 error:(id)a1;
- (BOOL)_queue_saveDataToBackingStoreWithError:(id *)a0;
- (BOOL)_saveDataToBackingStoreWithError:(id *)a0;
- (void)startMonitoringMeDeviceChanges;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (id)sysdiagnoseDataIdentifier;

@end
