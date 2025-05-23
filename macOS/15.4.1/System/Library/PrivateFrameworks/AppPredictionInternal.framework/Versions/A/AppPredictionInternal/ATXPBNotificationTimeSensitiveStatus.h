@class NSString;

@interface ATXPBNotificationTimeSensitiveStatus : PBCodable <NSCopying> {
    struct { unsigned char isTimeSensitiveAndEngagedNotification : 1; unsigned char isTimeSensitiveNotification : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasIsTimeSensitiveNotification;
@property (nonatomic) BOOL isTimeSensitiveNotification;
@property (nonatomic) BOOL hasIsTimeSensitiveAndEngagedNotification;
@property (nonatomic) BOOL isTimeSensitiveAndEngagedNotification;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
