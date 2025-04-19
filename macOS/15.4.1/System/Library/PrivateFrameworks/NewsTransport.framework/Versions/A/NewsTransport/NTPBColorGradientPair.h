@class NTPBColorGradient;

@interface NTPBColorGradientPair : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLight;
@property (retain, nonatomic) NTPBColorGradient *light;
@property (readonly, nonatomic) BOOL hasDark;
@property (retain, nonatomic) NTPBColorGradient *dark;

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
