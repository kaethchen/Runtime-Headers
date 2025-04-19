@interface _WKWarningViewTextView : NSTextView {
    struct WeakObjCPtr<_WKWarningView> { id m_weakReference; } _warning;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)clipsToBounds;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithAttributedString:(id)a0 forWarning:(id)a1;

@end
