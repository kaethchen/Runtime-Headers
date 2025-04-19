@class NSString, NSURL;
@protocol RemoteNotificationControllerClient;

@interface RemoteNotificationVerificationRequest : NSObject

@property (readonly, nonatomic) unsigned long long requestID;
@property (readonly, copy, nonatomic) NSString *websiteIdentifier;
@property (readonly, copy, nonatomic) NSURL *referrerURL;
@property (copy, nonatomic) NSString *websiteName;
@property (weak, nonatomic) id<RemoteNotificationControllerClient> controllerClient;

- (void).cxx_destruct;
- (id)initWithWithID:(unsigned long long)a0 websiteIdentifier:(id)a1 referrerURL:(id)a2 controllerClient:(id)a3;

@end
