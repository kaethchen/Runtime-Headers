@class NSButton, FI_TView, NSView, FI_TNotificationCenterObserverGlue, NSObject, FI_TImageView, FI_TTextField;

@interface FI_TICloudNoDocumentsViewController : FI_TViewController {
    FI_TImageView *_cloudAndAppImageView;
    FI_TView *_cloudAndAppView;
    FI_TImageView *_cloudImageView;
    FI_TImageView *_appIconImageView;
    FI_TTextField *_appInfoTextFld;
    FI_TTextField *_explanationTextFld;
    NSButton *_upgradeButton;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _backingPropertiesChangedObserver;
    BOOL _isUpgradeToICloudUI;
}

@property (readonly, nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } target;
@property (retain, nonatomic) NSView *dropTargetView;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)nibName;
- (void)configureView;
- (void)enableICloudDriveInSettings:(id)a0;
- (void)learnAboutICloudBtnPressed:(id)a0;

@end
