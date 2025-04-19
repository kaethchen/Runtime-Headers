@class NSString;

@interface NTPBPaywallDescription : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasChannelPaywall;
@property (retain, nonatomic) NSString *channelPaywall;
@property (readonly, nonatomic) BOOL hasLeakyPaywall;
@property (retain, nonatomic) NSString *leakyPaywall;
@property (readonly, nonatomic) BOOL hasPromotionalPaywall;
@property (retain, nonatomic) NSString *promotionalPaywall;
@property (readonly, nonatomic) BOOL hasHardPaywall;
@property (retain, nonatomic) NSString *hardPaywall;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
