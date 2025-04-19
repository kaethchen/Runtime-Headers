@class NSNumber, NSString, NSArray;

@interface MTRSetupPayload : NSObject <NSCopying, NSSecureCoding> {
    struct SetupPayload { unsigned char version; unsigned short vendorID; unsigned short productID; unsigned char commissioningFlow; struct Optional<chip::BitFlags<chip::RendezvousInformationFlag, unsigned char>> { struct ValueHolder { BOOL mHasValue; union Value { struct BitFlags<chip::RendezvousInformationFlag, unsigned char> { unsigned char mValue; } mData; } mValue; } mValueHolder; } rendezvousInformation; struct SetupDiscriminator { unsigned short mDiscriminator; BOOL mIsShortDiscriminator; } discriminator; unsigned int setUpPINCode; struct map<unsigned char, chip::OptionalQRCodeInfo, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfo>>> { struct __tree<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>>, std::allocator<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>>> { unsigned long long __value_; } __pair3_; } __tree_; } optionalVendorData; struct map<unsigned char, chip::OptionalQRCodeInfoExtension, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfoExtension>>> { struct __tree<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::less<unsigned char>>, std::allocator<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::less<unsigned char>>> { unsigned long long __value_; } __pair3_; } __tree_; } optionalExtensionData; } _payload;
    NSNumber *_shadowDiscriminator;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *rendezvousInformation;
@property (copy, nonatomic) NSNumber *setUpPINCode;
@property (copy, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *productID;
@property (nonatomic) unsigned long long commissioningFlow;
@property (nonatomic) unsigned long long discoveryCapabilities;
@property (copy, nonatomic) NSNumber *discriminator;
@property (nonatomic) BOOL hasShortDiscriminator;
@property (copy, nonatomic) NSNumber *setupPasscode;
@property (copy, nonatomic) NSString *serialNumber;
@property (readonly, copy, nonatomic) NSArray *vendorElements;

+ (id)new;
+ (void)initialize;
+ (unsigned long long)generateRandomPIN;
+ (id)generateRandomSetupPasscode;
+ (BOOL)isValidSetupPasscode:(id)a0;
+ (id)setupPayloadWithOnboardingPayload:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithPayload:(id)a0;
- (id)manualEntryCode;
- (void)addOrReplaceVendorElement:(id)a0;
- (id)getAllOptionalVendorData:(id *)a0;
- (id)initWithSetupPasscode:(id)a0 discriminator:(id)a1;
- (id)qrCodeString;
- (id)qrCodeString:(id *)a0;
- (void)removeVendorElementWithTag:(id)a0;
- (id)vendorElementWithTag:(id)a0;

@end
