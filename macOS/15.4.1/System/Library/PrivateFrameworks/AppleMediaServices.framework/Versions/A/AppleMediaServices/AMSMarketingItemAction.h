@class NSString, NSDictionary, AMSBuyParams, NSArray, NSNumber, NSURL;

@interface AMSMarketingItemAction : NSObject

@property (retain) NSDictionary *rawValues;
@property (readonly) AMSBuyParams *buyParams;
@property (readonly) NSString *callToActionLabel;
@property (readonly) NSString *disclaimerText;
@property (readonly) BOOL isDefault;
@property (readonly) BOOL isFamily;
@property (readonly) BOOL isRecommended;
@property (readonly) NSString *offerID;
@property (readonly) NSNumber *price;
@property (readonly) NSString *priceForDisplay;
@property (readonly) NSNumber *priceDiff;
@property (readonly) NSString *priceDiffForDisplay;
@property (readonly) NSString *valuePropDetail;
@property (readonly) NSString *valuePropInfo;
@property (readonly) NSArray *serviceComponents;
@property (readonly) NSString *type;
@property (readonly) NSURL *url;

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)freeTrialPeriod;
- (id)inAppID;
- (id)introOfferPrice;
- (id)_serviceComponentsFromMap:(id)a0 withNames:(id)a1;
- (id)_serviceNames;
- (id)_servicesData;
- (id)dismissLabel;
- (id)introOfferPeriod;
- (id)introOfferPriceForDisplay;
- (BOOL)isYearly;
- (id)priceFormatted;
- (id)priceString;
- (id)recurringSubscriptionPeriod;

@end
