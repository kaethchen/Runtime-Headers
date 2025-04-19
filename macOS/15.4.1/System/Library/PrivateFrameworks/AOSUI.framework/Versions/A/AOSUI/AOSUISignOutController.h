@class AOSUISignOutOptions, NSString, ACAccountStore, NSMutableArray;

@interface AOSUISignOutController : NSObject

@property (retain) ACAccountStore *accountStore;
@property (retain) NSMutableArray *signOutObservers;
@property (retain) AOSUISignOutOptions *signOutOptions;
@property (copy, nonatomic) NSString *telemetryFlowID;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)endProgress;
- (void)startProgress;
- (void)registerObserver:(id)a0;
- (id)_dataclassActionsForAccountDeletion:(id)a0;
- (void)_finishDeletingAccount:(id)a0 window:(id)a1 withActions:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)_preflightAndRemoveServicesWithProvidedDataClassActionsForAccount:(id)a0 window:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)_preflightServices:(id)a0 window:(id)a1 completion:(id /* block */)a2;
- (void)_removeAccount:(id)a0 withActions:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)_showDesktopAndDocumentsAlertForAccount:(id)a0 window:(id)a1 withActions:(id)a2 completion:(id /* block */)a3;
- (void)_showWalletDialogForAccount:(id)a0 window:(id)a1 completion:(id /* block */)a2;
- (void)signOutAccount:(id)a0 window:(id)a1 completion:(id /* block */)a2;
- (void)signOutAccount:(id)a0 window:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
