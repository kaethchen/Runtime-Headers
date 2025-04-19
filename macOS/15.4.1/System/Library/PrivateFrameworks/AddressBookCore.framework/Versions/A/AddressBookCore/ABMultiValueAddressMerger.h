@interface ABMultiValueAddressMerger : ABMultiValueMerger

+ (BOOL)canHaveSimilarValues;

- (id)reconcileMySubvalue:(id)a0 withTheirs:(id)a1;
- (BOOL)value:(id)a0 isSimilarToValue:(id)a1;

@end
