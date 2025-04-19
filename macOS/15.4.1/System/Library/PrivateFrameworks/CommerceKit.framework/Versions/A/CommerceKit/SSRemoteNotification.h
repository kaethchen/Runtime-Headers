@class NSDictionary, NSNumber, NSString;

@interface SSRemoteNotification : NSObject {
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) NSDictionary *notificationUserInfo;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) NSNumber *targetDSID;
@property (readonly, nonatomic) NSString *alertBodyString;
@property (readonly, nonatomic) NSString *alertCancelString;
@property (readonly, nonatomic) NSString *alertOKString;
@property (readonly, nonatomic) NSString *alertTitleString;
@property (readonly, nonatomic) id badgeValue;
@property (readonly, nonatomic) NSString *soundFileName;

- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (id)_valueForAlertKey:(id)a0;
- (id)initWithNotificationUserInfo:(id)a0;

@end
