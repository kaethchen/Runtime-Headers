@class BMStoreEvent;

@interface BMPairedEventSession : BMEventSession

@property (readonly, nonatomic) BMStoreEvent *startEvent;
@property (readonly, nonatomic) BMStoreEvent *endEvent;

+ (id)openSessionsFromBookmark:(id)a0;
+ (id)sessionPublisherWithStreamPublisher:(id)a0 startingBlock:(id /* block */)a1 sessionKeyBlock:(id /* block */)a2 options:(unsigned long long)a3;

- (id)initWithKey:(id)a0 startEvent:(id)a1 endEvent:(id)a2;

@end
