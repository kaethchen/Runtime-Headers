@class NSMutableArray;
@protocol BPSPublisher;

@interface BPSZip : BPSPublisher

@property (nonatomic) BOOL nextIsB;
@property (retain, nonatomic) NSMutableArray *eventsA;
@property (retain, nonatomic) NSMutableArray *eventsB;
@property (readonly, nonatomic) id<BPSPublisher> a;
@property (readonly, nonatomic) id<BPSPublisher> b;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)completed;
- (void)subscribe:(id)a0;
- (id)initWithA:(id)a0 b:(id)a1;
- (id)nextEvent;
- (id)upstreamPublishers;
- (id)_tryConstructResultTuple;

@end
