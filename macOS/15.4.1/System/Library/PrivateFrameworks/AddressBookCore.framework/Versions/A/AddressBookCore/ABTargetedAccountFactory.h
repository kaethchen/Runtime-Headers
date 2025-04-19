@interface ABTargetedAccountFactory : ABAccountFactory

- (id)accountBuilderForAccountAtPath:(id)a0 withIdentifier:(id)a1;
- (Class)builderOverrideSourceClass;
- (id)directoryServicesAccount;
- (id)makeComponentsValidationHelperWithComponents:(id)a0;
- (BOOL)shouldUseACAccountPersistence;
- (id)uncachedLdapAccounts;

@end
