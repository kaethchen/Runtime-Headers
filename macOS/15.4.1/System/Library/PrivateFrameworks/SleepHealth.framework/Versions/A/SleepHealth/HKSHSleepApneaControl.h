@class NSString, HKTaskServerProxyProvider, HKHealthStore;

@interface HKSHSleepApneaControl : NSObject <_HKXPCExportable, HKSHSleepApneaControlClient> {
    HKTaskServerProxyProvider *_proxyProvider;
    HKHealthStore *_healthStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (BOOL)forceBreathingDisturbanceAnalysisWithError:(id *)a0;
- (id)getDateIntervalOfLastAnalysis;
- (id)getSamplesFromLastAnalysisWithError:(id *)a0;
- (BOOL)overrideTimeIntervalAndResetActivityWithTimeInterval:(double)a0 error:(id *)a1;

@end
