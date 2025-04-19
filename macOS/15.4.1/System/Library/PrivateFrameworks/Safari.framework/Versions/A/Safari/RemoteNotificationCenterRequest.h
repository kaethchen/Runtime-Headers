@class NSString;

@interface RemoteNotificationCenterRequest : NSObject

@property (readonly, nonatomic) NSString *websiteIdentifier;

- (void).cxx_destruct;
- (void)centerDelegateDidFinishRequest:(id)a0;
- (void)centerDelegateRequestDidFail;
- (id)initWithWebsiteIdentifier:(id)a0;

@end
