@class BPSMulticast, NSNumber;
@protocol BPSSubscriber;

@interface BPSMulticastDownstream : BMBookmarkablePublisher

@property (readonly, nonatomic) BPSMulticast *multicast;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) id<BPSSubscriber> subscriber;

- (void).cxx_destruct;
- (void)reset;
- (BOOL)completed;
- (id)nextEvent;
- (id)startWithSubscriber:(id)a0;
- (id)upstreamPublishers;
- (id)initWithMulticast:(id)a0;

@end
