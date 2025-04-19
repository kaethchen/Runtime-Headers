@interface IMAPGetQuotaRootCommand : IMAPMailboxCommand

- (id)activityString;
- (id)commandTypeString;
- (BOOL)shouldSendAgainOnError;

@end
