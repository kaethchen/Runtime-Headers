@class NSString, NSArray, SCDAFDevice, NSDate, NSNumber, SCDAFAdvertisement;

@interface SCDAFParticipation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double rawGoodnessScore;
@property (nonatomic) unsigned long long result;
@property (copy, nonatomic) NSNumber *timeSinceLastWinInMilliseconds;
@property (copy, nonatomic) NSNumber *timeSinceTriggerInMilliseconds;
@property (copy, nonatomic) NSNumber *triggerType;
@property (copy, nonatomic) NSString *cdaId;
@property (retain, nonatomic) NSArray *trumpReasons;
@property (retain, nonatomic) NSArray *seenAdvertisements;
@property (retain, nonatomic) NSArray *boosts;
@property (retain, nonatomic) SCDAFDevice *device;
@property (retain, nonatomic) NSDate *requestStartDate;
@property (retain, nonatomic) NSDate *voiceTriggerDate;
@property (retain, nonatomic) SCDAFAdvertisement *advertisement;
@property (retain, nonatomic) SCDAFAdvertisement *winnerAdvertisement;
@property (copy, nonatomic) NSNumber *alarmState;
@property (copy, nonatomic) NSNumber *mediaState;
@property (copy, nonatomic) NSNumber *timerState;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *userRequestText;
@property (retain, nonatomic) NSArray *nearbyDevices;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initNearMiss;
- (id)initWithAdvertisement:(id)a0 boosts:(id)a1 cdaId:(id)a2 rawGoodnessScore:(double)a3 requestStartDate:(id)a4 result:(unsigned long long)a5 seenAdvertisements:(id)a6 timeSinceLastTriggerInMilliseconds:(id)a7 timeSinceLastWinInMilliseconds:(id)a8 triggerType:(id)a9 trumpReasons:(id)a10 voiceTriggerDate:(id)a11 winnerAdvertisement:(id)a12;
- (id)initWithAdvertisement:(id)a0 alarmState:(id)a1 boosts:(id)a2 cdaId:(id)a3 device:(id)a4 mediaState:(id)a5 nearbyDevices:(id)a6 rawGoodnessScore:(double)a7 requestId:(id)a8 requestStartDate:(id)a9 result:(unsigned long long)a10 seenAdvertisements:(id)a11 timeSinceLastTriggerInMilliseconds:(id)a12 timeSinceLastWinInMilliseconds:(id)a13 timerState:(id)a14 triggerType:(id)a15 trumpReasons:(id)a16 userRequestText:(id)a17 voiceTriggerDate:(id)a18 winnerAdvertisement:(id)a19;

@end
