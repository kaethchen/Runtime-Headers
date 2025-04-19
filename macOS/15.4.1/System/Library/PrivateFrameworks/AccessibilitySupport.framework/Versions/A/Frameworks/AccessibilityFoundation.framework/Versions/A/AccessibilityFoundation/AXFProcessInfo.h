@class NSString;

@interface AXFProcessInfo : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) NSString *processName;
@property (readonly, nonatomic) double cpuUsagePercentage;
@property (readonly, nonatomic) double memoryUsageMB;

- (void).cxx_destruct;
- (id)initWithPid:(int)a0 processName:(id)a1 cpuUsage:(double)a2 memoryUsageMB:(double)a3;

@end
