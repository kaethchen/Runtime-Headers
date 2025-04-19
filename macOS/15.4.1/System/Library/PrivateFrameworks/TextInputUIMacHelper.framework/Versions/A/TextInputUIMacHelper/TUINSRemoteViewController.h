@interface TUINSRemoteViewController : NSRemoteViewController

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)exportedObject;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
