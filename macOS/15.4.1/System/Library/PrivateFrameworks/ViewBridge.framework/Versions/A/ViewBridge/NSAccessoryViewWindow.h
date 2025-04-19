@class NSWindow, NSAccessibilityRemoteUIElement, NSRemoteView;

@interface NSAccessoryViewWindow : NSWindow {
    id _eventMonitor;
    const long long *_orderingMode;
    NSRemoteView *_remoteView;
    NSWindow *_windowObserved;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _serviceAccessoryViewWindowRelativeFrame;
    unsigned char _notifyingDelegateAccessoryWindowDidUpdateConstraintsIfNeeded : 1;
    unsigned char _reactingToServiceAccessoryViewBecomingFirstResponder : 1;
    unsigned char _serviceAccessoryViewWindowRelativeFrameIsValid : 1;
    unsigned char _willAdjustFrameToServiceAccessoryView : 1;
    unsigned char _willUpdateAccessibilityChildren : 1;
}

@property (retain) NSAccessibilityRemoteUIElement *serviceAccessibilityParent;

+ (id)windowWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atopRemoteView:(id)a1 withColorization:(BOOL)a2;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_doOrderWindow:(id)a0;
- (void)_hierarchyDidChangeInView:(id)a0;
- (BOOL)_keyViewLoopsMayCrossWindows;
- (id)_orderedDrawerAndWindowKeyLoopGroupingViews;
- (BOOL)_runningDocModal;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (void)addChildWindow:(id)a0 ordered:(long long)a1;
- (BOOL)canBecomeKeyWindow;
- (BOOL)makeFirstResponder:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)removeChildWindow:(id)a0;
- (void)sendEvent:(id)a0;
- (void)updateConstraintsIfNeeded;
- (void)updateAccessoryViewAccessibility;

@end
