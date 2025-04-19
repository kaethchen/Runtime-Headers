@class NSTextView;

@interface _NSTextContentView : NSView {
    NSTextView *_textView;
}

- (void)dealloc;
- (unsigned long long)autoresizingMask;
- (void)enumerateViewportElementViewsUsingBlock:(id /* block */)a0;
- (id)initWithTextView:(id)a0;
- (BOOL)isFlipped;
- (BOOL)shouldBeArchived;

@end
