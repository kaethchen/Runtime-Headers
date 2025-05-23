@class NSString, NSMutableArray;

@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying> {
    struct { unsigned char feedType : 1; unsigned char recommendationBrickType : 1; unsigned char exposedFromReferredUser : 1; } _has;
}

@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSMutableArray *recommendedFeedIds;
@property (nonatomic) BOOL hasRecommendationBrickType;
@property (nonatomic) int recommendationBrickType;
@property (nonatomic) BOOL hasExposedFromReferredUser;
@property (nonatomic) BOOL exposedFromReferredUser;

+ (Class)recommendedFeedIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFeedType:(id)a0;
- (int)StringAsRecommendationBrickType:(id)a0;
- (void)addRecommendedFeedIds:(id)a0;
- (void)clearRecommendedFeedIds;
- (id)feedTypeAsString:(int)a0;
- (id)recommendationBrickTypeAsString:(int)a0;
- (id)recommendedFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)recommendedFeedIdsCount;

@end
