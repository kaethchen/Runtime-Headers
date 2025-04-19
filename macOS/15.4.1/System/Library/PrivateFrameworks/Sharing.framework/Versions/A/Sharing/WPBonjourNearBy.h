@class NSObject, SFBonjourNearBy, NSMutableDictionary;
@protocol OS_dispatch_queue, WPNearbyDelegate;

@interface WPBonjourNearBy : NSObject {
    SFBonjourNearBy *_sfBonjourNearBy;
    NSMutableDictionary *_advertiserNearbyTypesAdvData;
    NSMutableDictionary *_scannerNearbyTypesToScan;
    NSObject<OS_dispatch_queue> *_dispatch_queue;
    id<WPNearbyDelegate> _delegate;
}

@property (readonly) long long state;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)disconnectFromPeer:(id)a0;
- (void)startTrackingPeer:(id)a0 forType:(long long)a1;
- (void)stopAdvertisingOfType:(long long)a0;
- (void)stopScanningForType:(long long)a0;
- (void)stopTrackingPeer:(id)a0 forType:(long long)a1;
- (void)_listenForSFBonjourEvents;
- (void)clearDuplicatesForType:(long long)a0;
- (void)connectToPeer:(id)a0 withOptions:(id)a1;
- (void)sendData:(id)a0 toPeer:(id)a1;
- (void)startAdvertisingOfType:(long long)a0 data:(id)a1 priority:(long long)a2 mode:(long long)a3;
- (void)startAdvertisingOfType:(long long)a0 data:(id)a1 priority:(long long)a2 mode:(long long)a3 options:(id)a4;
- (void)startAdvertisingOfType:(long long)a0 withData:(id)a1;
- (void)startAdvertisingOfType:(long long)a0 withData:(id)a1 priority:(long long)a2;
- (void)startScanningForType:(long long)a0 data:(id)a1 mask:(id)a2 peers:(id)a3 scanMode:(long long)a4 rssi:(id)a5 duplicates:(BOOL)a6 scanCache:(BOOL)a7 useCaseList:(id)a8;

@end
