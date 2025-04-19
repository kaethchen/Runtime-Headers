@class NSNumber, NSString;

@interface CSCPUTimeRestriction : NSObject <CSRestriction>

@property (readonly, nonatomic) NSNumber *cpuThreshold;
@property (readonly, nonatomic) NSNumber *timeWindow;
@property (readonly, nonatomic) BOOL fatalMitigation;
@property long long maxNumberOfKills;
@property long long maxNumberOfNonfatal;
@property long long enableLimitCPUUsage;
@property long long globalOverrideLimitCPUPercentage;
@property long long globalOverrideCPUPercentage;
@property long long globalOverrideCPUTimeWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)getProperties;
- (BOOL)applyToProcess:(id)a0;
- (id)initWithThreshold:(id)a0 andTimeWindow:(id)a1;
- (id)initWithThreshold:(id)a0 andTimeWindow:(id)a1 andFatal:(BOOL)a2;
- (int)leniencyScore;
- (BOOL)releaseForProcess:(id)a0;
- (BOOL)shouldBeFatalOnViolation;

@end
