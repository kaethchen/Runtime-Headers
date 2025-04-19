@interface NSPreviewTargetWindow : NSAutolayoutJailWindow

+ (unsigned long long)_validateStyleMask:(unsigned long long)a0;

- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (void)becomeKeyWindow;
- (void)resignKeyWindow;
- (void)_beginWindowBlockingModalSessionForShownService:(id)a0;
- (void)_setEventMask:(unsigned long long)a0;
- (void)_setFrameCommon:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1 stashSize:(BOOL)a2;
- (void)_setMouseMovedEventsEnabled:(BOOL)a0;
- (void)acquireKeyAppearance;
- (void)addChildWindow:(id)a0 ordered:(long long)a1;
- (BOOL)allowUninhibitedChildren;
- (void)beginCriticalSheet:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginSheet:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canBecomeKeyWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (void)removeChildWindow:(id)a0;
- (void)resignKeyAppearance;
- (void)sendEvent:(id)a0;
- (void)setLevel:(long long)a0;
- (void)setStyleMask:(unsigned long long)a0;
- (void)updateConstraintsIfNeeded;
- (void)__vbSuperRelease;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;

@end
