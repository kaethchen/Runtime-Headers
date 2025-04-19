@class NSString, NSTextView, NSTextRange;

@interface _NSTextHighlightBackgroundView : NSView <NSTextViewportRenderingSurface> {
    NSTextView *_textView;
}

@property (retain) NSTextRange *textRange;
@property struct CGPoint { double x; double y; } origin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)autoresizingMask;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTextView:(id)a0;
- (BOOL)isFlipped;
- (BOOL)shouldBeArchived;

@end
