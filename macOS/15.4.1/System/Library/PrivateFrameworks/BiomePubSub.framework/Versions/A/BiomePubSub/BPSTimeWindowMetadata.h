@class NSDateInterval;

@interface BPSTimeWindowMetadata : NSObject <BPSWindowMetadata>

@property (readonly, nonatomic) NSDateInterval *dateInterval;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0;

@end
