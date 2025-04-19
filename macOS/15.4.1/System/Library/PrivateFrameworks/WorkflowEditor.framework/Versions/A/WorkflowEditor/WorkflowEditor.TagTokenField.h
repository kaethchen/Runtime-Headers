@interface WorkflowEditor.TagTokenField : WorkflowEditor.WFMultilineTokenField <NSTextViewDelegate> {
    void /* unknown type, empty encoding */ additionalDelegate;
}

@property (class, nonatomic) Class cellClass;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)undoManagerForTextView:(id)a0;

@end
