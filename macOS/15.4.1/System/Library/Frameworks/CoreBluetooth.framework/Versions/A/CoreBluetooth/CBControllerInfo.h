@class NSArray, NSString, NSData, NSError;

@interface CBControllerInfo : NSObject <CUXPCCodable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *audioLinkQualityArray;
@property (nonatomic) long long bluetoothState;
@property (copy, nonatomic) NSString *chipsetID;
@property (nonatomic) unsigned char cloudSyncStatus;
@property (nonatomic) int discoverableState;
@property (nonatomic) BOOL fastLEConnectionAllowed;
@property (copy, nonatomic) NSData *fastLEConnectionInfoData;
@property (nonatomic) unsigned char fastLEConnectionInfoVersion;
@property (copy, nonatomic) NSString *firmwareName;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSData *hardwareAddressData;
@property (nonatomic) char hciTransportType;
@property (nonatomic) int inquiryState;
@property (nonatomic) unsigned char leaVersion;
@property (nonatomic) unsigned char lmpVersion;
@property (nonatomic) unsigned int productID;
@property (nonatomic) unsigned int supportedServices;
@property (nonatomic) unsigned short vendorID;
@property (nonatomic) unsigned char vendorIDSource;
@property (copy, nonatomic) NSError *lastChipsetInitError;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
