@class NSString, WFImage, NSError, WFWorkflow;

@interface WFAccessResource : WFResource <WFWorkflowReferencing>

@property (class, readonly, nonatomic, getter=isSystemResource) BOOL systemResource;

@property (readonly, nonatomic) NSString *resourceName;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) BOOL canLogOut;
@property (readonly, nonatomic) BOOL logOutAffectsOtherApps;
@property (readonly, nonatomic) BOOL supportsMultipleAccounts;
@property (readonly, nonatomic) NSError *availabilityError;
@property (readonly, nonatomic) int token;
@property (readonly, nonatomic) NSString *localizedAttemptRecoveryFromErrorMessage;
@property (readonly, nonatomic) NSString *associatedAppIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) WFImage *icon;
@property (readonly, nonatomic) unsigned long long status;
@property (weak, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 userInterface:(id)a2 completionHandler:(id /* block */)a3;
- (void)logOut;
- (void)attemptRecoveryFromErrorWithOptionIndex:(unsigned long long)a0 userInterface:(id)a1 completionHandler:(id /* block */)a2;
- (id)localizedErrorReasonForStatus:(unsigned long long)a0;
- (id)localizedErrorRecoveryOptionsForStatus:(unsigned long long)a0;
- (id)localizedImportErrorReasonForStatus:(unsigned long long)a0;
- (id)localizedProtectedResourceDescriptionWithContext:(id)a0;
- (void)makeAvailableWithRemoteInterface:(id)a0 completionHandler:(id /* block */)a1;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (void)refreshAvailabilityWithNotification:(BOOL)a0;
- (id)initWithDefinition:(id)a0 enableDistributedNotifications:(BOOL)a1;
- (id)localizedProtectedResourceDescription;
- (void)refreshAvailability;

@end
