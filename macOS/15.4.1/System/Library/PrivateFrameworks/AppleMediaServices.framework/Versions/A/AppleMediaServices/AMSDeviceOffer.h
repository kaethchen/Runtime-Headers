@class NSString, NSSet, AMSBagKeySet, NSNumber;

@interface AMSDeviceOffer : NSObject <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (copy) NSNumber *dsid;
@property (copy) NSNumber *adamId;
@property (copy) NSString *description;
@property (getter=isDowngrading) BOOL downgrading;
@property (copy) NSString *offerIdentifier;
@property (readonly) unsigned long long offerType;
@property (readonly) NSSet *serialNumbers;
@property (getter=isSubscribed) BOOL subscribed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)offersSetFromArray:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithOfferIdentifier:(id)a0;

@end
