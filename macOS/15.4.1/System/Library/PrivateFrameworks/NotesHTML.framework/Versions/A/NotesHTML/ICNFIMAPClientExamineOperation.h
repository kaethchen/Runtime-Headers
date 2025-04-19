@interface ICNFIMAPClientExamineOperation : ICNFIMAPClientSelectOperation

- (BOOL)readOnly;
- (id)activityString;
- (id)commandTypeString;

@end
