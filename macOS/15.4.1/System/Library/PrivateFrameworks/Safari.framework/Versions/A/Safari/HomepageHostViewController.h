@protocol HomepageHostViewControllerDelegate;

@interface HomepageHostViewController : NSRemoteViewController <HomepageHostViewController>

@property (weak, nonatomic) id<HomepageHostViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)scheduleBlock:(id /* block */)a0;
- (void)tryApplyingHomepageURL:(id)a0 sandboxExtensionToken:(id)a1 completionHandler:(id /* block */)a2;

@end
