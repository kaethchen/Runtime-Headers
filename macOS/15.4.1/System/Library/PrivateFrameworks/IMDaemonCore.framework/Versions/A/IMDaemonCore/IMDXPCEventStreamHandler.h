@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface IMDXPCEventStreamHandler : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *delegateToQueue;

- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)didReceiveEventWithName:(id)a0 userInfo:(id)a1;
- (id)initWithEventStreamName:(const char *)a0;
- (id)queueForDelegate:(id)a0;

@end
