@class NSString, HKProxyProvider;

@interface HKWorkoutControl : NSObject <_HKXPCExportable, HKWorkoutControlClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)finishAllWorkoutsWithCompletion:(id /* block */)a0;
- (void)generateFakeDataForActivityType:(long long)a0 minutes:(double)a1 completion:(id /* block */)a2;
- (void)generatePauseOrResumeRequest:(id /* block */)a0;
- (void)generatePauseOrResumeRequestAllowingBackgroundRuntime:(BOOL)a0 completion:(id /* block */)a1;
- (void)generateWorkoutMarkerWithCompletion:(id /* block */)a0;

@end
