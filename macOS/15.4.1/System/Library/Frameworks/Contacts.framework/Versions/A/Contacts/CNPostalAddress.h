@class NSString;

@interface CNPostalAddress : NSObject <CNObjectValidation, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *street;
@property (copy) NSString *subLocality;
@property (copy) NSString *city;
@property (copy) NSString *subAdministrativeArea;
@property (copy) NSString *state;
@property (copy) NSString *postalCode;
@property (copy) NSString *country;
@property (copy) NSString *ISOCountryCode;
@property (copy) NSString *formattedAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)postalAddressWithDictionaryRepresentation:(id)a0;
+ (id)localizedStringForKey:(id)a0;
+ (id)postalAddressWithAddressBookDictionaryRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithPostalAddress:(id)a0;
- (BOOL)isValid:(id *)a0;
- (id)addressBookDictionaryRepresentation;

@end
