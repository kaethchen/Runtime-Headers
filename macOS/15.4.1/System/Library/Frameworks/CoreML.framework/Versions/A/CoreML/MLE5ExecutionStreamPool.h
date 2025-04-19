@class MLModelConfiguration, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MLE5ExecutionStreamPool : NSObject

@property (readonly, copy, nonatomic) MLModelConfiguration *modelConfiguration;
@property (readonly, nonatomic) NSMutableSet *pool;
@property (readonly, nonatomic) NSMutableSet *allStreams;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) unsigned long long modelSignpostId;

- (void).cxx_destruct;
- (id)takeOut;
- (void)_emitMappingTracepointForStream:(id)a0;
- (void)enableInstrumentsTracing;
- (id)initWithModelConfiguration:(id)a0 modelSignpostId:(unsigned long long)a1;
- (void)putBack:(id)a0;

@end
