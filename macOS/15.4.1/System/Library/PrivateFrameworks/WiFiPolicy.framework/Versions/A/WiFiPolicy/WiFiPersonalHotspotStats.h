@class NSString;

@interface WiFiPersonalHotspotStats : NSObject

@property (readonly, nonatomic) double joinStartedAt;
@property (nonatomic) double personalHotspotDiscoveryEndedAt;
@property (readonly, nonatomic) double joinEndedAt;
@property (readonly, nonatomic) double latency;
@property (readonly, nonatomic) BOOL successfulJoinAttempt;
@property (readonly, nonatomic) NSString *joinReason;
@property (readonly, nonatomic) NSString *failureReporter;
@property (readonly, nonatomic) long long joinFailureCode;
@property (readonly, nonatomic) long long band;
@property (readonly, nonatomic) NSString *deviceName;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)__resetWiFiPersonalHotspotStats;
- (void)__submitWiFiPersonalHotspotStats:(double)a0 end:(double)a1 latencyType:(id)a2;
- (void)setJoinEndedEvent:(double)a0 successfulJoinAttempt:(BOOL)a1 joinFailureCode:(long long)a2 failureReporter:(id)a3 band:(long long)a4 deviceName:(id)a5;
- (void)setJoinStartedEvent:(double)a0 withReason:(unsigned long long)a1 deviceName:(id)a2;

@end
