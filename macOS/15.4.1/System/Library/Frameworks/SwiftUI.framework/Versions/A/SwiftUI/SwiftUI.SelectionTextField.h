@interface SwiftUI.SelectionTextField : NSTextField {
    void /* unknown type, empty encoding */ textInsets;
    void /* unknown type, empty encoding */ openURL;
    void /* unknown type, empty encoding */ customAcceptsFirstMouse;
}

@property (class, nonatomic) Class cellClass;

@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) BOOL wantsUpdateLayer;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(long long)a2;
- (BOOL)_performMultiPassIntrinsicSize;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityValue;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;

@end
