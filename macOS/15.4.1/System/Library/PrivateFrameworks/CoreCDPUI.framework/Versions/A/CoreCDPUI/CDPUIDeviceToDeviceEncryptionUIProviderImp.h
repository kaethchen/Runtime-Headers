@interface CDPUIDeviceToDeviceEncryptionUIProviderImp : NSObject <CDPUIDeviceToDeviceEncryptionUIProvider>

- (void)_showAlertWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (void)promptForCancelWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (void)promptForUpgradeWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;
- (void)promptIneligibilityWithContext:(id)a0 vm:(id)a1 completion:(id /* block */)a2;

@end
