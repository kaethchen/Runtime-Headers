@class NSScrollView, NSView, QCPatch, NSTextView;

@interface QCLogView : NSView {
    NSView *_insideView;
    NSScrollView *_scrollView;
    NSTextView *_textView;
    QCPatch *_rootPatch;
    void *_unused[4];
}

+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_finishInitialization;
- (void)clear:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (Class)valueClassForBinding:(id)a0;
- (void)_appendLog:(id)a0;
- (void)_message:(id)a0;
- (id)rootPatch;
- (void)setRootPatch:(id)a0;

@end
