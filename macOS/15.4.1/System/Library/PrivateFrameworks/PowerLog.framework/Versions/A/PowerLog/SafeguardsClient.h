@class NSObject, NSXPCConnection;
@protocol OS_os_log;

@interface SafeguardsClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property BOOL interrupted;
@property BOOL featureEnabled;
@property (retain) NSObject<OS_os_log> *logger;

- (id)init;
- (void).cxx_destruct;
- (void)reportExcessiveCPUUseBy:(char[33])a0 pid:(int)a1 path:(char[1024])a2 timestamp:(struct mach_timespec { unsigned int x0; int x1; })a3 observed_cpu_nsecs:(long long)a4 observation_nsecs:(long long)a5 cpu_nsecs_allowed:(long long)a6 limit_window_nsecs:(long long)a7 flags:(unsigned long long)a8;

@end
