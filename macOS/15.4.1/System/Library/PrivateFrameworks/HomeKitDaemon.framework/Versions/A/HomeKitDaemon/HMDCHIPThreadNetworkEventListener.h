@class NSString, HMDThreadResidentCommissioner;
@protocol HMDCHIPThreadNetworkEventListenerDelegate;

@interface HMDCHIPThreadNetworkEventListener : HMFObject <HMDThreadNetworkStateChangeObserver>

@property (retain) HMDThreadResidentCommissioner *threadResidentCommissioner;
@property BOOL pendingRadioStateChangeNotification;
@property long long threadNetworkNodeType;
@property long long threadNetworkConnectionState;
@property (weak, nonatomic) id<HMDCHIPThreadNetworkEventListenerDelegate> eventListenerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithThreadResidentCommissioner:(id)a0;
- (void)stopListeningForEvents;
- (void)threadBTCallStateChange:(id)a0;
- (void)threadNetworkStateChange:(id)a0;
- (void)threadPeripheralDeviceNodeTypeChange:(id)a0;
- (void)threadPreferredNetworkUpdated:(id)a0;
- (void)threadWakeOnDeviceConnectionStateChange:(id)a0;

@end
