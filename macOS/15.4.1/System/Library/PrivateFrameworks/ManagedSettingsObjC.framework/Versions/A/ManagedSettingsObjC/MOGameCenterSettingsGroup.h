@class NSString, MOBoolSettingMetadata, MOStringSettingMetadata, NSNumber;

@interface MOGameCenterSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOStringSettingMetadata *allowedOtherPlayerTypesMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyAddingFriendsMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyGameCenterMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyMultiplayerGamingMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyNearbyMultiplayerMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyPrivateMessagingMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *lockFriendsSharingMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *lockProfileMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *lockProfilePrivacyMetadata;

@property (retain, nonatomic) NSString *allowedOtherPlayerTypes;
@property (retain, nonatomic) NSNumber *denyAddingFriends;
@property (retain, nonatomic) NSNumber *denyGameCenter;
@property (retain, nonatomic) NSNumber *denyMultiplayerGaming;
@property (retain, nonatomic) NSNumber *denyNearbyMultiplayer;
@property (retain, nonatomic) NSNumber *denyPrivateMessaging;
@property (retain, nonatomic) NSNumber *lockFriendsSharing;
@property (retain, nonatomic) NSNumber *lockProfile;
@property (retain, nonatomic) NSNumber *lockProfilePrivacy;

+ (id)groupName;

@end
