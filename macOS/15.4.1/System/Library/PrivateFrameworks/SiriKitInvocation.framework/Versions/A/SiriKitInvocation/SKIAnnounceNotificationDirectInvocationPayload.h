@class NSString, NSArray, UNNotification;

@interface SKIAnnounceNotificationDirectInvocationPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) UNNotification *notification;
@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *appBundleIdOfLastAnnouncement;
@property (nonatomic) unsigned long long synchronousBurstIndex;
@property (nonatomic) BOOL isMediaPlaying;
@property (nonatomic) BOOL isSameTypeAsLastAnnouncement;
@property (nonatomic) double timeSinceLastAnnouncement;
@property (nonatomic) long long announcementPlatform;
@property (nonatomic) BOOL isBobbleCapableAnnouncement;
@property (copy, nonatomic) NSArray *summaries;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)notificationIdentifier;
- (id)initWithNotification:(id)a0 appBundleId:(id)a1 appBundleIdOfLastAnnouncement:(id)a2 synchronousBurstIndex:(unsigned long long)a3 isSameTypeAsLastAnnouncement:(BOOL)a4 timeSinceLastAnnouncement:(double)a5 announcementPlatform:(long long)a6 isMediaPlaying:(BOOL)a7;
- (id)initWithNotification:(id)a0 appBundleId:(id)a1 appBundleIdOfLastAnnouncement:(id)a2 synchronousBurstIndex:(unsigned long long)a3 isSameTypeAsLastAnnouncement:(BOOL)a4 timeSinceLastAnnouncement:(double)a5 announcementPlatform:(long long)a6 isMediaPlaying:(BOOL)a7 isBobbleCapableAnnouncement:(BOOL)a8 summaries:(id)a9;

@end
