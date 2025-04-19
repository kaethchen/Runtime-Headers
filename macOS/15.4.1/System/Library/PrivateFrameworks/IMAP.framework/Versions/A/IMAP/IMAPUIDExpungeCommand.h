@interface IMAPUIDExpungeCommand : IMAPUIDCommand

- (id)activityString;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;

@end
