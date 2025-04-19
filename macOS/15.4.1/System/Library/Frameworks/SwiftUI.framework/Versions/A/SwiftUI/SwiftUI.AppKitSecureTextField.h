@interface SwiftUI.AppKitSecureTextField : NSSecureTextField {
    void /* unknown type, empty encoding */ swiftUIDelegate;
    void /* unknown type, empty encoding */ suggestionsBridge;
    void /* unknown type, empty encoding */ delegateFocusEffect;
    void /* unknown type, empty encoding */ customAcceptsFirstMouse;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilitySharedFocusElements;
- (id)designatedFocusRingView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (void)viewWillMoveToWindow:(id)a0;

@end
