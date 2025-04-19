@class LACBackgroundTask, NSString, NSObject;
@protocol OS_dispatch_queue, LACDTOLocationProvider;

@interface LACDTOLocationProviderTaskDecorator : NSObject <LACDTOLocationProvider> {
    id<LACDTOLocationProvider> _locationProvider;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) LACBackgroundTask *locationStateBackgroundTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_locationStateFromBackgroundTaskResult:(id)a0;
- (void)_runLocationStateBackgroundTask:(double)a0 completion:(id /* block */)a1;
- (void)checkIsInFamiliarLocationWithCompletion:(id /* block */)a0;
- (id)initWithLocationProvider:(id)a0 workQueue:(id)a1;

@end
