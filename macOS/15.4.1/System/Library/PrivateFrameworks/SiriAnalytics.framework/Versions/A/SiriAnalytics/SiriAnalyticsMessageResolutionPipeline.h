@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface SiriAnalyticsMessageResolutionPipeline : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_resolvers;
}

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)registerMessageResolver:(id)a0;
- (void)resolveAndEmitMessage:(id)a0 isolatedStreamUUID:(id)a1;
- (void)resolveMessage:(id)a0 completion:(id /* block */)a1;

@end
