@class CDPDCircleController, CDPDSecureBackupController, CDPContext, AAFKeychainManager;
@protocol CDPStateUIProviderInternal, CDPLocalSecretFollowUpProvider;

@interface CDPDLocalSecretController : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate>

@property (retain, nonatomic) CDPContext *context;
@property (retain, nonatomic) CDPDCircleController *circleController;
@property (retain, nonatomic) CDPDSecureBackupController *secureBackupController;
@property (retain, nonatomic) AAFKeychainManager *keychainManager;
@property (retain, nonatomic) id<CDPStateUIProviderInternal> uiProvider;
@property (retain, nonatomic) id<CDPLocalSecretFollowUpProvider> followUpProvider;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)localSecretChangedTo:(id)a0 secretType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)attemptToEscrowPreRecord:(id)a0 completion:(id /* block */)a1;
- (void)finishOfflineLocalSecretChangeWithCompletion:(id /* block */)a0;
- (void)_attemptToEscrowPreRecord:(id)a0 completion:(id /* block */)a1;
- (id)_cdpStateMachine;
- (void)_collectLocalSecretWithCompletion:(id /* block */)a0;
- (void)_createContextForSecret:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_handleCompletionStatus:(BOOL)a0 preRecord:(BOOL)a1;
- (void)_localSecretChangedTo:(id)a0 secretType:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)_makeICSCUpdateFinishEvent;
- (void)_repairWithStateMachine:(id)a0 completion:(id /* block */)a1;
- (void)_sendiCSCUpdateFinishEvent:(id)a0 didUpdate:(BOOL)a1 error:(id)a2;
- (void)_sendiCSCUpdateStartEvent;
- (void)_setContextWithAuthResults:(id)a0;
- (void)_wrappedLocalSecretChangedTo:(id)a0 secretType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)circleController:(id)a0 secureBackupRecordsArePresentWithCompletion:(id /* block */)a1;
- (id)circlePeerIDForSecureBackupController:(id)a0;
- (id)contextForController:(id)a0;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(id /* block */)a0;
- (void)promptForLocalSecretWithCompletion:(id /* block */)a0;
- (id)secureChannelContextForController:(id)a0;
- (BOOL)synchronizeCircleViewsForSecureBackupContext:(id)a0;

@end
