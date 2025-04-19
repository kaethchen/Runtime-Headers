@interface ICLockedTextAttachmentView : ICAttachmentView {
    void /* unknown type, empty encoding */ lockedView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTextAttachment:(id)a0 textContainer:(id)a1 forManualRendering:(BOOL)a2;
- (void)didTapAttachment:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textAttachment:(id)a1 textContainer:(id)a2 forManualRendering:(BOOL)a3;
- (void)openAttachment;

@end
