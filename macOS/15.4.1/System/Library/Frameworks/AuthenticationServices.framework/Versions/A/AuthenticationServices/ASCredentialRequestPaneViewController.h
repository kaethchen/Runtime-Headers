@class NSVisualEffectView, NSString, NSLayoutConstraint, NSScrollView, ASCredentialRequestPaneContext, NSStackView, NSTableView;
@protocol ASCredentialRequestPaneViewControllerDelegate;

@interface ASCredentialRequestPaneViewController : NSViewController <NSTableViewDelegate> {
    BOOL _isTableViewRequired;
    NSVisualEffectView *_blurryTray;
    NSLayoutConstraint *_headerWidthConstraint;
    NSLayoutConstraint *_footerWidthConstraint;
    NSScrollView *_scrollView;
}

@property (weak, nonatomic) id<ASCredentialRequestPaneViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSStackView *paneHeaderStackView;
@property (readonly, nonatomic) NSStackView *paneFooterStackView;
@property (readonly, nonatomic) ASCredentialRequestPaneContext *headerPaneContext;
@property (readonly, nonatomic) ASCredentialRequestPaneContext *footerPaneContext;
@property (retain, nonatomic) NSTableView *tableView;
@property (readonly, nonatomic) long long numberOfTableRows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)_newContainerView;
- (id)_newStackView;
- (void)scrollViewDidScroll:(id)a0;
- (void)_adjustForPositionOfScrollView:(id)a0;
- (void)_configureTableView;
- (id)_indexPathForLastRow;
- (BOOL)_isContentUnderTray;
- (double)_maximumContentHeight;
- (double)_navigationBarHeaderHeight;
- (long long)_safeIndexWithCount:(long long)a0;
- (long long)_scrollViewHeight;
- (void)_setUpContexts;
- (void)_updateBlurForTray;
- (id)initRequiringTableView:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;

@end
