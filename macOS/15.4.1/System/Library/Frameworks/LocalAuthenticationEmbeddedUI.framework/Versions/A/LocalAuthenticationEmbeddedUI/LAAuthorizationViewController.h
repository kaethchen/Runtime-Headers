@class NSString, LACUIAuthenticatorServiceConfiguration, _AuthorizationRemoteViewControllerHost;
@protocol LAAuthorizationViewControllerDelegate;

@interface LAAuthorizationViewController : NSViewController <_AuthorizationRemoteViewControllerHostDelegate> {
    _AuthorizationRemoteViewControllerHost *_remoteVC;
    id /* block */ _completion;
    LACUIAuthenticatorServiceConfiguration *_configuration;
}

@property (readonly, nonatomic) BOOL active;
@property (weak, nonatomic) id<LAAuthorizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismiss;
- (void)loadView;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)didProvideAuthorizationRequirementWithReply:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)presentInContainerViewController:(id)a0;
- (void)sheetDidFinishWithError:(id)a0;

@end
