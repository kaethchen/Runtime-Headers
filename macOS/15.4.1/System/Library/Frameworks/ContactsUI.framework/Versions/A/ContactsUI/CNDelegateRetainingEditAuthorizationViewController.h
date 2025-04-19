@protocol CNEditAuthorizationViewControllerDelegate;

@interface CNDelegateRetainingEditAuthorizationViewController : CNEditAuthorizationViewController

@property (retain, nonatomic) id<CNEditAuthorizationViewControllerDelegate> delegateRetainedDuringAuthorization;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)cancelButtonPressed:(id)a0;
- (void)didNotAuthorize;
- (void)didAuthorize;

@end
