@class NSMutableArray;
@protocol HMDHAPAccessoryTask;

@interface HMDHAPAccessoryPrimaryResidentOperationTask : HMDHAPAccessoryTask

@property (retain, nonatomic) NSMutableArray *remoteFallbackTasks;
@property (retain, nonatomic) id<HMDHAPAccessoryTask> localTask;

- (void).cxx_destruct;
- (void)execute;
- (id)_makeLocalTaskWithRequests:(id)a0 completion:(id /* block */)a1;
- (void)_processLocalRequests:(id)a0 responseWaitGroup:(id)a1;
- (id)initWithContext:(id)a0 requests:(id)a1 completion:(id /* block */)a2;

@end
