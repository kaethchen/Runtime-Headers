@class NSMutableDictionary, NSMutableIndexSet;

@interface BRCPipelineJobQueue : NSObject {
    NSMutableDictionary *_qosToGroupingToJobMapping;
    NSMutableIndexSet *_activeQOSValues;
}

- (id)init;
- (void).cxx_destruct;
- (void)addJob:(id)a0 withGroupIdentifier:(id)a1;
- (void)dequeueHighestQualityOfServiceJobsWithHandler:(id /* block */)a0;
- (void)dumpToContext:(id)a0;
- (void)removeJob:(id)a0 withGroupIdentifier:(id)a1;

@end
