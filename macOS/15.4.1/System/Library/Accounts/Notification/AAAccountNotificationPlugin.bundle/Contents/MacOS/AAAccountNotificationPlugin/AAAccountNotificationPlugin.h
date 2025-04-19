@class NSString, AAAccountNotificationFollowUpController, NSObject;
@protocol OS_dispatch_queue;

@interface AAAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {
    NSObject<OS_dispatch_queue> *_didChangeBackgroundQueue;
    NSObject<OS_dispatch_queue> *_fmBackgroundQueue;
    NSObject<OS_dispatch_queue> *_daemonBackgroundQueue;
    NSObject<OS_dispatch_queue> *_protoAccountRemovalQueue;
    AAAccountNotificationFollowUpController *_followUpController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (BOOL)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (BOOL)canSaveAccount:(id)a0 inStore:(id)a1;
- (void)_handleFindMyChangesForAccount:(id)a0;
- (void)_addCurrentDataclassManagerVersionForNewAccount:(id)a0;
- (id)_availableAccountTypesForBeneficiaryAccounts;
- (void)_endWarmupForAccount:(id)a0 inStore:(id)a1;
- (BOOL)_updateForWillChangeWithAddedorModifiedAccount:(id)a0 store:(id)a1;
- (BOOL)_updateOrRemoveBenefactorAccount:(id)a0 inStore:(id)a1;
- (BOOL)_warmupShouldHaveCompletedForAccount:(id)a0;

@end
