@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraRecordingSessionRetryContext : NSObject

@property (readonly) double maxRetryInterval;
@property double retryInterval;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) long long retryCount;

- (void).cxx_destruct;
- (id)initWithWorkQueue:(id)a0;
- (void)computeNextRetryInterval;
- (id)initWithWorkQueue:(id)a0 preferences:(id)a1;

@end
