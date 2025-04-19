@class _GCHIDEventSubject, NSSet, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, GCHIDSystemServiceProviding;

@interface _GCSimulatorControllerManager : NSObject <GCDeviceSessionDeviceProvider> {
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id<GCHIDSystemServiceProviding> _hidServiceProviding;
    _GCHIDEventSubject *_hidEventSource;
    NSMutableDictionary *_controllers;
}

@property (readonly, copy) NSSet *controllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *keyboards;
@property (readonly, copy) NSSet *mice;
@property (readonly, copy) NSSet *racingWheels;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithSession:(id)a0 environment:(id)a1;
- (void)awakeWithSession:(id)a0 environment:(id)a1;
- (id)initWithDeviceSessionConfiguration:(id)a0 queue:(id)a1 environment:(id)a2;
- (void)invalidateWithSession:(id)a0 environment:(id)a1;
- (id)matchingHIDServiceAttributes;
- (void)servicesDidChange:(id)a0 withAddedServices:(id)a1 removedServices:(id)a2;

@end
