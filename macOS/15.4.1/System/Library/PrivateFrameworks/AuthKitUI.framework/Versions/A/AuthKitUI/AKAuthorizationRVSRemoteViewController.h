@protocol AKAuthorizationRVSServiceDelegate;

@interface AKAuthorizationRVSRemoteViewController : NSRemoteViewController <AKAuthorizationRVSServiceDelegate>

@property (weak, nonatomic) id<AKAuthorizationRVSServiceDelegate> delegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)callCompletionWithAuthorization:(id)a0 error:(id)a1;

@end
