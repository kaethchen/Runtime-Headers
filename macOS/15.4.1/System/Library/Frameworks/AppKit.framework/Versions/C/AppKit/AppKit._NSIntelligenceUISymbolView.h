@interface AppKit._NSIntelligenceUISymbolView : NSView {
    void /* unknown type, empty encoding */ symbolConfiguration;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ livingColorView;
    void /* unknown type, empty encoding */ staticColorView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;

@end
