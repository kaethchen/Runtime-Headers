@protocol FPUIActionRemoteViewControllerDelegate;

@interface FPUIActionRemoteViewController : NSRemoteViewController

@property (weak, nonatomic) id<FPUIActionRemoteViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
