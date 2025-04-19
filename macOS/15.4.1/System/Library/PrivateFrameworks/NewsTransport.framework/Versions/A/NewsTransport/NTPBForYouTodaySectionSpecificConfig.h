@interface NTPBForYouTodaySectionSpecificConfig : PBCodable <NSCopying> {
    struct { unsigned char cutoffTime : 1; unsigned char feedItemMaxCount : 1; unsigned char feedMaxCount : 1; unsigned char headlinesPerFeedFetchCount : 1; unsigned char localNewsPromotionIndex : 1; unsigned char minimumUpdateInterval : 1; unsigned char subscriptionsFetchCount : 1; unsigned char fetchingBin : 1; } _has;
}

@property (nonatomic) BOOL hasCutoffTime;
@property (nonatomic) unsigned long long cutoffTime;
@property (nonatomic) BOOL hasSubscriptionsFetchCount;
@property (nonatomic) unsigned long long subscriptionsFetchCount;
@property (nonatomic) BOOL hasHeadlinesPerFeedFetchCount;
@property (nonatomic) unsigned long long headlinesPerFeedFetchCount;
@property (nonatomic) BOOL hasFetchingBin;
@property (nonatomic) int fetchingBin;
@property (nonatomic) BOOL hasMinimumUpdateInterval;
@property (nonatomic) unsigned long long minimumUpdateInterval;
@property (nonatomic) BOOL hasLocalNewsPromotionIndex;
@property (nonatomic) unsigned long long localNewsPromotionIndex;
@property (nonatomic) BOOL hasFeedMaxCount;
@property (nonatomic) unsigned long long feedMaxCount;
@property (nonatomic) BOOL hasFeedItemMaxCount;
@property (nonatomic) unsigned long long feedItemMaxCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
