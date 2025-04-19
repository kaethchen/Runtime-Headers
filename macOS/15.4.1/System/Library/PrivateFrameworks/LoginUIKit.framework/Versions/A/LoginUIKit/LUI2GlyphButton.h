@class LUI2GBButton, NSTextField, NSView, NSDictionary, NSVisualEffectView, NSString;

@interface LUI2GlyphButton : NSControl <NSAccessibilityButton>

@property BOOL enabledInternal;
@property (retain) NSVisualEffectView *backgroundView;
@property (retain) LUI2GBButton *button;
@property (retain) NSView *titleContainer;
@property (retain) NSTextField *titleView;
@property (retain) NSDictionary *images;
@property (copy) NSString *title;
@property id target;
@property SEL action;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *keyEquivalent;
@property unsigned long long keyEquivalentModifierMask;
@property long long blendingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_imagesForIdentifier:(id)a0;
+ (id)buttonWithIdentifier:(id)a0 target:(id)a1 action:(SEL)a2;
+ (id)buttonWithTitle:(id)a0 imageIdentifier:(id)a1 target:(id)a2 action:(SEL)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)performClick:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)_setupButtonView;
- (void)_updateImages:(BOOL)a0 highlighted:(BOOL)a1;
- (void)_updateTitle:(BOOL)a0 highlighted:(BOOL)a1;
- (void)setImageIdentifier:(id)a0;

@end
