@interface SwiftUI.FocusRingNSButton : NSButton {
    void /* unknown type, empty encoding */ focused;
    void /* unknown type, empty encoding */ canShowFocusRing;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (id)initWithCoder:(id)a0;
- (BOOL)_shouldShowFirstResponderForCell:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
