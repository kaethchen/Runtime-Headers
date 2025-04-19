@class HMDProcessInfo, NSString, NSDictionary, HMDXPCMessageCountTracker, HMDXPCMessageSendPolicyParameters, HMDXPCRequestTracker, NSObject;
@protocol OS_dispatch_queue, HMDXPCConnection, HMDXPCClientConnectionDelegate;

@interface HMDXPCClientConnection : HMFMessageTransport <HMFLogging, HMXPCServerMessageHandling> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) HMDXPCMessageCountTracker *messageCountTracker;
@property (readonly) HMDXPCRequestTracker *requestTracker;
@property (copy) NSDictionary *userInfo;
@property (readonly, copy) NSString *clientName;
@property (copy) NSString *logIdentifier;
@property unsigned long long state;
@property (copy, nonatomic) HMDXPCMessageSendPolicyParameters *sendPolicyParameters;
@property BOOL hasExternallyManagedActivation;
@property (weak) id<HMDXPCClientConnectionDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) Class principalClass;
@property (readonly, nonatomic) int clientPid;
@property (readonly, nonatomic) id<HMDXPCConnection> xpcConnection;
@property (retain) HMDProcessInfo *processInfo;
@property (readonly, nonatomic, getter=isActivated) BOOL activated;
@property (readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) BOOL authorizedForHomeDataAccess;
@property (readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) BOOL authorizedForMicrophoneAccess;
@property (readonly) unsigned long long entitlements;
@property (readonly, nonatomic, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess;
@property (readonly, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess;
@property (readonly, nonatomic, getter=isAuthorizedForLocationAccess) BOOL authorizedForLocationAccess;
@property (readonly, nonatomic, getter=isEntitledForBackgroundMode) BOOL entitledForBackgroundMode;
@property (readonly, nonatomic, getter=isEntitledForHomeLocationAccess) BOOL entitledForHomeLocationAccess;
@property (readonly, nonatomic, getter=isEntitledForCameraClipsAccess) BOOL entitledForCameraClipsAccess;
@property (readonly, nonatomic, getter=isEntitledForMultiUserSetupAccess) BOOL entitledForMultiUserSetupAccess;
@property (readonly, nonatomic, getter=isEntitledForShortcutsAutomationAccess) BOOL entitledForShortcutsAutomationAccess;
@property (readonly, nonatomic, getter=isEntitledToProvideAccessorySetupPayload) BOOL entitledToProvideAccessorySetupPayload;
@property (readonly, nonatomic, getter=isEntitledToProvideMatterSetupPayload) BOOL entitledToProvideMatterSetupPayload;
@property (readonly, nonatomic, getter=isEntitledForPersonManagerAccess) BOOL entitledForPersonManagerAccess;
@property (readonly, nonatomic, getter=isEntitledForWalletKeyAccess) BOOL entitledForWalletKeyAccess;
@property (readonly, nonatomic, getter=isEntitledForSecureAccess) BOOL entitledForSecureAccess;
@property (readonly, nonatomic, getter=isEntitledForStateDump) BOOL entitledForStateDump;
@property (readonly, nonatomic, getter=isEntitledForAssistantIdentifiers) BOOL entitledForAssistantIdentifiers;
@property (readonly, nonatomic, getter=isEntitledForHomeLocationFeedbackAccess) BOOL entitledForHomeLocationFeedbackAccess;
@property (readonly, getter=isPlatformBinary) BOOL platformBinary;
@property (readonly) unsigned long long inactiveUpdatingLevel;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property (readonly, nonatomic) unsigned long long homeManagerOptions;
@property (readonly, copy) NSDictionary *stateDump;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)entitlementsForConnection:(id)a0;

- (void)dealloc;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)shortDescription;
- (id)_displayName;
- (void)_invalidate;
- (void)deactivate;
- (void)handleMessage:(id)a0;
- (void)_start;
- (void)_deactivate;
- (BOOL)sendMessage:(id)a0 error:(id *)a1;
- (id)initWithConnection:(id)a0 queue:(id)a1;
- (id)attributeDescriptions;
- (void)updateUserInfo:(id)a0;
- (id)clientUUID;
- (void)handleMessage:(id)a0 responseHandler:(id /* block */)a1;
- (BOOL)canSendMessage:(id)a0;
- (void)_handleMessage:(id)a0 responseHandler:(id /* block */)a1;
- (void)initiateRefresh;
- (void)handleProcessStateDidChange;
- (id)initWithConnection:(id)a0 queue:(id)a1 messageCountTracker:(id)a2 requestTracker:(id)a3;
- (BOOL)isEntitledForModernMessaging;
- (void)notifyOfExternallyManagedActivation;
- (void)updateSendPolicyParameters:(id)a0;

@end
