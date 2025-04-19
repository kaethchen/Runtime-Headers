@class NTPBScoreProfile;

@interface NTPBScoreProfiles : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDefaultScoreProfile;
@property (retain, nonatomic) NTPBScoreProfile *defaultScoreProfile;
@property (readonly, nonatomic) BOOL hasForYouGroupScoreProfile;
@property (retain, nonatomic) NTPBScoreProfile *forYouGroupScoreProfile;

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
