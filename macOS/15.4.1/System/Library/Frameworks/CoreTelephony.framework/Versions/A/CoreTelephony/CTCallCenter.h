@class NSSet;

@interface CTCallCenter : NSObject

@property (readonly, retain) NSSet *currentCalls;
@property (copy, nonatomic) id /* block */ callEventHandler;

- (void).cxx_destruct;
- (id)initWithQueue:(struct dispatch_queue_s { } *)a0;

@end
