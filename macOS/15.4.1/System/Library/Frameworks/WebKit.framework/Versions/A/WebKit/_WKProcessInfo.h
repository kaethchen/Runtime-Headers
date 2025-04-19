@interface _WKProcessInfo : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) double totalUserCPUTime;
@property (readonly, nonatomic) double totalSystemCPUTime;
@property (readonly, nonatomic) unsigned long long physicalFootprint;

- (id)initWithTaskInfo:(const struct TaskInfo { int x0; unsigned char x1; struct Seconds { double x0; } x2; struct Seconds { double x0; } x3; unsigned long long x4; } *)a0;

@end
