@class NSString, _HMContext, HMMutableArray, NSUUID, NSSet, NSObject;
@protocol OS_dispatch_queue, HMSymptomsHandlerDelegate;

@interface HMSymptomsHandler : NSObject <HMFMessageReceiver, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSString *logIdentifier;
@property (readonly) HMMutableArray *currentSymptoms;
@property (retain, nonatomic) _HMContext *context;
@property (readonly, copy) NSUUID *uuid;
@property (copy, setter=setSFDeviceIdentifier:) NSUUID *sfDeviceIdentifier;
@property (readonly, copy) NSSet *symptoms;
@property (weak) id<HMSymptomsHandlerDelegate> delegate;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)symptomsHandlerUUIDFromAccessoryUUID:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_subscribe;
- (void)configure;
- (void)_callFixSessionAvailabilityUpdatedDelegate;
- (void)_callSymptomsUpdatedDelegate:(id)a0;
- (void)_handleSymptomStateUpdatedMessage:(id)a0;
- (void)_unsubscribe;
- (id)initWithAccessory:(id)a0;
- (id)initWithUUID:(id)a0 context:(id)a1 logIdentifier:(id)a2;
- (void)initiateFixWithCompletionHandler:(id /* block */)a0;

@end
