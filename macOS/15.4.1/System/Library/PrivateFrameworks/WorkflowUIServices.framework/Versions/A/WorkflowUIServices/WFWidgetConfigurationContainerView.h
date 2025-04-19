@class WFWidgetConfigurationCardView, NSArray, NSLayoutConstraint;
@protocol WFWidgetConfigurationContainerViewDelegate;

@interface WFWidgetConfigurationContainerView : NSView

@property (readonly, nonatomic) WFWidgetConfigurationCardView *cardView;
@property (readonly, nonatomic) NSArray *defaultCardLayoutConstraints;
@property (readonly, nonatomic) NSLayoutConstraint *preferredCardWidthLayoutConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *preferredCardHeightLayoutConstraint;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } configurationCardViewFrame;
@property (weak, nonatomic) id<WFWidgetConfigurationContainerViewDelegate> delegate;
@property (nonatomic) unsigned long long widgetConfigurationStyle;

- (void).cxx_destruct;
- (void)close;
- (BOOL)isFlipped;
- (id)initWithCardView:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;

@end
