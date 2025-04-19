@class HMHome, NSUUID, NSString, HMMediaSystem, HMFActivity, HMMutableArray, NSArray, _HMContext;

@interface HMMediaSystemBuilder : NSObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) _HMContext *context;
@property (readonly) HMFActivity *activity;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *mediaSystemUUID;
@property (retain, nonatomic) NSString *builderSessionID;
@property (readonly, weak, nonatomic) HMHome *home;
@property (copy, nonatomic) NSUUID *setupSessionIdentifier;
@property (readonly, nonatomic) HMMediaSystem *mediaSystem;
@property (readonly, nonatomic) HMMutableArray *componentsArray;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSArray *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)canSupportMediaSystem:(id)a0;
+ (BOOL)isStereoPairingSupportedForAccessories:(id)a0;
+ (BOOL)supportsMediaSystem:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_callCompletion:(id /* block */)a0 builderSessionID:(id)a1 error:(id)a2 response:(id)a3;
- (void)_commitWithCompletionHandler:(id /* block */)a0;
- (void)addPeerAccessoryBeforeSetupSession:(id)a0 role:(id)a1;
- (void)commitWithCompletionHandler:(id /* block */)a0;
- (void)handleResultingMediaSystem:(id)a0;
- (id)initWithHome:(id)a0;
- (id)initWithHome:(id)a0 setupSessionIdentifier:(id)a1;
- (id)initWithHome:(id)a0 setupSessionIdentifier:(id)a1 mediaSystemUUID:(id)a2 context:(id)a3 components:(id)a4;
- (id)initWithMediaSystem:(id)a0;
- (void)legacyHandleResultingMediaSystem:(id)a0;
- (id)resultingMediaSystemFromResponse:(id)a0 error:(id *)a1;

@end
