@class NSString, WKWebView, NUIContainerBoxView;

@interface SearchUIWebCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, WKNavigationDelegate, WKScriptMessageHandler>

@property (retain, nonatomic) NUIContainerBoxView *contentView;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (id)setupContentView;
- (void)tlk_updateForAppearance:(id)a0;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;

@end
