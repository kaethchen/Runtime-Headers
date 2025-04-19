@interface NSCustomMenuItemWindow : NSWindow <NSMenuWindow> {
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ menuItem;
    void /* unknown type, empty encoding */ isHighlighted;
}

@property (nonatomic) unsigned long long styleMask;
@property (nonatomic, readonly) BOOL keyWindow;
@property (nonatomic) BOOL canHide;
@property (nonatomic, readonly) BOOL _allowsActiveInputContextDuringMenuTracking;
@property (nonatomic, readonly) BOOL _isScreenLayoutAware;
@property (nonatomic, readonly) BOOL _isConsideredForActivation;
@property (nonatomic, readonly) BOOL _windowManagerAware;
@property (nonatomic, readonly) BOOL canBecomeKeyWindow;

+ (BOOL)accessibilityIsIgnored;

- (void).cxx_destruct;
- (BOOL)_allowsOrdering;
- (void)resignKeyWindow;
- (BOOL)_hasActiveAppearanceIgnoringKeyFocus;
- (BOOL)_hasActiveControls;
- (BOOL)_ignoredForScripting;
- (BOOL)_isKeyWindow;
- (BOOL)_preventsActivation;
- (BOOL)hasKeyAppearance;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)isKeyWindow;
- (void)makeKeyWindow;
- (void)sendEvent:(id)a0;

@end
