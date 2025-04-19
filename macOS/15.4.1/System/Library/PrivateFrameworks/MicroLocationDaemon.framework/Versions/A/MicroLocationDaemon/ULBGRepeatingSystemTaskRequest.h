@interface ULBGRepeatingSystemTaskRequest : ULBGSystemTaskRequest

@property (nonatomic) double interval;
@property (nonatomic) double minDurationBetweenInstances;

+ (id)analyticsULBGRepeatingSystemTaskRequest;
+ (id)exportBackupULBGRepeatingSystemTaskRequest;
+ (id)learningULBGRepeatingSystemTaskRequest;
+ (id)maintenanceULBGRepeatingSystemTaskRequest;
+ (id)routineStateAnalyzerULBGRepeatingSystemTaskRequest;
+ (id)wifiAnalyzerULBGRepeatingSystemTaskRequest;

- (id)createRequestFromSelf;
- (id)initWithIdentifier:(id)a0 interval:(double)a1 minDurationBetweenInstances:(double)a2;

@end
