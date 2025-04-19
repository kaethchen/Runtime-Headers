@interface PKGenericBankAccountInformation : PKBankAccountInformation

- (long long)type;
- (void)updateToLatestKeychainData;

@end
