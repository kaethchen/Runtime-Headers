@interface WKDataListSuggestionView : NSTableCellView {
    struct RetainPtr<NSTextField> { void *m_ptr; } _valueField;
    struct RetainPtr<NSTextField> { void *m_ptr; } _labelField;
    struct RetainPtr<NSView> { void *m_ptr; } _bottomDivider;
}

@property (nonatomic) BOOL shouldShowBottomDivider;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layout;
- (BOOL)acceptsFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)setValue:(id)a0 label:(id)a1;

@end
