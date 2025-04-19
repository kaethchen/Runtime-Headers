@interface IMAPExamineCommand : IMAPSelectCommand

- (BOOL)readOnly;
- (id)activityString;
- (id)commandTypeString;

@end
