@interface _AXFProcessMonitoringCriteria : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) double cpuThreshold;
@property (readonly, nonatomic) double cpuDuration;
@property (readonly, nonatomic) double memoryThreshold;
@property (readonly, nonatomic) double memoryDuration;

- (id)description;
- (id)initWithPID:(int)a0 cpuThreshold:(double)a1 cpuDuration:(double)a2 memoryThreshold:(double)a3 memoryDuration:(double)a4;

@end
