@interface ICQAnalytics : NSObject

+ (void)logInAppBannerImpressionWithAppIdentifier:(id)a0;
+ (void)logInAppBannerInteractionWithAppIdentifier:(id)a0 icqActionName:(id)a1;
+ (void)logInAppBannerViewWithAppIdentifier:(id)a0;

- (id)init;
- (void)allSetScreenImpressionWithAttributingAppIdentifier:(id)a0;
- (void)freshmintPageDisplayedFromInAppBannerWithAppIdentifier:(id)a0;
- (void)freshmintPageInteractionFromInAppBannerWithAppIdentifier:(id)a0 interactionIdentifier:(id)a1;
- (void)loadFailedWithLoadIdentifier:(id)a0 duration:(long long)a1 errorCode:(long long)a2;
- (void)loadSucceededWithLoadIdentifier:(id)a0 duration:(long long)a1;
- (void)logInAppBannerEventWithAppIdentifier:(id)a0 eventName:(id)a1;

@end
