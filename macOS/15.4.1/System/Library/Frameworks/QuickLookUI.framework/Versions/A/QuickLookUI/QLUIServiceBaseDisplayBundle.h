@class QLRemoteViewController;
@protocol QLUIServiceBaseViewControllerProtocol;

@interface QLUIServiceBaseDisplayBundle : QLDisplayBundle

@property (retain) QLRemoteViewController *remoteViewController;
@property (readonly) id<QLUIServiceBaseViewControllerProtocol> serviceViewController;

+ (id)genericServiceCrashError;
+ (id)incompatibleWindowError;

- (void).cxx_destruct;
- (id)contentLayer;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)responder;
- (void)windowDidChange;
- (void)doubleClickOnPreviewContent;
- (void)updateFullScreenFromMagnification:(double)a0;
- (id)quickLookLayer;
- (id)serviceCrashError;

@end
