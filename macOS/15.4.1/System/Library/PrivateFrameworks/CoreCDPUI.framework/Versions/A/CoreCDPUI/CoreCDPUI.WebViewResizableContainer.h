@interface CoreCDPUI.WebViewResizableContainer : NSView {
    void /* unknown type, empty encoding */ contentSize;
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ webViewContainer;
    void /* unknown type, empty encoding */ viewSize;
    void /* unknown type, empty encoding */ fallbackHeight;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToSuperview;

@end
