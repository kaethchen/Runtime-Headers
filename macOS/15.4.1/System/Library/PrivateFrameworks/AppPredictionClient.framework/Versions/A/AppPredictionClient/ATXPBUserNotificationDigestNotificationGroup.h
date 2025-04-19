@class NSString, NSMutableArray, ATXPBSharedDigestEngagementTrackingMetrics;

@interface ATXPBUserNotificationDigestNotificationGroup : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char priority : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGroupId;
@property (retain, nonatomic) NSString *groupId;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasGroupDescription;
@property (retain, nonatomic) NSString *groupDescription;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) double priority;
@property (readonly, nonatomic) BOOL hasRepresentativeNotificationUUID;
@property (retain, nonatomic) NSString *representativeNotificationUUID;
@property (retain, nonatomic) NSMutableArray *rankedNotifications;
@property (readonly, nonatomic) BOOL hasSharedEngagementTracker;
@property (retain, nonatomic) ATXPBSharedDigestEngagementTrackingMetrics *sharedEngagementTracker;

+ (Class)rankedNotificationsType;

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
- (id)jsonRepresentation;
- (void)addRankedNotifications:(id)a0;
- (void)clearRankedNotifications;
- (id)initFromJSON:(id)a0;
- (id)rankedNotificationsAtIndex:(unsigned long long)a0;
- (unsigned long long)rankedNotificationsCount;

@end
