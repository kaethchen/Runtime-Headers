@class NSMutableArray;

@interface NTPBNotificationEntity : PBCodable <NSCopying> {
    struct { unsigned char notificationType : 1; unsigned char paidBundleSubscriptionStatus : 1; unsigned char subscriberType : 1; } _has;
}

@property (nonatomic) BOOL hasNotificationType;
@property (nonatomic) int notificationType;
@property (retain, nonatomic) NSMutableArray *tagIds;
@property (nonatomic) BOOL hasSubscriberType;
@property (nonatomic) int subscriberType;
@property (nonatomic) BOOL hasPaidBundleSubscriptionStatus;
@property (nonatomic) int paidBundleSubscriptionStatus;

+ (Class)tagIdType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTagId:(id)a0;
- (void)clearTagIds;
- (id)tagIdAtIndex:(unsigned long long)a0;
- (unsigned long long)tagIdsCount;

@end
