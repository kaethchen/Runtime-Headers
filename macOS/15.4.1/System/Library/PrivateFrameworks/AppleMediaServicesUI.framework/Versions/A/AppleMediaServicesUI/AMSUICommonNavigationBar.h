@class AMSUICommonView, NSArray, AMSUICommonLabel, AMSUICommonVisualEffectView, AMSUICommonStackView, NSString;

@interface AMSUICommonNavigationBar : AMSUICommonView

@property (retain) NSArray *contentConstraints;
@property (readonly) AMSUICommonStackView *leftStackView;
@property (readonly) AMSUICommonStackView *rightStackView;
@property (readonly) AMSUICommonView *spacerView;
@property (readonly) AMSUICommonLabel *titleLabel;
@property (readonly) AMSUICommonVisualEffectView *visualEffectView;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (retain) NSString *title;
@property (getter=isVisualEffectViewHidden) BOOL visualEffectViewHidden;
@property BOOL prefersLargeTitles;

- (id)init;
- (void).cxx_destruct;
- (id)_contentView;
- (BOOL)mouseDownCanMoveWindow;
- (void)updateConstraints;
- (void)_setupTitleLabel;
- (void)_setupStackViews;
- (void)_setupVisualEffectView;
- (void)updateLeftBarButtonItems:(id)a0;
- (void)updateRightBarButtonItems:(id)a0;
- (void)updateTitleView:(id)a0;

@end
