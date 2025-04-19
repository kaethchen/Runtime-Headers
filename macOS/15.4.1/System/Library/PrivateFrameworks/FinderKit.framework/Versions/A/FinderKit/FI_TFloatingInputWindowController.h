@class NSWindow, NSString, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TFloatingInputWindowController : NSWindowController <NSWindowDelegate> {
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _keyboardInputSourceChangedObserver;
    NSWindow *_windowStash;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singleton;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_initWithWindow:(id)a0;
- (id)inputContext;
- (void)setWindow:(id)a0;
- (void)windowWillClose:(id)a0;
- (BOOL)preProcessedByInputMethod:(id)a0 forDelegate:(id)a1;

@end
