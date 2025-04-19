@class NSString;

@interface FI_TBrowserImmediateActionGestureRecognizerDelegate : NSObject <NSGestureRecognizerDelegatePrivate, NSImmediateActionGestureRecognizerDelegate, NSImmediateActionAnimationController> {
    struct unique_ptr<TBrowserImmediateActionGestureRecognizerHandlerBase, std::default_delete<TBrowserImmediateActionGestureRecognizerHandlerBase>> { struct __compressed_pair<TBrowserImmediateActionGestureRecognizerHandlerBase *, std::default_delete<TBrowserImmediateActionGestureRecognizerHandlerBase>> { struct TBrowserImmediateActionGestureRecognizerHandlerBase *__value_; } __ptr_; } _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (const void *)handler;
- (void)setHandler:(void *)a0;
- (BOOL)_gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;
- (void)immediateActionRecognizerDidCancelAnimation:(id)a0;
- (void)immediateActionRecognizerDidCompleteAnimation:(id)a0;
- (void)immediateActionRecognizerWillBeginAnimation:(id)a0;
- (void)immediateActionRecognizerWillPrepare:(id)a0;

@end
