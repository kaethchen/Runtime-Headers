@class NSString;
@protocol NCWidgetHostViewControllerDelegate, NCWidgetServiceProtocol;

@interface NCWidgetHostViewController : NCRemoteViewHostViewController <NCWidgetHostProtocol>

@property (readonly) id<NCWidgetHostViewControllerDelegate> widgetDelegate;
@property (readonly, nonatomic) BOOL supportsEdit;
@property (readonly, nonatomic) id<NCWidgetServiceProtocol> remoteWidgetObject;
@property (nonatomic) unsigned long long forcedAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })maxSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (void)_widgetHostSetTemperaturePreference:(BOOL)a0;
- (float)contentWidthPriority;
- (void)remoteViewReadyWithConfiguration:(id)a0;
- (id)remoteViewServiceClassName;
- (void)remoteViewSetupConfiguration:(id)a0;
- (void)widgetHostEditModeChanged:(long long)a0;
- (void)widgetHostHasContentChanged:(BOOL)a0;

@end
