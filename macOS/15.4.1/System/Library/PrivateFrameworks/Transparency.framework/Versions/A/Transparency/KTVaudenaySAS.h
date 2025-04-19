@class NSData, KTVaudenaySASConfiguration;

@interface KTVaudenaySAS : NSObject

@property (retain) KTVaudenaySASConfiguration *config;
@property BOOL initiator;
@property (retain) NSData *initiatorInfo;
@property (retain) NSData *initiatorRandom;
@property (retain) NSData *acceptorInfo;
@property (retain) NSData *acceptorRandom;
@property (retain) NSData *sentUndisclosedRandom;

+ (id)randomValueOfLength:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initAcceptorWithPublic:(id)a0 configuration:(id)a1;
- (id)initInitiatorWithPublic:(id)a0 configuration:(id)a1;
- (id)selfRandom;
- (BOOL)setInitiatorUndisclosedRandom:(id)a0;
- (void)setPeerPublic:(id)a0;
- (BOOL)setPeerRandom:(id)a0;
- (id)shortAuthenticationString;
- (id)undisclosedInitiatorRandom;
- (id)undisclosedInitiatorValue:(id)a0;

@end
