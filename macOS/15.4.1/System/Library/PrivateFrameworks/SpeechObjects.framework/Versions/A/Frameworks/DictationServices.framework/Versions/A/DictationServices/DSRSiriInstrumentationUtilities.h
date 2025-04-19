@class AFAnalyticsTurnBasedInstrumentationContext;

@interface DSRSiriInstrumentationUtilities : NSObject

@property (retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *instrumentationContext;
@property (readonly, retain, nonatomic) id turnIdentifier;

+ (id)schemaLocaleIdentifierWithLocaleIdentifier:(id)a0;
+ (id)sharedDSRSiriInstrumentationUtilities;

- (void)dealloc;
- (void)logDictationDidLaunch;
- (void)logDictationFinishedUsingMessageTracer:(id)a0 finishedID:(long long)a1;
- (void)logDictationInputModeSwitchEnded;
- (void)logDictationInputModeSwitchStarted;
- (void)logDictationStartedUsingMessageTracer:(id)a0;
- (void)prepareInstrumentationForNewDictationSession;

@end
