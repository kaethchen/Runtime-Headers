@class WFWidgetConfigurationCardView, WFWidgetConfigurationRemoteViewController, NSString, WFWidgetConfigurationRequest, NSExtension, WFWidgetConfigurationView;
@protocol WFWidgetConfigurationViewControllerDelegate, NSCopying;

@interface WFWidgetConfigurationViewController : NSViewController <WFWidgetConfigurationCardViewDelegate, WFWidgetConfigurationRemoteViewControllerDelegate>

@property (readonly, weak, nonatomic) WFWidgetConfigurationCardView *cardView;
@property (readonly, nonatomic) WFWidgetConfigurationRequest *request;
@property (readonly, nonatomic) WFWidgetConfigurationRemoteViewController *remoteViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<NSCopying> extensionRequest;
@property (nonatomic) struct CGSize { double width; double height; } preferredCardSize;
@property (nonatomic) BOOL didMakeFirstResponder;
@property (readonly, nonatomic) WFWidgetConfigurationView *configurationView;
@property (weak, nonatomic) id<WFWidgetConfigurationViewControllerDelegate> delegate;
@property struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(id)a0;
- (void)loadView;
- (void)preferredContentSizeDidChangeForViewController:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)initWithRequest:(id)a0;
- (void)showDeviceNotReachableErrorView;
- (void)finishWithCurrentConfiguration;
- (void)installRemoteViewController:(id)a0;
- (void)loadWidgetConfigurationRemoteViewController;
- (void)makeRemoteViewFirstResponderIfNeeded;
- (void)setRemoteViewController:(id)a0 extension:(id)a1 extensionRequest:(id)a2;
- (void)showErrorMessage;
- (void)widgetConfigurationCardViewDidRequestToClose:(id)a0;
- (void)widgetConfigurationRemoteViewController:(id)a0 didReceiveConfiguredIntent:(id)a1;
- (void)widgetConfigurationRemoteViewController:(id)a0 preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a1;

@end
