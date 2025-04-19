@class NSString, ICASCollabNotificationAction;

@interface ICASCollabNotificationData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASCollabNotificationAction *collabNotificationAction;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCollabNotificationAction:(id)a0;

@end
