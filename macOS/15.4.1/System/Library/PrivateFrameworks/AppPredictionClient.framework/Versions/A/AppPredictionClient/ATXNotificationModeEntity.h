@class ATXAppModeEntity, NSString, ATXModeEntityScore, ATXContactModeEntity;

@interface ATXNotificationModeEntity : NSObject <ATXModeEntityProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXAppModeEntity *appEntity;
@property (retain, nonatomic) ATXContactModeEntity *contactEntity;
@property (nonatomic) double receiveTimestamp;
@property (retain, nonatomic) ATXModeEntityScore *scoreMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)jsonDict;
- (id)initWithUNNotification:(id)a0;
- (id)contactEntityFromUserNotification:(id)a0;
- (id)contactIdFromUserNotification:(id)a0;
- (id)initWithAppEntity:(id)a0;
- (id)initWithAppEntity:(id)a0 contactEntity:(id)a1;
- (id)initWithContactEntity:(id)a0;
- (id)initWithUserNotification:(id)a0;

@end
