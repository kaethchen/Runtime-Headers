@class NSView, WFWidgetConfigurationRemoteViewController, WFWidgetConfigurationContainerView;

@interface WFWidgetConfigurationView : NSView {
    struct CGSize { double width; double height; } _preferredConfigurationCardViewSize;
}

@property (readonly, nonatomic) NSView *remoteView;
@property (retain, nonatomic) WFWidgetConfigurationContainerView *containerView;
@property (retain, nonatomic) WFWidgetConfigurationRemoteViewController *remoteViewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overridingCardViewFrame;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 preferredCardSize:(struct CGSize { double x0; double x1; })a1;

@end
