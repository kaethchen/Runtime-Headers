@protocol REMReminderCreationDelegate;

@interface REMReminderCreationViewController : REMReminderServiceViewController

@property (readonly, nonatomic) id<REMReminderCreationDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)remoteViewControllerDidLoad:(id)a0 setupCompletion:(id /* block */)a1;
- (void)sendDidCreate:(BOOL)a0 error:(id)a1;
- (void)viewServiceDidCancel;
- (void)viewServiceDidFailWithError:(id)a0;
- (void)viewServiceDidFinish;

@end
