@class NSObject, AAFollowUpController;
@protocol OS_dispatch_queue;

@interface AAAccountNotificationFollowUpController : NSObject {
    AAFollowUpController *_followUpController;
    NSObject<OS_dispatch_queue> *_childConnectRemovalQueue;
}

+ (id)_secondaryAccountTypes;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_didAddAccount:(id)a0 oldAccount:(id)a1;
- (BOOL)_didDeleteAccount:(id)a0 oldAccount:(id)a1;
- (void)_dismissStartUsingFollowUp;
- (void)_updateStartUsingiCloudFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void)_updateVerifyTermsFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void)dismissAllFollowupsForAccount:(id)a0;
- (void)updateStartUsingiCloudFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;
- (void)updateVerifyTermsFollowupForAccountStore:(id)a0 account:(id)a1 oldAccount:(id)a2;

@end
