@interface IMAPDoneCommand : IMAPSingleCommand

- (void)setSequenceNumber:(unsigned long long)a0;
- (id)activityString;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
