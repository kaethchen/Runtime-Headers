@class NSDate;
@protocol BPSPublisher;

@interface BPSDebounce : BPSPublisher

@property (retain, nonatomic) id lastEvent;
@property (retain, nonatomic) NSDate *lastArrivalTimestamp;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) double dueTime;
@property (readonly, nonatomic) id /* block */ getTimestamp;

- (void).cxx_destruct;
- (void)reset;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (id)upstreamPublishers;
- (id)initWithUpstream:(id)a0 for:(double)a1 getTimestamp:(id /* block */)a2;

@end
