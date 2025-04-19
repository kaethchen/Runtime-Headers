@class HMIVideoAnalyzerConfiguration, HMIVideoAnalyzerDynamicConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface HMIVideoAnalyzerProcessingNode : HMIVideoProcessingNode

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMIVideoAnalyzerConfiguration *configuration;
@property (retain) HMIVideoAnalyzerDynamicConfiguration *dynamicConfiguration;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 workQueue:(id)a1;

@end
