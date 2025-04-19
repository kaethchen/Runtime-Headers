@class NSObject;
@protocol OS_dispatch_queue;

@interface AMFIRequirementsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct __SecRequirement { } *_restrictedRequirement;
}

@property (readonly, nonatomic) struct __SecRequirement { } *developerRequirement;
@property (readonly, nonatomic) struct __SecRequirement { } *basicRequirement;
@property (readonly, nonatomic) struct __SecRequirement { } *dyldSimRequirement;
@property (readonly, nonatomic) struct __SecRequirement { } *appleRequirement;
@property (readonly, nonatomic) struct __SecRequirement { } *legacyDebuggerRequirement;
@property (readonly, nonatomic) struct __SecRequirement { } *qaMacAppStoreRequirement;
@property (readonly, nonatomic) struct __SecRequirement { } *restrictedRequirement;
@property (readonly, nonatomic) BOOL allowUnsafeDynamicLinking;
@property (readonly, nonatomic) BOOL isRunningInternalBuild;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)checkCodeRequirementsPreference;
- (id)preferenceQueue;
- (void)checkCodeRequirementsPreferenceUnsynchronized;
- (void)resetRestrictedRequirement;

@end
