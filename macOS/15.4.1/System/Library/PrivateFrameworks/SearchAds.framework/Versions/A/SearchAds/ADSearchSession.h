@class NSString, ADCapService, ADParameterFactory, ADClientIdentifierProvider, NSObject;
@protocol OS_dispatch_queue;

@interface ADSearchSession : NSObject {
    NSObject<OS_dispatch_queue> *_idNotificationQueue;
}

@property (retain, nonatomic) ADCapService *capService;
@property (retain, nonatomic) ADParameterFactory *parameterFactory;
@property (retain, nonatomic) NSString *campaignNamespace;
@property (retain, nonatomic) NSObject *notificationObserver;
@property (nonatomic) BOOL notificationReceivedAndWaiting;
@property (retain, nonatomic) NSString *clientRequestID;
@property (retain, nonatomic) ADClientIdentifierProvider *idProvider;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) int appsRank;

- (void)dealloc;
- (void).cxx_destruct;
- (void)requestUserTargetingIdentifier:(id /* block */)a0;
- (id)adParameters;
- (id)campaignNamespaceParameter;
- (id)initWithAppID:(id)a0 appVersion:(id)a1 appsRank:(int)a2;
- (id)initWithAppID:(id)a0 appVersion:(id)a1 appsRank:(int)a2 storeFront:(id)a3;
- (id)populateStoreFrontLanguageLocale:(id)a0;
- (void)requestSponsoredSearchDataRoutingInfoAndRequestIDForLocality:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestSponsoredSearchURL:(id /* block */)a0;
- (id)rotatingIdentifiersProperties;
- (void)searchObjectForCriteria:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)sponsoredSearchRequestForLanguageLocale:(id)a0;
- (BOOL)startUpdatingIDs;
- (id)userTargetingProperties;

@end
