@interface IMAPSubscribeCommand : IMAPMailboxCommand

- (id)activityString;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;

@end
