@interface MCByteStatusProgressEntry : MCProgressEntry

@property (nonatomic) long long totalBytes;

+ (id)keyPathsForValuesAffectingStatusText;

- (id)statusText;
- (BOOL)indeterminate;
- (id)observedProgressKeyPaths;
- (void)refreshValues;

@end
