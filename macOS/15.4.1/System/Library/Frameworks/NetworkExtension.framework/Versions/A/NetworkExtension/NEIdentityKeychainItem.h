@interface NEIdentityKeychainItem : NEKeychainItem

+ (id)copyIdentities:(id)a0 fromDomain:(long long)a1;
+ (id)importPKCS12Data:(id)a0 passphrase:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)sync;
- (id)copyData;
- (id)copyPassword;
- (id)copyQueryWithReturnTypes:(id)a0;
- (id)initWithData:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (id)initWithPassword:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (void)syncUsingConfiguration:(id)a0 accountName:(id)a1 passwordType:(long long)a2 identifierSuffix:(id)a3;

@end
