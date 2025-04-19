@class NSArray, NSString, SCDAFAdvertisement, NSDate, NSNumber;

@interface SCDAArbitrationParticipationContext : NSObject

@property (readonly, nonatomic) NSNumber *msSinceLastWin;
@property (readonly, nonatomic) NSNumber *msSinceTrigger;
@property (readonly, nonatomic) unsigned long long result;
@property (readonly, nonatomic) unsigned long long triggerType;
@property (readonly, nonatomic) NSArray *trumpReasons;
@property (readonly, nonatomic) unsigned char rawGoodnessScore;
@property (readonly, copy, nonatomic) NSDate *requestStartDate;
@property (readonly, copy, nonatomic) NSDate *voiceTriggerDate;
@property (readonly, copy, nonatomic) NSString *cdaId;
@property (readonly, nonatomic) NSArray *seenAdvertisements;
@property (readonly, nonatomic) NSArray *boosts;
@property (readonly, nonatomic) SCDAFAdvertisement *myAdvertisement;
@property (readonly, nonatomic) SCDAFAdvertisement *winnerAdvertisement;

+ (id)_convertBoosts:(id)a0;
+ (id)_convertLastActivationTime:(double)a0;
+ (unsigned long long)_convertTriggerType:(int)a0;
+ (id)_convertTrumpReason:(id)a0;

- (void).cxx_destruct;
- (void)_processAdvertisements:(id)a0 winnerAdvertisement:(id)a1;
- (id)initAdvertisements:(id)a0 decision:(BOOL)a1 requestStartDate:(id)a2 session:(id)a3 voiceTriggerTime:(double)a4 winnerAdvertisement:(id)a5;
- (void)updateBoosts:(id)a0 triggerType:(int)a1 lastWin:(unsigned long long)a2 lastDecision:(unsigned long long)a3;

@end
