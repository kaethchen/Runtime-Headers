@interface _TtCO6AppKit14IntelligenceUI9TextField : NSTextField {
    void /* unknown type, empty encoding */ isSingleLineField;
    void /* unknown type, empty encoding */ cachedIntrinsicContentSize;
    void /* unknown type, empty encoding */ intelligenceDelegate;
}

@property (class, nonatomic) Class cellClass;
@property (class, nonatomic, readonly) BOOL allowsWritingTools;

@property (nonatomic) void /* unknown type, empty encoding */ linesOfText;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)declaredLayoutConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)markedTextDidChange:(id)a0;
- (void)textDidChange:(id)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)textView:(id)a0 shouldChangeTypingAttributes:(id)a1 toAttributes:(id)a2;
- (void)textViewDidChangeSelection:(id)a0;

@end
