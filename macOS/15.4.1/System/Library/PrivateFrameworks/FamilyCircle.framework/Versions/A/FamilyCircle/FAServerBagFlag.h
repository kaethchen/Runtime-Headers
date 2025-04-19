@class NSString;

@interface FAServerBagFlag : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) BOOL value;
@property (nonatomic) long long intValue;

+ (id)megadomeKillSwitch;
+ (id)memberPhotoRequest404CacheDurationHours;
+ (id)registerDeviceWithPDS;

- (long long)getCacheDurationforMemberPhoto404Response:(BOOL)a0;
- (void)grabFromServer;
- (id)initWithServerKey:(id)a0;
- (BOOL)isEnabledWithForceRefresh:(BOOL)a0;

@end
