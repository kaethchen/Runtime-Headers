@class NSString, WFWidgetConfigurationHostContext;
@protocol WFWidgetConfigurationRemoteViewControllerDelegate;

@interface WFWidgetConfigurationRemoteViewController : NSRemoteViewController <WFWidgetConfigurationHostContextDelegate>

@property (retain, nonatomic) WFWidgetConfigurationHostContext *serviceContext;
@property (weak, nonatomic) id<WFWidgetConfigurationRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)requestViewControllerDismissal;
- (void)setConfigurationCardViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startConfigurationWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)widgetConfigurationHostContext:(id)a0 didReceiveConfiguredIntent:(id)a1;
- (void)widgetConfigurationHostContext:(id)a0 preferredCardSizeDidUpdate:(struct CGSize { double x0; double x1; })a1;

@end
