@interface MPSGPURawCounters : MPSCounters {
    unsigned long long _maxFrequency;
    unsigned long long _maxPState;
}

- (void)dealloc;
- (void)startSampling;
- (void)disableCounters;
- (void)aggregatePerfSamplesForCommandBuffer:(id)a0 firstCommandBuffer:(id)a1;
- (int)countEncodersInWorkload:(id)a0 withExtraRequestedCounter:(id)a1 forStatistics:(id)a2 userSpecifiedIterations:(BOOL)a3 includingBlitSamples:(BOOL)a4;
- (int)enableCountersIncludingBlitSamples:(BOOL)a0;
- (void)getPStateAndFrequency;
- (id)initWithCommandQueue:(id)a0 addQeueuPerfSampleHandler:(BOOL)a1;
- (int)requestCountersWithExtraRequestedCounter:(id)a0;
- (int)requestCountersWithExtraRequestedCounter:(id)a0 fillStats:(id)a1;

@end
