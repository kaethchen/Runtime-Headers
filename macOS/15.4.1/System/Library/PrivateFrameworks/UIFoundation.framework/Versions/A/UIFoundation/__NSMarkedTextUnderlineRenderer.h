@class NSColor, NSTextLineFragment, NSTextRange;
@protocol NSTextGraphicsContext;

@interface __NSMarkedTextUnderlineRenderer : NSObject {
    NSTextLineFragment *_textLineFragment;
    id<NSTextGraphicsContext> _graphicsContext;
    struct CGPoint { double x; double y; } _origin;
    double _underlineThickness;
    unsigned long long _underlineStyle;
    NSColor *_underlineColor;
    NSTextRange *_textRange;
    NSTextRange *_selectedTextRange;
}

- (void)dealloc;
- (void)_renderUnderlineInTextRange:(id)a0 alphaValue:(double)a1 adjustmentCallback:(id /* block */)a2;

@end
