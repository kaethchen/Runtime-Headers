@class NSUUID;

@interface CSFTimerContext : NSObject

@property (readonly, nonatomic) double timerInterval;
@property (readonly, nonatomic) NSUUID *identifier;

- (void).cxx_destruct;
- (id)initTimerinterval:(double)a0 identifier:(id)a1;

@end
