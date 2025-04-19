@class NSRemoteViewController, NSViewController;

@interface AKAuthorizationRVSBootstrapper : NSObject

@property (retain, nonatomic) NSRemoteViewController *remoteViewController;
@property (readonly) NSViewController *viewController;

+ (void)requestAuthorizationViewControllerWithCompletion:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)serviceProxy;
- (void)setupWithRequestContext:(id)a0 completion:(id /* block */)a1;

@end
