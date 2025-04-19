@class NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface WiFiSoftApUsageMonitor : NSObject

@property (retain, nonatomic) NSDate *softApOldestActiveTime;
@property (nonatomic) unsigned long long softApUpCount;
@property (nonatomic) unsigned long long noClientConnectedSessionCount;
@property (nonatomic) unsigned long long onlyAppleClientConnectedSessionCount;
@property (nonatomic) unsigned long long onlyOtherClientConnectedSessionCount;
@property (nonatomic) unsigned long long mixClientConnectedSessionCount;
@property (nonatomic) unsigned long long appleClientConnectCount;
@property (nonatomic) unsigned long long otherClientConnectCount;
@property (nonatomic) unsigned long long twoFourGHzSessionCount;
@property (nonatomic) unsigned long long fiveGHzSessionCount;
@property (nonatomic) BOOL compatibilityEnabled;
@property (nonatomic) BOOL compatibilityToggled;
@property (nonatomic) BOOL statsValid;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;

+ (id)sharedInstance;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)resetStats;
- (id)statsDictionary;
- (void)initStats;
- (void)initStats:(id)a0;
- (void)persistStats;
- (void)resetStatsInternal;
- (void)statsDictionaryInternal:(id)a0;
- (void)updateStats:(id)a0;
- (void)updateStatsInternal:(id)a0;

@end
