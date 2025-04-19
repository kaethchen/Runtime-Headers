@class NSView;

@interface AMSUIWebViewImageWrapper : AMSUICommonView

@property (retain) NSView *view;
@property double inset;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithView:(id)a0 topInset:(double)a1;

@end
