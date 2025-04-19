@protocol AKFidoRVSServiceDelegate;

@interface AKFidoRVSRemoteViewController : NSRemoteViewController <AKFidoRVSServiceDelegate>

@property (weak, nonatomic) id<AKFidoRVSServiceDelegate> delegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)dismiss;
- (id)serviceViewControllerInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
