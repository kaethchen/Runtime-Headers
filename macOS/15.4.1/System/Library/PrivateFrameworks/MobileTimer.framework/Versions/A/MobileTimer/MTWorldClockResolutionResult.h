@interface MTWorldClockResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)confirmationRequiredWithMTWorldClockToConfirm:(id)a0;
+ (id)disambiguationWithMTWorldClocksToDisambiguate:(id)a0;
+ (id)successWithResolvedMTWorldClock:(id)a0;

@end
