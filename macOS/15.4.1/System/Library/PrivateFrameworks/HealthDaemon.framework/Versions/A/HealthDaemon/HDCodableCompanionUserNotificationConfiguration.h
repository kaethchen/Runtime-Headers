@interface HDCodableCompanionUserNotificationConfiguration : PBCodable <NSCopying> {
    struct { unsigned char notificationType : 1; } _has;
}

@property (nonatomic) BOOL hasNotificationType;
@property (nonatomic) int notificationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsNotificationType:(id)a0;
- (id)notificationTypeAsString:(int)a0;

@end
