@class NSString, NSImage, NSVisualEffectView, LUI2DarkenView, LUI2VEBButton;

@interface LUI2VisualEffectButton : NSControl <NSAccessibilityButton>

@property BOOL enabledInternal;
@property (retain) NSImage *vebImage;
@property (retain) NSVisualEffectView *backgroundView;
@property (retain) LUI2VEBButton *button;
@property (retain) LUI2DarkenView *darkenView;
@property (retain) NSImage *image;
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

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setNextKeyView:(id)a0;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)performClick:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (void)updateLayer;
- (void)_setupVisualEffectButton;

@end
