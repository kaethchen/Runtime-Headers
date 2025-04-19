@protocol AKPrivateEmailRVSServiceDelegate;

@interface AKPrivateEmailRVSRemoteViewController : NSRemoteViewController <AKPrivateEmailRVSServiceDelegate>

@property (weak, nonatomic) id<AKPrivateEmailRVSServiceDelegate> delegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)callCompletionWithPrivateEmail:(id)a0 error:(id)a1;

@end
