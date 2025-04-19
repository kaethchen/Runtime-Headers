@class NSString;

@interface KernelTaskMonitorStats : NSObject

@property double cpu_time;
@property unsigned long long cpu_energy_p;
@property unsigned long long cpu_energy_e;
@property unsigned long long thread_id;
@property (retain) NSString *thread_name;

- (void).cxx_destruct;

@end
