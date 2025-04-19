@class NSLayoutAnchor, NSString, NSView, NSMenu, UXViewController, NSColor;

@interface UXBarButtonItem : UXBarItem <UXKitAppearance> {
    NSView *__view;
    BOOL _wantsToUseCustomWidth;
}

@property (readonly, nonatomic) UXViewController *contentViewController;
@property (readonly, nonatomic) BOOL isSystemItem;
@property (readonly, nonatomic) long long systemItem;
@property (readonly, nonatomic) NSView *_view;
@property (nonatomic, getter=isCondensed) BOOL condensed;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) float visibilityPriority;
@property (copy, nonatomic) NSString *label;
@property (weak, nonatomic, setter=_setWidthConstrainingItem:) UXBarButtonItem *_widthConstrainingItem;
@property (nonatomic) long long style;
@property (nonatomic) double width;
@property (retain, nonatomic) NSView *customView;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;
@property (retain, nonatomic) NSMenu *menu;
@property (retain, nonatomic) NSString *toolTip;
@property (retain, nonatomic) NSString *keyEquivalent;
@property (nonatomic) unsigned long long keyEquivalentModifierMask;
@property (nonatomic) long long buttonState;
@property (nonatomic) BOOL ignoresMultiClick;
@property (retain, nonatomic) NSLayoutAnchor *baselineAnchor;
@property (retain, nonatomic) NSColor *tintColor;
@property (nonatomic) long long tintAdjustmentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (id)image;
- (void)setAccessibilityIdentifier:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (id)initWithTitle:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;
- (id)initWithCustomView:(id)a0;
- (id)initWithImage:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;
- (id)initWithBarButtonSystemItem:(long long)a0 target:(id)a1 action:(SEL)a2;
- (id)initWithContentViewController:(id)a0;
- (void)tintColorDidChange;
- (id)_viewOfClass:(Class)a0;
- (id)initWithBarButtonSystemItem:(long long)a0 width:(double)a1 target:(id)a2 action:(SEL)a3;
- (id)initWithStyle:(long long)a0 target:(id)a1 action:(SEL)a2;
- (double)preferredSpacingToItem:(id)a0 proposedSpacing:(double)a1;

@end
