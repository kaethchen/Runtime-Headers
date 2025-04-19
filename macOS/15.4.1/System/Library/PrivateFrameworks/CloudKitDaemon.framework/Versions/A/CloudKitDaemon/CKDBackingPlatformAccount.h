@interface CKDBackingPlatformAccount : CKDBackingAccount

- (long long)accountType;
- (id)initWithAppleAccount:(id)a0;
- (id)ckAccount;
- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)a0;

@end
