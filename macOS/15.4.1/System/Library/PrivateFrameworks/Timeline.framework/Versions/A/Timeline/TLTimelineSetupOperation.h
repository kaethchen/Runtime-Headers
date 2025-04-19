@class NSError, TLTimeline;

@interface TLTimelineSetupOperation : TLTimelineOperation

@property (retain) TLTimeline *timeline;
@property (retain) NSError *setupError;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) unsigned long long entryLimit;

+ (unsigned long long)relativePriority;

- (void).cxx_destruct;
- (id)error;
- (void)main;
- (id)initWithIdentifiable:(id)a0;
- (id)initWithIdentifiable:(id)a0 timeout:(double)a1 entryLimit:(unsigned long long)a2;

@end
