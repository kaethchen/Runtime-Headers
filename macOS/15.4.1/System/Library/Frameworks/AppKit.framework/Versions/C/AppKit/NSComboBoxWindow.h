@class NSWindow, NSComboBoxCell;

@interface NSComboBoxWindow : NSWindow {
    NSComboBoxCell *_comboBoxCell;
    NSWindow *_attachedToParent;
}

- (void)dealloc;
- (BOOL)_allowsImplicitRemovalFromMovementGroup;
- (void)_attachToParentWindow;
- (void)_commonAwake;
- (void)_detachFromParentWindow;
- (BOOL)_ignoredForScripting;
- (BOOL)accessibilityIsChildOfApp;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeVisibleWithoutLogin;
- (BOOL)hasKeyAppearance;
- (BOOL)hasShadow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 comboBoxCell:(id)a1;
- (BOOL)isKeyWindow;
- (void)makeKeyAndOrderFront:(id)a0;
- (void)orderFront:(id)a0;
- (void)orderOut:(id)a0;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (void)setShownAboveComboBox:(BOOL)a0;
- (void)setStyleMask:(unsigned long long)a0;
- (unsigned long long)shadowOptions;
- (BOOL)worksWhenModal;

@end
