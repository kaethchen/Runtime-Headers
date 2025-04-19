@class NSStringDrawingContext, NSAttributedString;

@interface _NSTruncationTokenAttachment : NSTextAttachment {
    NSStringDrawingContext *stringDrawingContext;
    struct __CTRunDelegate { } *_runDelegate;
    double _width;
    NSAttributedString *_attributedString;
    struct __CTLine { } *_lineRef;
}

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)_showWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3 applicationFrameworkContext:(long long)a4 acceptsViewProvider:(BOOL)a5;

@end
