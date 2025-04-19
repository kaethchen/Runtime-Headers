@class WFDialogNotificationManager, WFScreenOnObserver, NSString, WFPresentedDialog, WFDialogAttribution, NSMutableSet, NSObject, NSXPCListener, WFWorkflowRunningContext, NSMutableArray;
@protocol WFDialogAlertPresenter, WFDialogPresentationManagerDelegate, WFDialogXPCProtocol, OS_dispatch_queue;

@interface WFDialogPresentationManager : NSObject <NSXPCListenerDelegate, WFDialogXPCHostProtocol, WFScreenOnObserverDelegate, WFDialogAlertPresenterDelegate, WFWorkflowStatusPresenterDelegate, WFWorkflowStatusHostProtocol, RBSAssertionObserving, WFUIPresenterInterface>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSMutableSet *connectedRunners;
@property (readonly, nonatomic) id<WFDialogAlertPresenter> remoteAlertPresenter;
@property (retain, nonatomic) id<WFDialogXPCProtocol> connectedRemoteAlert;
@property (retain, nonatomic) WFPresentedDialog *presentedDialog;
@property (readonly, nonatomic) NSMutableArray *contentDismissalCompletionHandlers;
@property (retain, nonatomic) WFWorkflowRunningContext *persistentRunningContext;
@property (retain, nonatomic) WFDialogAttribution *persistentRunningAttribution;
@property (readonly, nonatomic) NSMutableArray *persistentPresentationQueue;
@property (readonly, nonatomic) NSMutableArray *otherPresentationQueue;
@property (readonly, nonatomic) WFDialogNotificationManager *notificationManager;
@property (readonly, nonatomic) WFScreenOnObserver *screenOnObserver;
@property (nonatomic) BOOL completePersistentModeAwaitingRemoteAlertReactivationSuccess;
@property (copy, nonatomic) id /* block */ completePersistentModeBlockAwaitingRemoteAlertReactivation;
@property (retain, nonatomic) NSString *dismissalReason;
@property (weak, nonatomic) id<WFDialogPresentationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (BOOL)shouldShowStatus;
- (void)beginConnection;
- (id)initWithNotificationManager:(id)a0;
- (void)acquireStatusPresenterAssertionIfNecessary;
- (void)activateRemoteAlert;
- (void)activateRemoteAlertTiedToBundleIdentifier:(id)a0;
- (void)activateStatusPresenter;
- (void)beginPersistentModeWithRunningContext:(id)a0 attribution:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancelWorkflow;
- (void)completePersistentModeWithSuccess:(id)a0 runningContext:(id)a1 completion:(id /* block */)a2;
- (void)dialogAlertPresenter:(id)a0 didConnectToAlert:(id)a1;
- (void)dialogAlertPresenterDidDeactivateAlert:(id)a0;
- (void)dialogAlertPresenterDidDisconnectFromAlert:(id)a0;
- (void)dialogAlertPresenterDidInvalidateAlert:(id)a0;
- (void)dismissPersistentChromeInDialog:(id)a0 success:(BOOL)a1 customAttribution:(id)a2 completionHandler:(id /* block */)a3;
- (void)dismissPresentedContentForRunningContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleRemovedIgnoredNotifications:(id)a0;
- (BOOL)hasPersistentState;
- (id)initWithListener:(id)a0 notificationManager:(id)a1 dialogAlertPresenter:(id)a2 screenOnObserver:(id)a3;
- (void)logFinishDialogPresentationWithPresentedDialog:(id)a0;
- (void)logFinishDialogPresentationWithRequest:(id)a0 presentationMode:(unsigned long long)a1 automationType:(id)a2;
- (void)logStartDialogPresentationWithRequest:(id)a0 presentationMode:(unsigned long long)a1;
- (void)postNotificationWithRequest:(id)a0 presentationMode:(unsigned long long)a1 context:(id)a2;
- (void)queue_clearPersistentModeStateIfNecessary;
- (void)queue_connectedRemoteAlertDidDisconnect;
- (void)queue_deactivateRemoteAlertAndInvalidateConnection;
- (BOOL)queue_hasMoreDialogsToPresent;
- (void)queue_presentNextDialog;
- (void)requestDismissalWithReason:(id)a0;
- (void)screenOnStateDidChange:(id)a0;
- (void)showDialogRequest:(id)a0 runningContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)statusPresenterDidConnectToService:(id)a0;
- (void)statusPresenterDidDisconnect;
- (void)trackDialogEventWithKey:(id)a0 request:(id)a1 presentationMode:(unsigned long long)a2 automationType:(id)a3;
- (void)trackSuspendShortcutWithPresentedDialog:(id)a0;
- (void)workflowStatusHostBeginConnection;

@end
