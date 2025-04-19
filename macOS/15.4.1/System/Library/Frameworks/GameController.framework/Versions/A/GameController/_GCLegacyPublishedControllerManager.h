@class NSSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _GCLegacyPublishedControllerManager : NSObject <GCDeviceSessionDeviceProvider> {
    NSObject<OS_dispatch_queue> *_sessionQueue;
}

@property (readonly, copy) NSSet *controllers;
@property (readonly, copy) NSSet *keyboards;
@property (readonly, copy) NSSet *mice;
@property (readonly, copy) NSSet *racingWheels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)activateWithSession:(id)a0 environment:(id)a1;
- (id)initWithDeviceSessionConfiguration:(id)a0 queue:(id)a1 environment:(id)a2;
- (void)invalidateWithSession:(id)a0 environment:(id)a1;

@end
