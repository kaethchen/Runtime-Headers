@class NSString, NSMutableArray, NSThread;

@interface VSSingleThreadDispatchQueue : NSObject

@property (nonatomic) struct __CFRunLoopSource { } *runLoopSource;
@property (retain, nonatomic) NSMutableArray *blocks;
@property (copy, nonatomic) id /* block */ startCompletionBlock;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSThread *underlyingThread;
@property (nonatomic) struct __CFRunLoop { } *underlyingRunLoop;
@property (nonatomic) long long state;

+ (id)currentQueue;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)stop;
- (void)_threadMain;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)dispatchBlock:(id /* block */)a0;
- (void)dispatchBlockSync:(id /* block */)a0;

@end
