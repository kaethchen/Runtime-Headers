@protocol AKAuthenticationRVSServiceDelegate;

@interface AKAuthenticationRVSRemoteViewController : NSRemoteViewController <AKAuthenticationRVSServiceDelegate>

@property (weak, nonatomic) id<AKAuthenticationRVSServiceDelegate> remoteViewServiceDelegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)dismiss;
- (id)serviceViewControllerInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
