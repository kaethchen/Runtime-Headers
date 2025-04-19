@class NSObject, NSViewController, NSString, NSButton, STPINRemoteViewController;
@protocol OS_os_log, CNEditAuthorizationViewControllerDelegate;

@interface CNEditAuthorizationViewController : NSViewController <CNContactCardWidget>

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain, nonatomic) STPINRemoteViewController *pinViewController;
@property (readonly, nonatomic) NSButton *cancelButton;
@property (readonly, nonatomic) id /* block */ authorizationHandler;
@property (nonatomic) long long authorizationResult;
@property (weak, nonatomic) id<CNEditAuthorizationViewControllerDelegate> delegate;
@property (weak, nonatomic) NSViewController *guardedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pinControllerFutureWithAuthorizationHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)cancelButtonPressed:(id)a0;
- (void)loadView;
- (void)viewWillAppear;
- (void)setContact:(id)a0;
- (void)didNotAuthorize;
- (void)buildAuthorizationUI;
- (double)desiredHeight;
- (void)didAuthorize;
- (void)establishAuthorizedState;
- (void)establishUnauthorizationState;
- (void)presentEditAuthorizationUI;
- (void)requestPinAuthorizationController;
- (void)setupAuthorizationUI;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (void)tearDownAuthorizationUI;

@end
