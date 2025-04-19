@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GCIONotificationPort : NSObject {
    struct IONotificationPort { } *_port;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_cancellationSource;
}

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)redactedDescription;
- (id)initWithQueue:(id)a0;
- (id)initWithMainPort:(unsigned int)a0;
- (id)initWithMainPort:(unsigned int)a0 queue:(id)a1;
- (id)initWithMainPort:(unsigned int)a0 queue:(id)a1 cancellationHandler:(id /* block */)a2;
- (void)setQueue:(id)a0 cancellationHandler:(id /* block */)a1;

@end
