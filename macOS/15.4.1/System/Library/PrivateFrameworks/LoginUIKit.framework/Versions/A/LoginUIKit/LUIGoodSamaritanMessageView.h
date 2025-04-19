@class NSImageView, NSScrollView, NSTextView, NSAttributedString;

@interface LUIGoodSamaritanMessageView : NSView {
    int _style;
    NSScrollView *_scrollView;
    NSTextView *_messageTextView;
    NSImageView *_ribbonImageView;
    NSAttributedString *_currentMessage;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)setMessage:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_attributesWithSize:(double)a0;
- (id)_fontOfSize:(double)a0;
- (void)_setMessageInternal:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withStyle:(int)a1;

@end
