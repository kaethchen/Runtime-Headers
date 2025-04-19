@class FI_TNotificationCenterObserverGlue, NSString, FI_TInternalCloudProgressObserver, NSArray, NSURL, FPProviderDomain, NSObject;

@interface FI_TCloudProgressObserver : NSObject {
    NSURL *_rootURL;
    NSObject *_subscriber;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _stateObserver;
}

@property (retain) FI_TInternalCloudProgressObserver *internalObserver;
@property (readonly, nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } sidebarTargetNode;
@property (readonly, nonatomic) struct optional<TICloudFlavor> { union { char __null_state_; int __val_; } ; BOOL __engaged_; } iCloudFlavor;
@property (readonly, nonatomic) FPProviderDomain *domain;
@property (copy, nonatomic) NSString *iCloudDriveStatus;
@property (nonatomic) double percentageComplete;
@property (readonly) NSArray *progresses;
@property (readonly, nonatomic) BOOL syncedWithICloud;

+ (id)iCloudDriveDataSeparatedObserver;
+ (id)iCloudDriveObserver;
+ (id)iCloudProgressObserverForFlavor:(int)a0;
+ (id)keyPathsForValuesAffectingSyncedWithICloud;
+ (id)providerDomainProgressObserver:(id)a0 sidebarTargetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)startObserving;
- (void)stopObserving;
- (id)_init:(int)a0;
- (id)_initWithDomain:(id)a0 sidebarNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;

@end
