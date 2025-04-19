@class PowerUIAnalyticsManager, NSString, NSObject;
@protocol OS_os_log;

@interface PowerUIBatteryMitigationManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) PowerUIAnalyticsManager *analyticsManager;
@property (retain, nonatomic) NSString *defaultsDomain;
@property (readonly) unsigned long long decisionSignalID;
@property (readonly, nonatomic) BOOL mitigationsCurrentlyEnabled;

+ (id)sharedManager;
+ (id)managerWithDefaultsDomain:(id)a0;

- (void).cxx_destruct;
- (BOOL)fetchCurrentMitigationState;
- (id)getGaugingMitigationDict;
- (id)initWithDefaultsDomain:(id)a0;
- (void)submitGaugingAnalytics:(id)a0;

@end
