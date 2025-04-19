@protocol MEExtensionRemoteViewControllerDelegate;

@interface MEExtensionRemoteViewController : NSRemoteViewController

@property (weak, nonatomic) id<MEExtensionRemoteViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
