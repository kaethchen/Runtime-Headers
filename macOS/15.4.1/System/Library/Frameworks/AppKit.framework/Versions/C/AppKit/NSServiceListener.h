@class NSMutableArray;

@interface NSServiceListener : NSObject {
    NSMutableArray *serviceProviders;
}

- (BOOL)_displaySandboxPermissionDialogWithRequestingAppName:(id)a0 serviceTitle:(id)a1;
- (BOOL)_doInvokeServiceIn:(id)a0 msg:(id)a1 pb:(id)a2 userData:(id)a3 error:(id *)a4 unhide:(BOOL)a5;
- (BOOL)_verifyAgainstBundleWithServiceName:(id)a0 message:(id)a1 restricted:(BOOL)a2;
- (BOOL)_verifyService:(id)a0 requestRestricted:(BOOL)a1 isAppleApp:(BOOL)a2;
- (void)addServiceProvider:(id)a0;
- (id)providerRespondingToSelector:(SEL)a0;
- (void)removeServiceProvider:(id)a0;

@end
