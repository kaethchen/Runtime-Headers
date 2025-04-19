@class UIView;

@interface UINSToolbarReplicantView : NSView {
    UIView *_replicatedView;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithUIView:(id)a0;
- (void)_configureRepresentationSizeFromCurrentAlignmentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_performWithCustomizationControlSizeUsingBlock:(id /* block */)a0;

@end
