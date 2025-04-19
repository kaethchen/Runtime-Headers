@class NSString;

@interface TIHapticsUsageAnalyzer : NSObject <TITypingSessionAnalyzing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)idleTimeBuckets;
+ (id)bucketForTime:(double)a0;

- (id)init;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (void)dispatchIdleEventType:(id)a0 idleTime:(double)a1 session:(id)a2;
- (void)dispatchSessionEventWithActiveTime:(double)a0 visibleTime:(double)a1 session:(id)a2;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (void)registerEventSpec;

@end
