@class NSMutableArray;

@interface FSWorkQueue : NSObject

@property (retain) NSMutableArray *queues;
@property int index;

- (void).cxx_destruct;
- (void)enqueue:(id /* block */)a0;
- (id)initQueueWithDomain:(id)a0 concurrency:(int)a1;

@end
