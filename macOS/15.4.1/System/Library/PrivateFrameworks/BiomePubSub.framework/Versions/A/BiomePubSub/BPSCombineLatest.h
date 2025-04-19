@protocol BPSPublisher;

@interface BPSCombineLatest : BPSPublisher

@property (retain, nonatomic) id latestA;
@property (retain, nonatomic) id latestB;
@property (nonatomic) BOOL nextIsB;
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

@end
