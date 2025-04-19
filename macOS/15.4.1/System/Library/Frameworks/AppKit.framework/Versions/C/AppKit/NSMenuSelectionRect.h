@class NSCocoaMenuImpl, NSVisualEffectView;

@interface NSMenuSelectionRect : NSObject {
    NSCocoaMenuImpl *_observer;
    NSVisualEffectView *_backingView;
    SEL _observerAction;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedFrame;
    long long _pendingUpdateCount;
    double _lastHiddenStateChange;
    BOOL _cachedIsHidden;
    BOOL _isHidden;
    BOOL _shouldCommitChanges;
    BOOL _isAnimationStateCached;
    BOOL _cachedShouldAnimate;
    BOOL _disableAnimations;
}

- (id)init;
- (void).cxx_destruct;

@end
