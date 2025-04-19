@class ICQInAppMessaging, ICQInAppMessage, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TICloudQuotaObserver : NSObject {
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _iCloudOverQuotaChangedObserver;
    ICQInAppMessaging *_icqObserver;
}

@property (readonly, nonatomic) ICQInAppMessage *latestICQMessage;
@property (readonly, nonatomic) BOOL outOfQuota;
@property (readonly, nonatomic) BOOL offline;
@property (readonly, nonatomic) int iCloudFlavor;
@property (readonly, nonatomic) BOOL hasWarning;
@property (readonly, nonatomic) BOOL hasStatusThatOverridesProgressDisplay;

+ (id)defaultErrorSymbolImage;
+ (id)iCloudObserver;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_initForICloudFlavor:(int)a0;
- (void)iCloudQuotaDidChange:(id)a0;
- (id)messageIfAppropriateForDataSeparatedICloud;

@end
