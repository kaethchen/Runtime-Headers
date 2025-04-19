@class NSTextView, NSString, NSTextLayoutFragment;

@interface _NSTextViewportElementView : NSView <NSTextViewportRenderingSurface> {
    struct CGPoint { double x; double y; } _renderingOrigin;
}

@property (readonly) NSTextLayoutFragment *element;
@property (readonly) NSTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)layout;
- (void)_windowChangedKeyState;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithElement:(id)a0;
- (BOOL)isFlipped;
- (id)locationForPoint:(struct CGPoint { double x0; double x1; })a0 textLineFragment:(out id *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderingSurfaceBounds;
- (BOOL)shouldBeArchived;
- (void)updateWithTextView:(id)a0 layout:(BOOL)a1 display:(BOOL)a2;
- (void)viewDidMoveToSuperview;

@end
