@class NSString, NSNumber, CLLocation;

@interface PKPaymentDeviceMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSNumber *primaryJSBLSequenceCounter;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (copy, nonatomic) NSString *uniqueDeviceIdentifier;
@property (copy, nonatomic) NSNumber *uniqueChipIdentifier;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *signedPhoneNumber;
@property (copy, nonatomic) NSString *signedPhoneNumberVersion;
@property (copy, nonatomic) CLLocation *location;
@property (readonly, weak, nonatomic) NSString *extensiveLatitude;
@property (readonly, weak, nonatomic) NSString *extensiveLongitude;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToPaymentDeviceMetadata:(id)a0;

@end
