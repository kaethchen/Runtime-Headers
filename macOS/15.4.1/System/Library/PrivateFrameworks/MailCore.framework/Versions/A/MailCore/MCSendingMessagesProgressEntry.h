@interface MCSendingMessagesProgressEntry : MCByteStatusProgressEntry

+ (id)keyPathsForValuesAffectingProgressName;

- (double)finishDelay;
- (id)progressName;
- (id)progressSlice;

@end
