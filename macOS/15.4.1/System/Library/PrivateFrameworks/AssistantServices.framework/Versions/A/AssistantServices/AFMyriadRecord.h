@class NSData, NSUUID;

@interface AFMyriadRecord : NSObject <NSCopying>

@property (nonatomic) BOOL advertisementDataIsDirty;
@property (nonatomic) unsigned char rawAudioGoodnessScore;
@property (nonatomic) unsigned char bump;
@property (nonatomic) unsigned char goodness;
@property (copy, nonatomic) NSData *advertisementData;
@property (nonatomic) unsigned char userConfidence;
@property (nonatomic) unsigned short pHash;
@property (copy, nonatomic) NSUUID *deviceID;
@property (nonatomic) unsigned char deviceGroup;
@property (nonatomic) unsigned char deviceClass;
@property (nonatomic) unsigned char productType;
@property (nonatomic) unsigned char tieBreaker;
@property (nonatomic) BOOL isMe;
@property (nonatomic) unsigned char isCollectedFromContextCollector;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAContinuation;
- (void)adjustByMultiplier:(float)a0 adding:(int)a1;
- (id)asAdvertisementData;
- (void)generateRandomConfidence;
- (void)generateTiebreaker;
- (BOOL)hasEqualAdvertisementData:(id)a0;
- (BOOL)hasEqualAdvertismentData:(id)a0;
- (id)initWithAudioData:(id)a0;
- (id)initWithDeviceID:(id)a0 data:(id)a1;
- (BOOL)isALateSupressionTrumpFor:(id)a0;
- (BOOL)isATrump;
- (BOOL)isAnEmergency;
- (BOOL)isAnEmergencyHandled;
- (BOOL)isCarplayTrump;
- (BOOL)isInEarTrump;
- (BOOL)isSane;
- (BOOL)isSlowdown;
- (void)setRawAudioGoodnessScore:(unsigned char)a0 withBump:(unsigned char)a1;
- (int)slowdownDelay;

@end
