@interface MCSavingDraftProgressEntry : MCByteStatusProgressEntry

@property (nonatomic) BOOL userInitiated;

+ (id)keyPathsForValuesAffectingProgressName;
+ (id)keyPathsForValuesAffectingShouldDisplay;

- (BOOL)shouldDisplay;
- (double)finishDelay;
- (id)observedProgressKeypaths;
- (id)progressName;
- (id)progressSlice;
- (void)refreshValues;

@end
