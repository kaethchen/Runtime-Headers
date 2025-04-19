@interface BWCoreAnalyticsReporter : NSObject

+ (void)initialize;
+ (id)sharedInstance;
+ (int)clientApplicationIDType:(id)a0;
+ (id)geometricDistortionCorrectionSourceToShortString:(int)a0;
+ (id)shallowDepthOfFieldEffectStatusToString:(int)a0;

- (void)sendEvent:(id)a0;

@end
