@class NSString, NSMutableDictionary, VCDurationHistogram;

@interface VCDataMLEnhance : NSObject <VCAggregatorThermalDataCollector> {
    int _thermalLevel;
    char _mlEnhanceStatus;
    BOOL _mlEnhanceLastEnabledReport;
    NSMutableDictionary *_resolutionDurations;
    VCDurationHistogram *_totalActiveDuration;
}

@property (readonly) char status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)finalize:(double)a0;
- (void)pauseAllTimers:(double)a0;
- (void)accumulate:(id)a0;
- (void)checkAndUpdateTimers:(double)a0;
- (BOOL)isMLEnhanceActive;
- (id)resolutionDurationForIndex:(id)a0;
- (void)transferStatus:(id)a0 thermalLevel:(int)a1;
- (void)updateDataWithTime:(double)a0;
- (void)updateMLEnhanceResolution:(id)a0 participantID:(id)a1 enabled:(BOOL)a2 currentTime:(double)a3;
- (void)updateReport:(id)a0;
- (void)updateStateWithPayload:(id)a0 withTime:(double)a1;
- (void)updateThermalLevel:(int)a0 withTime:(double)a1;

@end
