@class FI_TAirDropLegacyModePopoverViewController, NSString, FI_TAirDropDiscoveryController, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TAirDropLegacyModeButtonController : FI_TViewController {
    FI_TAirDropLegacyModePopoverViewController *_popoverViewController;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _popoverWillCloseObserver;
}

@property (readonly) FI_TAirDropDiscoveryController *discoveryController;
@property (readonly, getter=isLegacyModeSupported) BOOL legacyModeSupported;
@property (readonly, retain, nonatomic) NSString *buttonTitle;

+ (id)keyPathsForValuesAffectingButtonTitle;
+ (id)keyPathsForValuesAffectingLegacyModeSupported;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)buttonPressed:(id)a0;
- (void)configureView;
- (void)initCommon;
- (void)popoverWillClose;

@end
