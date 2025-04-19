@class __IOGCFastPathClient, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_mach;

@interface __IOGCFastPathInputQueue : NSObject {
    struct __CFAllocator { } *allocator;
    __IOGCFastPathClient *client;
    struct IOGCFastPathInputQueueInterface **queueInterface;
    unsigned long long queueID;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _cancelHandler;
    void /* function */ *_dataAvailableCallback;
    void *_dataAvailableContext;
    NSObject<OS_dispatch_mach> *_dispatchMach;
    BOOL _activated;
    BOOL _cancelled;
}

- (void)dealloc;
- (id)description;

@end
