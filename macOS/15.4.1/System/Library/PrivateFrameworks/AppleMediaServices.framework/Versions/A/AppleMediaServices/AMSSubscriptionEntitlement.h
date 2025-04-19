@class NSNumber, NSString, NSDate;

@interface AMSSubscriptionEntitlement : NSObject

@property BOOL autoRenewEnabled;
@property (retain) NSNumber *chargeStoreFrontID;
@property (retain) NSDate *expiration;
@property (retain) NSString *entitlementOriginType;
@property (retain) NSNumber *entitlementSourceAdamId;
@property (retain) NSString *externalSubscriptionID;
@property (retain) NSNumber *familyRank;
@property BOOL familySubscription;
@property (retain) NSNumber *featureAccessTypeId;
@property BOOL freeTrialEligible;
@property (retain) NSNumber *freeTrialPeriodId;
@property (retain) NSNumber *inAppAdamId;
@property (retain) NSString *inAppVersion;
@property double initialPurchaseTimestamp;
@property BOOL inFreePeriod;
@property (retain) NSString *offerId;
@property unsigned long long period;
@property (retain) NSString *poolType;
@property (retain) NSNumber *promoScenarioId;
@property BOOL purchaser;
@property (retain) NSDate *renewDate;
@property double serviceBeginsTimestamp;
@property unsigned int source;
@property (retain) NSDate *startDate;
@property unsigned int status;
@property (retain) NSDate *studentExpirationDate;
@property (retain) NSNumber *subscriptionBundleId;
@property (retain) NSString *vendorAdHocOfferId;
@property (retain) NSString *vendorId;
@property long long carrierErrorCode;
@property (retain) NSString *carrierOperatorName;
@property (retain) NSString *carrierPhoneNumber;
@property (retain) NSString *carrierSessionId;
@property unsigned int carrierStatus;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)exportObject;

@end
