@class NSString, NSView, NSLayoutGuide, NSLayoutConstraint, WFWidgetConfigurationCardHeaderView;
@protocol WFWidgetConfigurationCardViewDelegate;

@interface WFWidgetConfigurationCardView : NSView <WFWidgetConfigurationCardHeaderViewDelegate>

@property (readonly, nonatomic) NSView *backgroundView;
@property (readonly, nonatomic) NSLayoutGuide *contentViewGuide;
@property (readonly, nonatomic) NSLayoutConstraint *topContentLayoutConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *leadingContentLayoutConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *bottomContentLayoutConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *trailingContentLayoutConstraint;
@property (readonly, nonatomic) WFWidgetConfigurationCardHeaderView *headerView;
@property (retain, nonatomic) NSView *contentView;
@property (weak, nonatomic) id<WFWidgetConfigurationCardViewDelegate> delegate;
@property (nonatomic) double widgetDescriptionTallScriptCompensatedSpacing;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentLayoutMargins;
@property (readonly, nonatomic) NSLayoutGuide *contentLayoutMarginsGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)setBackgroundColor:(id)a0;
- (void)startLoading;
- (void)showMessage:(id)a0;
- (void)showDeviceNotReachableErrorView;
- (id)initWithRequest:(id)a0 contentView:(id)a1;
- (void)setContentView:(id)a0 stretchToFit:(BOOL)a1;
- (void)widgetConfigurationCardHeaderViewDidRequestToClose:(id)a0;

@end
