@class NSString;

@interface CHPowerLogger : NSObject <CHPowerLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logModelLoaded:(unsigned long long)a0;
- (void)logModelInference:(unsigned long long)a0 startTimestamp:(double)a1 endTimestamp:(double)a2 data:(id)a3;
- (void)logModelUnloaded:(unsigned long long)a0;

@end
