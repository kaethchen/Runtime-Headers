@class SiriAnalyticsXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SiriAnalyticsRemoteService : NSObject <SiriAnalyticsService> {
    NSObject<OS_dispatch_queue> *_queue;
    SiriAnalyticsXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)barrierWithCompletion:(id /* block */)a0;
- (void)createTag:(id)a0 completion:(id /* block */)a1;
- (id)_packageMessageForXPC:(id)a0 timestamp:(unsigned long long)a1 messageUUID:(id)a2 isolatedStreamUUID:(id)a3;
- (void)emitMessage:(id)a0 timestamp:(unsigned long long)a1 messageUUID:(id)a2 isolatedStreamUUID:(id)a3 completion:(id /* block */)a4;
- (void)enqueueLargeMessageObjectFromPath:(id)a0 dataUploadEvent:(id)a1 requestIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)resolvePartialMessage:(id)a0 timestamp:(unsigned long long)a1 messageUUID:(id)a2 isolatedStreamUUID:(id)a3 completion:(id /* block */)a4;
- (void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1 completion:(id /* block */)a2;

@end
