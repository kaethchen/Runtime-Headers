@class WebNodeHighlight;

@interface WebNodeHighlightView : NSView {
    WebNodeHighlight *_webNodeHighlight;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)detachFromWebNodeHighlight;
- (id)initWithWebNodeHighlight:(id)a0;
- (id)webNodeHighlight;

@end
