@class INImage, NSString, NSArray, NSUserActivity, NSDate, NSNumber, INPriceRange;

@interface INRideOption : NSObject <INCacheableContainer, INRideOptionExport, NSCopying, NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *name;
@property (copy) NSDate *estimatedPickupDate;
@property (copy) INPriceRange *priceRange;
@property (copy) NSNumber *usesMeteredFare;
@property (copy) NSString *disclaimerMessage;
@property (copy) NSArray *availablePartySizeOptions;
@property (copy) NSString *availablePartySizeOptionsSelectionPrompt;
@property (copy) NSString *specialPricing;
@property (copy) INImage *specialPricingBadgeImage;
@property (copy) NSArray *fareLineItems;
@property (retain) NSUserActivity *userActivityForBookingInApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithName:(id)a0 estimatedPickupDate:(id)a1;

@end
