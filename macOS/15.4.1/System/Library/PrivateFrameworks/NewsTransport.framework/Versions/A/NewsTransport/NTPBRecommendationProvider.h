@class NSString, NSMutableArray;

@interface NTPBRecommendationProvider : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasProviderId;
@property (retain, nonatomic) NSString *providerId;
@property (retain, nonatomic) NSMutableArray *tagRecommendations;

+ (Class)tagRecommendationsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTagRecommendations:(id)a0;
- (void)clearTagRecommendations;
- (id)tagRecommendationsAtIndex:(unsigned long long)a0;
- (unsigned long long)tagRecommendationsCount;

@end
