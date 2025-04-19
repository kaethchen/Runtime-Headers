@class NSString, NSObject, NSViewController;
@protocol NCWidgetProviding, NCWidgetHostProtocol, OS_dispatch_source;

@interface NCWidgetServiceSubsystem : NCRemoteViewServiceSubsystem <NCWidgetServiceProtocol> {
    BOOL _wasEditing;
    NSObject<OS_dispatch_source> *_snapshot_timer;
}

@property (readonly, nonatomic) NSViewController<NCWidgetProviding> *_clientController;
@property (readonly, nonatomic) id<NCWidgetHostProtocol> widgetHost;
@property (nonatomic) long long widgetMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (Class)viewControllerClass;
- (BOOL)_startEditMode;
- (void)_stopEditMode;
- (void)remoteViewServiceChangedActiveState:(BOOL)a0;
- (void)remoteViewServiceRequestSnapshot:(double)a0;
- (void)widgetServiceSetEditMode:(long long)a0;

@end
