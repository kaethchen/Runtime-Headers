@class NSString, NSDictionary, ICQDaemonOfferConditions, ICQDaemonOfferCriteria;

@interface ICQDaemonOfferStub : NSObject {
    NSDictionary *_serverDict;
}

@property (readonly, nonatomic) NSString *offerId;
@property (readonly, nonatomic, getter=isBuddyOffer) BOOL buddyOffer;
@property (readonly, nonatomic, getter=isDefaultOffer) BOOL defaultOffer;
@property (readonly, nonatomic, getter=isPremiumOffer) BOOL premiumOffer;
@property (readonly, nonatomic, getter=isEventOffer) BOOL eventOffer;
@property (readonly, nonatomic) NSString *offerResetURL;
@property (readonly, nonatomic) NSDictionary *offerResetPayload;
@property (readonly, nonatomic) ICQDaemonOfferCriteria *criteria;
@property (copy, nonatomic) ICQDaemonOfferConditions *conditionsWhenChosen;
@property (readonly, nonatomic) NSDictionary *serverDictionary;

- (void).cxx_destruct;
- (long long)requestType;
- (id)initWithServerDictionary:(id)a0;
- (Class)offerClass;
- (id)persistedOffer;

@end
