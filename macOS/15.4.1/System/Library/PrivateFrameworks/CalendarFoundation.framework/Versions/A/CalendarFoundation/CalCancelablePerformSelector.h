@class NSRunLoop;

@interface CalCancelablePerformSelector : NSObject <CalCancelable>

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSRunLoop *runloop;

- (void).cxx_destruct;
- (void)performAfterDelay:(double)a0;
- (void)cancel;
- (id)initWithBlock:(id /* block */)a0;
- (void)_performBlock:(id /* block */)a0;

@end
