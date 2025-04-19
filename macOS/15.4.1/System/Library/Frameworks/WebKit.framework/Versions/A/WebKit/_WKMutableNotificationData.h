@class NSString, NSUUID, NSData, NSURL;

@interface _WKMutableNotificationData : _WKNotificationData

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long dir;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) unsigned long long alert;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSURL *securityOrigin;
@property (copy, nonatomic) NSURL *serviceWorkerRegistrationURL;
@property (copy, nonatomic) NSUUID *uuid;

- (id)init;

@end
