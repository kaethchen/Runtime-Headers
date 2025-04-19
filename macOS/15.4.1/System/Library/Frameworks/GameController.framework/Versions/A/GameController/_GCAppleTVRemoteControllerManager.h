@class _GCHIDEventSubject, NSSet, NSMutableDictionary, NSString, NSObject, GCController;
@protocol OS_dispatch_queue, GCHIDSystemServiceProviding;

@interface _GCAppleTVRemoteControllerManager : NSObject <GCCurrentApplicationForegroundObserver, GCControllerCoalescingDelegate, GCDeviceSessionDeviceProvider> {
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_controllersQueue;
    BOOL _supportsMultipleRemotes;
    NSMutableDictionary *_controllersByRegistryID;
    GCController *_firstMicroGamepad;
    long long _currentMediaRemoteInputMode;
    GCController *__controller_genericBTRemote;
    id<GCHIDSystemServiceProviding> _hidServiceProviding;
    _GCHIDEventSubject *_hidEventSource;
    id _hidEventObservation;
}

@property (readonly, copy) NSSet *controllers;
@property (weak, nonatomic) GCController *firstMicroGamepad;
@property (readonly, nonatomic) NSMutableDictionary *controllersByUDID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *keyboards;
@property (readonly, copy) NSSet *mice;
@property (readonly, copy) NSSet *racingWheels;

- (id)init;
- (void).cxx_destruct;
- (void)handleHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)CBApplicationDidBecomeActive;
- (void)CBApplicationWillResignActive;
- (id)_legacy_controllers;
- (void)_legacy_publishController:(id)a0;
- (void)_legacy_unpublishController:(id)a0;
- (void)_onqueue_HIDServiceAdded:(id)a0;
- (void)_onqueue_HIDServiceRemoved:(id)a0;
- (void)_queue_removeController:(id)a0 registryID:(id)a1;
- (void)activateWithSession:(id)a0 environment:(id)a1;
- (void)addController:(id)a0;
- (void)awakeWithSession:(id)a0 environment:(id)a1;
- (BOOL)combineSiriRemoteHIDDevicesWithNewController:(id)a0 existingController:(id)a1;
- (int)connectedATVRemoteCount;
- (id)initWithDeviceSessionConfiguration:(id)a0 queue:(id)a1 environment:(id)a2;
- (void)invalidateWithSession:(id)a0 environment:(id)a1;
- (BOOL)isExistingController:(id)a0;
- (id)matchingHIDServiceAttributes;
- (void)removeCoalescedControllerComponent:(id)a0;
- (void)removeController:(id)a0;
- (void)removeController:(id)a0 registryID:(id)a1;
- (void)servicesDidChange:(id)a0 withAddedServices:(id)a1 removedServices:(id)a2;
- (void)storeController:(id)a0;

@end
