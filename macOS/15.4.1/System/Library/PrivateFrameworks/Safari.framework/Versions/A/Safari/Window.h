@protocol ExtendedWindowDelegate;

@interface Window : NSWindow <LockableFirstResponder> {
    BOOL _unresizable;
    unsigned long long _firstResponderLockedCount;
    struct CGSize { double width; double height; } _savedMinContentSize;
    struct CGSize { double width; double height; } _savedMaxContentSize;
}

@property (weak) id<ExtendedWindowDelegate> delegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } overrideWindowRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } overrideFrameToStaggerFrom;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cascadedChildWindowFrame;
@property (nonatomic, getter=isResizable) BOOL resizable;

- (void)dealloc;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)becomeKeyWindow;
- (void)_setFrameAfterMove:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })cascadeTopLeftFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)makeFirstResponder:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)sendEvent:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cascadedFrameForDryRun:(BOOL)a0;
- (BOOL)canCycle;
- (id)findFrontmostOtherWindowOfWidth:(float)a0;
- (BOOL)firstResponderIsLocked;
- (void)lockFirstResponder;
- (void)unlockFirstResponder;

@end
