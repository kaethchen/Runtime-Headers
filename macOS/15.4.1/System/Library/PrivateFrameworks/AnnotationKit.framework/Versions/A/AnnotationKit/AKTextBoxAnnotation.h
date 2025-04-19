@class NSColor;

@interface AKTextBoxAnnotation : AKRectangularShapeAnnotation {
    NSColor *_highlightColor;
}

+ (id)defaultPlaceholderText;
+ (BOOL)deleteAfterEditingIfEmpty;

- (id)init;
- (void).cxx_destruct;
- (id)displayName;
- (id)highlightColor;
- (void)setHighlightColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;
- (id)keysForValuesToObserveForRedrawing;

@end
