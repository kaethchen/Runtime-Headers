@class NSURL, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSKFileObserver : NSObject

@property (copy, nonatomic) id /* block */ eventHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sourceQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (nonatomic) int descriptor;
@property (copy, nonatomic) id /* block */ descriptorDidOpenHandler;
@property (nonatomic) BOOL started;
@property (readonly, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic) long long options;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)start;
- (void)stop;
- (id)initWithURL:(id)a0 eventHandler:(id /* block */)a1;
- (void)observerWillStart;

@end
