@class NSString, NSData;

@interface NTPBAdImpression : PBCodable <NSCopying> {
    struct { unsigned char videoAdDuration : 1; unsigned char adCreativeType : 1; unsigned char adImpressionTimeThreshold : 1; unsigned char adLocation : 1; unsigned char adType : 1; unsigned char feedType : 1; unsigned char groupType : 1; unsigned char newsProductType : 1; unsigned char videoAdPlacementPosition : 1; unsigned char videoAdType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIadCampaign;
@property (retain, nonatomic) NSString *iadCampaign;
@property (readonly, nonatomic) BOOL hasIadLine;
@property (retain, nonatomic) NSString *iadLine;
@property (readonly, nonatomic) BOOL hasIadAd;
@property (retain, nonatomic) NSString *iadAd;
@property (nonatomic) BOOL hasAdType;
@property (nonatomic) int adType;
@property (nonatomic) BOOL hasAdCreativeType;
@property (nonatomic) int adCreativeType;
@property (nonatomic) BOOL hasAdLocation;
@property (nonatomic) int adLocation;
@property (nonatomic) BOOL hasNewsProductType;
@property (nonatomic) int newsProductType;
@property (nonatomic) BOOL hasVideoAdType;
@property (nonatomic) int videoAdType;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) BOOL hasVideoAdDuration;
@property (nonatomic) long long videoAdDuration;
@property (nonatomic) BOOL hasVideoAdPlacementPosition;
@property (nonatomic) int videoAdPlacementPosition;
@property (readonly, nonatomic) BOOL hasAdImpressionId;
@property (retain, nonatomic) NSString *adImpressionId;
@property (nonatomic) BOOL hasAdImpressionTimeThreshold;
@property (nonatomic) int adImpressionTimeThreshold;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;
@property (readonly, nonatomic) BOOL hasPreviousArticleId;
@property (retain, nonatomic) NSString *previousArticleId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAdType:(id)a0;
- (int)StringAsAdCreativeType:(id)a0;
- (int)StringAsAdLocation:(id)a0;
- (int)StringAsFeedType:(id)a0;
- (int)StringAsNewsProductType:(id)a0;
- (id)adTypeAsString:(int)a0;
- (int)StringAsGroupType:(id)a0;
- (int)StringAsVideoAdType:(id)a0;
- (id)adCreativeTypeAsString:(int)a0;
- (id)adLocationAsString:(int)a0;
- (id)feedTypeAsString:(int)a0;
- (id)groupTypeAsString:(int)a0;
- (id)newsProductTypeAsString:(int)a0;
- (id)videoAdTypeAsString:(int)a0;

@end
