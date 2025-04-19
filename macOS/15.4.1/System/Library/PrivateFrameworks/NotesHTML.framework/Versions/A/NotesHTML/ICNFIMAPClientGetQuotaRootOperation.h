@interface ICNFIMAPClientGetQuotaRootOperation : ICNFIMAPClientMailboxOperation

- (id)activityString;
- (id)commandTypeString;
- (BOOL)shouldSendAgainOnError;

@end
