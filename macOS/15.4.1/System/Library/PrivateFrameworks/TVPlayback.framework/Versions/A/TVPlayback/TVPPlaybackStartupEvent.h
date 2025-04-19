@class NSString, NSNumber;

@interface TVPPlaybackStartupEvent : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSNumber *durationMS;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 timestamp:(double)a1 durationMS:(id)a2;

@end
