@interface TransparencySFAnalytics : SFAnalytics

+ (id)databasePath;
+ (id)logger;

- (void)noteEventNamed:(id)a0;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)logMetric:(id)a0 withName:(id)a1;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)logSuccessForEventNamed:(id)a0;
- (void)backgroundPerform:(id /* block */)a0;
- (void)logRockwellForEventNamed:(id)a0 withAttributes:(id)a1;

@end
