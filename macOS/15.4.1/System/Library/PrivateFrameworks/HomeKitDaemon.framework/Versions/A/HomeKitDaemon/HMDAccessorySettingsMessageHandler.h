@class HMFMessageDispatcher, NSUUID, NSString, NSObject;
@protocol OS_dispatch_queue, HMDAccessorySettingsMessageController;

@interface HMDAccessorySettingsMessageHandler : HMFObject <HMDAccessorySettingsMessageHandler, HMFLogging, HMFMessageReceiver>

@property (readonly, weak) id<HMDAccessorySettingsMessageController> messageController;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)messageBindingsForDispatcher:(id)a0;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)configureWithMessageDispatcher:(id)a0;
- (BOOL)_decodeUpdateValueMessagePayload:(id)a0 outValue:(id *)a1;
- (void)_handleAddConstraint:(id)a0;
- (void)_handleRemoveConstraint:(id)a0;
- (void)_handleReplaceConstraints:(id)a0;
- (void)_handleReplaceConstraintsForKeyPath:(id)a0;
- (void)_handleSettingUpdateValue:(id)a0;
- (void)_handleSettingUpdateValueByKeyPath:(id)a0;
- (void)_handleUpdatedConstraints:(id)a0;
- (void)notifyOfUpdatedValue:(id)a0 settingKeyPath:(id)a1;
- (BOOL)processReplaceConstraintMessage:(id)a0 outConstraintsToAdd:(id *)a1 outConstraintIdsToRemove:(id *)a2;
- (void)relayReplaceConstraints:(id)a0 constraintIdsToRemove:(id)a1 keyPath:(id)a2 destination:(id)a3 completion:(id /* block */)a4;
- (void)relayUpdateValue:(id)a0 keyPath:(id)a1 destination:(id)a2 completion:(id /* block */)a3;

@end
