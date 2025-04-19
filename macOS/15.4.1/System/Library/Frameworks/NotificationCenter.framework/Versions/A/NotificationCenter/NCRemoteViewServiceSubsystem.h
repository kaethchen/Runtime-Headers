@class NCRemoteViewService, NSString, NSDictionary, NCRemoteViewServiceViewController, NSExtensionContext, NSObject;
@protocol NCRemoteViewServiceHostProtocol, OS_dispatch_source;

@interface NCRemoteViewServiceSubsystem : NSObject <PKModularService, NCRemoteViewServiceProtocol> {
    NSObject<OS_dispatch_source> *_inactive_timer;
    BOOL _exitOnIdle;
    BOOL _activeForSnapshotOnly;
    id /* block */ _deferredReadyBlock;
    unsigned int _deferredDisplayID;
}

@property BOOL active;
@property (readonly) struct CGSize { double width; double height; } maxSize;
@property (readonly) struct NSEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (readonly) NSDictionary *configuration;
@property (readonly) unsigned long long appearance;
@property (readonly, nonatomic) NCRemoteViewServiceViewController *viewController;
@property (weak) NSExtensionContext *currentExtensionContext;
@property (weak) NCRemoteViewService *viewService;
@property (readonly) id<NCRemoteViewServiceHostProtocol> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initForPlugInKit;
+ (id)anyService;
+ (id)serviceForContext:(id)a0;
+ (void)unregisterService:(id)a0;

- (void).cxx_destruct;
- (Class)viewControllerClass;
- (void)remoteViewServiceDestorySnippet;
- (void)_exitOnTimeout;
- (void)_getSnapshotResult:(unsigned long long)a0;
- (void)_sendSnapshotResult:(id)a0 scale:(double)a1 result:(unsigned long long)a2;
- (void)installViewControllerInWindow:(id)a0;
- (void)remoteViewServiceChangedActiveState:(BOOL)a0;
- (void)remoteViewServiceChangedDisplay:(unsigned int)a0;
- (void)remoteViewServiceConfigure:(id)a0 reply:(id /* block */)a1;
- (void)remoteViewServiceDeactivateNow;
- (void)remoteViewServiceExitOnIdle;
- (void)remoteViewServiceReadyForDisplay:(unsigned int)a0 block:(id /* block */)a1;
- (void)remoteViewServiceRequestDebugSnapshot:(id /* block */)a0;
- (void)remoteViewServiceRequestSnapshot:(double)a0;
- (void)remoteViewServiceSimulateCrash;

@end
