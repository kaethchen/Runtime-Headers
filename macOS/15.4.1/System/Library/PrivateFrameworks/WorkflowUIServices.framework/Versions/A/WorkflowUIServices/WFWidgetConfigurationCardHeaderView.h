@class NSTextField, NSLayoutConstraint, NSStackView, NSLayoutGuide;
@protocol WFWidgetConfigurationCardHeaderViewDelegate;

@interface WFWidgetConfigurationCardHeaderView : NSView

@property (readonly, nonatomic) NSTextField *titleLabel;
@property (readonly, nonatomic) NSTextField *subtitleLabel;
@property (retain, nonatomic) NSStackView *labelsStackView;
@property (readonly, nonatomic) NSLayoutConstraint *topContentLayoutConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *leadingContentLayoutConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *bottomContentLayoutConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *trailingContentLayoutConstraint;
@property (weak, nonatomic) id<WFWidgetConfigurationCardHeaderViewDelegate> delegate;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentLayoutMargins;
@property (readonly, nonatomic) NSLayoutGuide *contentLayoutMarginsGuide;

- (void).cxx_destruct;
- (void)close;
- (BOOL)isFlipped;
- (id)initWithRequest:(id)a0;
- (id)initWithIcon:(id)a0 title:(id)a1 subtitle:(id)a2;

@end
