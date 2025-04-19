@class NSDate;

@interface ATXUnifiedModeEvent : NSObject

@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;

- (void).cxx_destruct;
- (id)initWithMode:(unsigned long long)a0 startTime:(id)a1 endTime:(id)a2;

@end
