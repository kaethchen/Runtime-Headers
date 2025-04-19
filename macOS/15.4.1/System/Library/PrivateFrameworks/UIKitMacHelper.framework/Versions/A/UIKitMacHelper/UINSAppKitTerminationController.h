@protocol UINSAppKitTerminationControllerDelegate;

@interface UINSAppKitTerminationController : NSObject

@property (nonatomic) BOOL isLaunchComplete;
@property (nonatomic) BOOL isTerminatingNSApplication;
@property (nonatomic) BOOL isTerminationCancelable;
@property (nonatomic) BOOL isTerminationQuitAndCloseAllWindows;
@property (nonatomic) BOOL isTerminationExplicit;
@property (nonatomic) BOOL wasTerminationRequestedBeforeLaunchCompletion;
@property (nonatomic) BOOL shouldExpediteNextTermination;
@property (nonatomic) BOOL expeditingCanBeTakenBack;
@property (nonatomic) BOOL showedAlertForWindowSizePrefsChange;
@property (nonatomic) BOOL isWaitingForTerminationReply;
@property (nonatomic) BOOL didSetupKVO;
@property (weak, nonatomic) id<UINSAppKitTerminationControllerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_installAppVolumeUnmountObserver;
- (void)_markNextTerminationAsExpeditedNotification:(id)a0;
- (void)_markNextTerminationAsNonExpeditedNotification:(id)a0;
- (void)_resumeAppTerminationAfterLaunch:(id)a0;
- (void)_scheduleAppRelaunchAfterTermination;
- (void)_terminateAndRelaunchNow;
- (void)_uninstallAppVolumeUnmountObserver;
- (unsigned long long)appShouldTerminate;
- (void)cancelAppKitTerminationIfNecessary;
- (void)finishAppKitTerminationOrExit;
- (BOOL)launchingDidComplete;
- (void)markAppKitTerminationSuccessfullyAborted;
- (void)uiKitWantsToTerminateProcessExplicitly;

@end
