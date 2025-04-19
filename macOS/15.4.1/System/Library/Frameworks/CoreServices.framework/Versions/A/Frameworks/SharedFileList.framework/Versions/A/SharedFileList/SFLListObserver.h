@class NSString, NSObject;
@protocol OS_dispatch_queue, SFLList;

@interface SFLListObserver : NSObject <SFLListObserver, SFLSetObserver>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) struct __CFRunLoop { } *runloop;
@property (readonly) struct __CFString { } *runloopMode;
@property (weak, nonatomic) id<SFLList> list;
@property void /* function */ *callback;
@property void *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observersByList;
+ (BOOL)addObserver:(id)a0 forList:(id)a1;
+ (id)observersSerialQueue;
+ (BOOL)removeObserver:(id)a0 forList:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTargetQueue:(id)a0 callback:(void /* function */ *)a1 context:(void *)a2;
- (id)initWithTargetRunloop:(struct __CFRunLoop { } *)a0 runloopMode:(struct __CFString { } *)a1 callback:(void /* function */ *)a2 context:(void *)a3;
- (void)itemsDidChangeInSet:(id)a0;
- (void)listDidChange:(id)a0;
- (void)notify;

@end
