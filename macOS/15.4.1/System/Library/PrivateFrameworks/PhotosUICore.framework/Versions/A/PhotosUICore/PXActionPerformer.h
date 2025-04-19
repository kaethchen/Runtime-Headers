@class NSUndoManager, NSString, NSObject;
@protocol PXAnonymousViewController, PXActionPerformerDelegate, PXPresentationEnvironment;

@interface PXActionPerformer : NSObject {
    id /* block */ _completionHandler;
}

@property (class, readonly, nonatomic) BOOL isActionDestructive;

@property (readonly, nonatomic) NSObject<PXAnonymousViewController> *hostViewController;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly) BOOL prefersAssetInclusionAfterRemoval;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) BOOL success;
@property (weak, nonatomic) id sender;
@property (readonly, nonatomic, getter=isCancellable) BOOL cancellable;
@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<PXActionPerformerDelegate> delegate;
@property (readonly, nonatomic) NSObject<PXAnonymousViewController> *presentedViewController;
@property (retain, nonatomic) id<PXPresentationEnvironment> presentationEnvironment;
@property (readonly, nonatomic) BOOL presentsMenu;
@property (readonly, nonatomic) BOOL shouldPreventTargetedDismissalAnimation;
@property (readonly, nonatomic) BOOL canPresentAlertInBackgroudState;

+ (id)createIndeterminateProgressToastForActionPerformer:(id)a0 title:(id)a1 description:(id)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)menuItem;
- (BOOL)dismissAlert:(id)a0;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (id)initWithActionType:(id)a0;
- (BOOL)presentMenu:(id)a0;
- (BOOL)presentViewController:(id)a0;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)performUserInteractionTask;
- (void)_completeStateWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_completeUnlockTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_handleStepFinished:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_performUnlockIfNeeded;
- (void)_transitionToState:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)cancelActionWithCompletionHandler:(id /* block */)a0;
- (void)completeBackgroundTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)dismissAlertWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)dismissViewController:(id)a0 completionHandler:(id /* block */)a1;
- (id)localizedSubtitleForUseCase:(unsigned long long)a0;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (long long)menuItemState;
- (void)performActionFromMenuItem;
- (void)performBackgroundTask;
- (BOOL)performerResetsAfterCompletion;
- (BOOL)presentAlert:(id)a0 withCompletion:(id /* block */)a1;
- (id)presentAlertWithConfigurationHandler:(id /* block */)a0;
- (BOOL)presentAlertWithTitle:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)presentAlertWithTitle:(id)a0 message:(id)a1 radarConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)presentViewController:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)pushViewController:(id)a0;
- (BOOL)requiresUnlockedDevice;

@end
