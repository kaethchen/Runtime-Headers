@class NSArray, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TPropertyTaggingTokenFieldController : FI_IPropertyScrollViewController {
    NSArray *_origTagInfos;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tokenFieldDidEndEditingObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _forceTokenFieldToCommitObserver;
    NSArray *_minAndMaxHeightConstraints;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)flush;
- (void)textDidEndEditing:(id)a0;
- (void)aboutToTearDown;
- (void)configureView;
- (void)initCommon;
- (void)setSubview:(id)a0;
- (void)nodesWillChange;
- (int)applyValueToNodes:(id)a0;
- (void)configureMinRowCount:(double)a0 maxRowCount:(double)a1;
- (void)setShowSuggestionsTableInMenu:(BOOL)a0;
- (void)updateWithNodes:(const void *)a0;

@end
