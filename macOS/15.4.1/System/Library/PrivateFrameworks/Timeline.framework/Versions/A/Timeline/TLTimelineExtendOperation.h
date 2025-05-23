@class NSArray, NSError, NSDate;

@interface TLTimelineExtendOperation : TLTimelineOperation

@property (retain) NSArray *timelineEntries;
@property (retain) NSError *extendError;
@property (readonly, nonatomic) NSDate *afterDate;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) unsigned long long limit;

+ (unsigned long long)relativePriority;

- (void).cxx_destruct;
- (id)error;
- (void)main;
- (id)initWithIdentifiable:(id)a0 afterDate:(id)a1 timeout:(double)a2 entryLimit:(unsigned long long)a3;

@end
