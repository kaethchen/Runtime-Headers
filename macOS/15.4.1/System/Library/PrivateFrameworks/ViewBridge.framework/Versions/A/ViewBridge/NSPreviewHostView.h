@class NSPreviewHostViewController;

@interface NSPreviewHostView : NSView {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

@property (readonly) NSPreviewHostViewController *previewHostViewController;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (oneway void)release;
- (id)retain;
- (void)renewGState;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)viewWillStartLiveResize;
- (void)__vbSuperRelease;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;

@end
