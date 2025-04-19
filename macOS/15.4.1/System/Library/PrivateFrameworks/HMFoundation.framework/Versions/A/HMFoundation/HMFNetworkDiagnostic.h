@class HMFNetworkService, NSObject;
@protocol OS_dispatch_queue, HMFNetworkDiagnosticDelegate;

@interface HMFNetworkDiagnostic : HMFObject

@property (nonatomic, getter=isStarted) BOOL started;
@property (readonly, nonatomic) HMFNetworkService *device;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) id<HMFNetworkDiagnosticDelegate> delegate;

+ (id)logCategory;
+ (id)runDiagnostics:(id)a0 timeout:(double)a1;

- (id)run;
- (void).cxx_destruct;
- (void)stop;
- (id)shortDescription;
- (id)logIdentifier;
- (id)dumpReport;
- (void)handleReceivedData:(id)a0;
- (id)initWithDevice:(id)a0 delegate:(id)a1 queue:(id)a2;
- (id)runWithDelay:(double)a0;

@end
