@class NSString, WFUIPresenter, WFDialogPresentationManager, WFDialogNotificationManager, NSObject, WFUserNotificationManager;
@protocol WFDatabaseProvider, OS_dispatch_queue;

@interface WFWorkflowRunCoordinator : NSObject <UNUserNotificationCenterDelegate>

@property (readonly, nonatomic) WFUIPresenter *userInterfacePresenter;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) WFDialogNotificationManager *dialogNotificationManager;
@property (readonly, nonatomic) WFDialogPresentationManager *dialogPresentationManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) WFUserNotificationManager *userNotificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorCategory;
+ (id)errorWithActionCategory;
+ (long long)outOfProcessWorkflowControllerPresentationModeFromVCShortcutPresentationMode:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)postNotificationAboutFailure:(id)a0 inWorkflow:(id)a1 dialogAttribution:(id)a2 runningContext:(id)a3;
- (void)postNotificationWithRequest:(id)a0 presentationMode:(unsigned long long)a1 runningContext:(id)a2;
- (void)handleRemovedIgnoredNotifications:(id)a0;
- (id)initWithUserNotificationManager:(id)a0 databaseProvider:(id)a1;
- (void)presentationManager:(id)a0 updateSmartPromptStateData:(id)a1 actionUUID:(id)a2 context:(id)a3 reference:(id)a4;
- (void)showSingleStepCompletionWithWebClipMetadata:(id)a0 completion:(id /* block */)a1;
- (id)unsupportedDialogResponseWithRequest:(id)a0;

@end
