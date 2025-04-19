@class NSString, HMDApplicationInfo, NSData, HMFLocationAuthorization, RBSProcessHandle;

@interface HMDProcessInfo : HMFProcessInfo <HMFLogging> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
}

@property (class, readonly) NSData *privateClientIdentifierSalt;

@property (readonly, nonatomic) RBSProcessHandle *processHandle;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess;
@property (readonly, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess;
@property (readonly) unsigned long long state;
@property (readonly, getter=isForegrounded) BOOL foreground;
@property (readonly, getter=isBackgroundUpgradedToForeground) BOOL backgroundUpgradedToForeground;
@property (readonly, getter=isBackgrounded) BOOL background;
@property (readonly, getter=isSuspended) BOOL suspended;
@property (readonly, getter=isTerminated) BOOL terminated;
@property (readonly) BOOL shouldMonitor;
@property (readonly) HMDApplicationInfo *applicationInfo;
@property (readonly) HMFLocationAuthorization *locationAuthorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)locationAuthorizationFromEffectiveBundleIdentifier:(id)a0 processInfo:(id)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setState:(unsigned long long)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)_updateState:(unsigned long long)a0;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)clientIdentifierSalt:(id *)a0;

@end
