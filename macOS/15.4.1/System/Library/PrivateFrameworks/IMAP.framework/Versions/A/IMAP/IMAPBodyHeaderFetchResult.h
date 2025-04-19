@interface IMAPBodyHeaderFetchResult : IMAPBodyFetchResult

- (id)section;
- (BOOL)needsLineEndingConversion;

@end
