@class NSNumber, MOBoolSettingMetadata;

@interface MOFindMySettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *lockFindMyFriendsMetadata;

@property (retain, nonatomic) NSNumber *lockFindMyFriends;

+ (id)groupName;

@end
