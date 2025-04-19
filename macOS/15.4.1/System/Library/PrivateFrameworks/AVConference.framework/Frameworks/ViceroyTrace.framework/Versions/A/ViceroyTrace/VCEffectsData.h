@class NSString, VCReportingHistogram;

@interface VCEffectsData : NSObject <VCAggregatorThermalDataCollector> {
    double _startTime;
    int _thermalLevel;
    unsigned char _effectsType;
    VCReportingHistogram *_effectsDurationsThermalHistograms[4];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)updateDataWithTime:(double)a0;
- (void)updateReport:(id)a0;
- (void)updateStateWithPayload:(id)a0 withTime:(double)a1;
- (void)updateThermalLevel:(int)a0 withTime:(double)a1;

@end
