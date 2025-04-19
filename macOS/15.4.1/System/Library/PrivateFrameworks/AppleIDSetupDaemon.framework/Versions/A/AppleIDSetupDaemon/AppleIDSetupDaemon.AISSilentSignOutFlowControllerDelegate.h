@class NSString, NSError, ACAccount, AASignOutFlowController;

@interface AppleIDSetupDaemon.AISSilentSignOutFlowControllerDelegate : NSObject <AASignOutFlowControllerDelegate> {
    void /* unknown type, empty encoding */ accountStore;
}

- (id)init;
- (void).cxx_destruct;
- (void)signOutFlowController:(AASignOutFlowController *)a0 disableFindMyDeviceForAccount:(ACAccount *)a1 completion:(void (^)(BOOL, NSError *))a2;
- (void)signOutFlowController:(AASignOutFlowController *)a0 performWalrusValidationForAccount:(ACAccount *)a1 completion:(void (^)(BOOL, NSError *))a2;
- (void)signOutFlowController:(AASignOutFlowController *)a0 showAlertWithTitle:(NSString *)a1 message:(NSString *)a2 completion:(void (^)(BOOL))a3;
- (void)signOutFlowController:(AASignOutFlowController *)a0 signOutAccount:(ACAccount *)a1 completion:(void (^)(BOOL, NSError *))a2;

@end
