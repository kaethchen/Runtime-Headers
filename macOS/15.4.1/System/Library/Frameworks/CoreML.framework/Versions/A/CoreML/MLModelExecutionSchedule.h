@class NSDictionary;

@interface MLModelExecutionSchedule : NSObject

@property (copy, nonatomic) NSDictionary *modelExecutionSchedule;
@property (copy, nonatomic) NSDictionary *modelExecutionScheduleByModelStructurePath;

- (id)init;
- (void).cxx_destruct;

@end
