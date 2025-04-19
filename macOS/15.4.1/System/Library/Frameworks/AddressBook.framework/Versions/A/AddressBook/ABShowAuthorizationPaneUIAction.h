@class CNEditAuthorizationViewController, NSString, NSObject;
@protocol OS_os_log, ABUserInterfaceAction;

@interface ABShowAuthorizationPaneUIAction : NSObject <CNEditAuthorizationViewControllerDelegate, ABUserInterfaceAction>

@property (class, readonly, nonatomic) BOOL isPasscodeEnabled;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<ABUserInterfaceAction> actionRequiringAuthorization;
@property (readonly, nonatomic) CNEditAuthorizationViewController *editAuthorizationController;
@property (readonly, nonatomic) NSString *actionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL requiresAuthorizationBeforeExecution;
@property (nonatomic) BOOL executionWasAuthorized;

+ (id)actionByAdddingOptionalAuthorizationStepBeforePerformingAction:(id)a0;
+ (id)fetchIsPasscodeEnabled;

- (void).cxx_destruct;
- (void)editAuthorizationViewController:(id)a0 authorizationDidFinishWithResult:(long long)a1;
- (void)executeGuardedAction;
- (id)initWithActionRequiringAuthorization:(id)a0;
- (void)markGuardedActionAsAuthorized;
- (void)performWithSender:(id)a0;
- (void)presentAuthorizationUI;
- (BOOL)validateWithMenuItem:(id)a0;

@end
