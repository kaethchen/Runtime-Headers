@interface MCDownloadingMessagesProgressEntry : MCDeterminateUnitProgressEntry

+ (id)keyPathsForValuesAffectingProgressName;

- (long long)_significantMessageCount;
- (BOOL)hasSignificantDeferrableWork;
- (id)progressName;
- (id)progressSlice;

@end
