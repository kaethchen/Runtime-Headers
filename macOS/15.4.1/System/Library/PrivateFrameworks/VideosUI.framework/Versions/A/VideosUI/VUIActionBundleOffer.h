@class NSString, NSDictionary, VUIAppContext;

@interface VUIActionBundleOffer : VUIAction

@property (retain, nonatomic) NSString *offerURLString;
@property (retain, nonatomic) NSString *offerDomain;
@property (retain, nonatomic) NSString *notificationTitle;
@property (retain, nonatomic) NSString *notificationBundleTitle;
@property (retain, nonatomic) NSString *notificationBody;
@property (retain, nonatomic) NSString *sharedWatchUrl;
@property (nonatomic) BOOL isMultiOfferDynamicVC;
@property (retain, nonatomic) NSString *secondaryOfferNotificationTitle;
@property (retain, nonatomic) NSString *secondaryOfferNotificationBody;
@property (retain, nonatomic) NSDictionary *offerMetrics;
@property (retain, nonatomic) VUIAppContext *appContext;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
