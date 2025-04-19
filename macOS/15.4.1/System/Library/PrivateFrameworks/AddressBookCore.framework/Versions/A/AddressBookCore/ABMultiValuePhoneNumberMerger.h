@interface ABMultiValuePhoneNumberMerger : ABMultiValueMerger

+ (BOOL)canHaveSimilarValues;

- (BOOL)value:(id)a0 isSimilarToValue:(id)a1;

@end
