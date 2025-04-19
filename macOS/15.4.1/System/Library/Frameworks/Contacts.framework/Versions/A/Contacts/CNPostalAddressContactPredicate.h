@class NSString, CNPostalAddress;

@interface CNPostalAddressContactPredicate : CNPredicate <CNCDContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) CNPostalAddress *postalAddress;

+ (BOOL)supportsSecureCoding;
+ (id)predicateForKey:(id)a0 value:(id)a1;
+ (id)predicatesForCity:(id)a0;
+ (id)predicatesForCountry:(id)a0;
+ (id)predicatesForISOCountryCode:(id)a0;
+ (id)predicatesForPostalCode:(id)a0;
+ (id)predicatesForState:(id)a0;
+ (id)predicatesForStreet:(id)a0;
+ (id)predicatesForSubAdministrativeArea:(id)a0;
+ (id)predicatesForSubLocality:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPostalAddress:(id)a0;
- (id)cn_coreDataPredicate;

@end
