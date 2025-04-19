@class NSArray, NSUUID, NSString, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface ICNanoPairedDeviceStatusMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callBackQueue;
    NSMapTable *_observers;
    NSString *_pairingIDPropertyName;
    NSString *_pairedDeviceGUID;
    NSString *_pairedDeviceMediaGUID;
}

@property (class, readonly, nonatomic) ICNanoPairedDeviceStatusMonitor *sharedMonitor;

@property (readonly, copy, nonatomic) NSArray *allPairedDevicePairingIDs;
@property (readonly, copy, nonatomic) NSArray *allPairedDeviceGUIDs;
@property (readonly, copy, nonatomic) NSUUID *activePairedDevicePairingID;
@property (readonly, copy, nonatomic) NSUUID *pairedDevicePairingID;
@property (readonly, copy, nonatomic) NSString *pairedDeviceGUID;
@property (readonly, copy, nonatomic) NSString *pairedDeviceMediaGUID;
@property (readonly, nonatomic) BOOL isInitialSyncComplete;
@property (readonly, nonatomic, getter=isMediaSyncingSupported) BOOL mediaSyncingSupported;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)_init;
- (void)addObserver:(id)a0;
- (id)_allObservers;

@end
