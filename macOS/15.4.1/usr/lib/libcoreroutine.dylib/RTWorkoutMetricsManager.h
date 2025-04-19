@class RTManagedConfiguration;

@interface RTWorkoutMetricsManager : NSObject

@property (retain, nonatomic) RTManagedConfiguration *managedConfiguration;

+ (id)stringFromWorkoutMetricsEvent:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithManagedConfiguration:(id)a0;
- (BOOL)submitMetricsForEvent:(unsigned long long)a0 data:(id)a1 error:(id *)a2;

@end
